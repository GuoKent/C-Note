#include<iostream>
#include<string>
using namespace std;

class workers
{
private:
    
public:
    workers(int id,string sex,int age);
    string sex;
    int id;
    int age;
    static int b;
};
int workers::b=100;

workers::workers(int id,string sex,int age)
{
    this->age=age;
    this->id=id;
    this->sex=sex;
}

class Teachers : public workers
{
public:
    int curriculum;
    void showInfo(){
        cout<<"Teacher:"<<this->id<<"\t"<<this->sex<<"\t"<<this->age<<endl;
        cout<<"Curriculum:"<<this->curriculum<<endl;
    }
    // 继承的构造函数
    // 要按顺序来定义参数，且参数名称要和父类workers一样
    Teachers(int id,string sex,int age,int curriculum) : workers(id,sex,age){
        this->curriculum=curriculum;
    }
};

int main(){
    Teachers t(10,"male",29,1001);
    t.showInfo();
    return 0;
}