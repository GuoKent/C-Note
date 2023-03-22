#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
    Animal(){
        cout<<"Animal构造函数调用"<<endl;
    }
    // 虚析构
    // 如果不适用虚析构，会产生父类指针无法释放子类对象的问题，造成内存泄漏
    virtual ~Animal(){
        cout<<"Animal析构函数调用"<<endl;
    }
    // 纯虚析构(二者只能有一个)
    // 有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
    // virtual ~Animal()=0;
};
/*Animal::~Animal(){
    cout<<"Animal纯虚析构函数调用"<<endl;
}*/

class Cat : public Animal
{
public:
    string *Nameptr;
    Cat(string name){
        cout<<"Cat构造函数调用"<<endl;
        Nameptr=new string(name);
    }
    ~Cat(){
        cout<<"Cat析构函数调用"<<endl;
        if(this->Nameptr!=NULL){
            delete Nameptr;
            Nameptr=NULL;
        }
    }
};

int main(){
    system("chcp 65001");
    Animal *animal=new Cat("Tom");
    // 如果不delete，析构函数不会调用
    delete animal;
    
    return 0;
}