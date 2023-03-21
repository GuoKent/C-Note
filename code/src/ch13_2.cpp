#include<iostream>
#include<string>
using namespace std;

class Person
{
private:
    string name;
    int age=0;
public:
    void setInfo(string name1,int age1){
        name=name1;
        age=age1;
    }
    // 构造函数和析构函数的声明
    Person();                 // 无参构造
    Person(string n,int a);            // 有参构造
    Person(const Person &p);  // 拷贝构造
    ~Person();                // 析构函数
};
// 无参构造
Person::Person()
{
    cout<<"无参构造调用"<<endl;
}
// 有参构造
Person::Person(string n,int a)
{
    name=n;
    age=a;
    cout<<"有参构造调用"<<endl;
}
// 拷贝构造
Person::Person(const Person &p)
{
    name=p.name;
    age=p.age;
    cout<<"拷贝构造调用"<<endl;
}
// 析构函数
Person::~Person()
{
    cout<<"析构函数调用"<<endl;
}

int main(){
    system("chcp 65001");

    Person p1;
    p1.setInfo("Mike",18);
    Person p2("Alice",19);
    Person p3(p1);

    Person("Jack",20);  // 匿名对象 当前行执行结束后，系统会立即回收掉匿名对象
    // Person(p3) // Person(p3)==Person p3; 不要用拷贝构造定义匿名对象
    return 0;
}