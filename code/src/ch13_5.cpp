#include<iostream>
using namespace std;

class Person
{
private:
    int age;
    mutable int false_age; // 特殊变量，在 常函数 或 常对象 中也能被修改
public:
    Person(int age);
    ~Person();
    void showClassName(){
        cout<<"Class: Person"<<endl;
    }
    // 成员函数后面加const，修饰的是this指针，让指针指向的值不可修改
    void showAge() const
    {
        // this->age=100;
        false_age=100;
        if(this==NULL) return;  // 提高代码的健壮性
        cout<<"age="<<this->age<<endl;
    }
    // 返回对象本身用*this
    Person& addAge(int addage){
        this->age+=addage;
        return *this;
    }
};

Person::Person(int age)
{
    this->age=age;
}

Person::~Person()
{
}

int main(){
    Person p1(18);
    p1.showAge();
    // 链式编程思想
    p1.addAge(10).addAge(10).addAge(10);
    p1.showAge();
    // 空指针访问成员函数
    Person *p=NULL;
    p->showClassName();
    p->showAge();
    // 常对象只能调用常函数
    const Person p2(20);
    // p2.addAge(10); // 报错，只能调用常函数
    p2.showAge();
    
    return 0;
}