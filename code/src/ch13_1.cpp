#include<iostream>
#include<string>
using namespace std;

double pi=3.14;

class Circle
{
public:  // 公共权限
    int r;
    double calculate(){
        return 2*pi*r;
    };
};

class Student
{
private:
    string name;
    int age;
public:
    void setInfo(string name1,int age1){
        name=name1;
        age=age1;
    }
    void showInfo(){
        cout<<"Name:"<<name<<"\t"<<"Age:"<<age<<endl;
    }

};

int main(){
    // 创建对象
    Circle c1;
    // 给对象赋值
    c1.r=10;
    cout<<c1.calculate()<<endl;

    Student s1;
    s1.setInfo("Mike",18);
    s1.showInfo();

    return 0;
}