#include<iostream>
using namespace std;

class Person
{
public:
    int *age_point;
    int total;
public:
    Person(int age);
    ~Person();
    // 赋值运算符重载必须是类的成员函数
    // 赋值运算符重载其中一个目的是 防止浅拷贝带来的问题
    // 返回一个对象的引用，即自身
    Person &operator=(Person &p){
        if(this->age_point!=NULL){
            *this->age_point=*p.age_point;
        }
        else{
            this->age_point=new int(*p.age_point);
        }
        return *this;
    }
    // 比较运算符重载
    bool operator==(Person &p){
        if(*this->age_point==*p.age_point) return true;
        else return false;
    }
    bool operator!=(Person &p){
        if(*this->age_point!=*p.age_point) return true;
        else return false;
    }
    bool operator>(Person &p){
        if(*this->age_point>*p.age_point) return true;
        else return false;
    }
    bool operator<(Person &p){
        if(*this->age_point<*p.age_point) return true;
        else return false;
    }
    // 仿函数——函数调用运算符重载
    int operator()(int grade1,int grade2){
        return grade1+grade2;
    }
};

Person::Person(int age)
{
    age_point=new int(age);
}

Person::~Person()
{
    // 释放堆区内存要注意 深拷贝 和 浅拷贝 问题
    if(age_point!=NULL){
        delete age_point;
        age_point=NULL;
    }
}

int main(){
    Person p1(18),p2(20);
    // 赋值运算符测试
    cout<<*p2.age_point<<endl;
    p2=p1;
    cout<<*p2.age_point<<endl;
    // 比较运算符测试
    cout<<(p1==p2)<<endl;
    cout<<(p1!=p2)<<endl;
    cout<<(p1>p2)<<endl;
    cout<<(p1<p2)<<endl;
    // 仿函数测试
    p1.total=p1(84,64);
    // 匿名函数对象调用仿函数
    // 第一个()是构造函数的参数,第二个()是函数重载调用
    int total=Person(20)(15,84);
    cout<<p1.total<<endl;
    cout<<total<<endl;
    return 0;
}