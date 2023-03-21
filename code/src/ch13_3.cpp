#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int id;
    int *age; // 要开辟到堆区，所以定义指针
public:
    Person() : id(000), age(new int(00)) {}
    // Person(int id1, int age1) : id(id1), age(new int(age1)) {}  // 和下面等价
    Person(int id1, int age1);
    Person(const Person &p);
    ~Person();
};

Person::Person(int id1, int age1)
{
    id = id1;
    age = new int(age1); // 存放在堆区
    cout << "有参构造调用" << endl;
}
Person::Person(const Person &p)
{
    id = p.id;
    // age=p.age; // 编译器默认实现
    age = new int(*p.age); // 深拷贝
    cout << "拷贝构造调用" << endl;
}
Person::~Person()
{
    // 堆区内存释放
    if (age != NULL)
    {
        delete age;
    }
    cout << "析构函数调用" << endl;
}

int main()
{
    system("chcp 65001");

    Person p1(001, 18);

    Person p2(p1);
}