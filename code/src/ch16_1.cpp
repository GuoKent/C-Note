#include<iostream>
using namespace std;

class Animal
{
private:
    /* data */
public:
    virtual void func(){
        cout<<"Animal"<<endl;
    }
};

class Cat : public Animal
{
public:
    void func(){
        cout<<"Cat"<<endl;
    }
};
class Dog : public Animal
{
public:
    void func(){
        cout<<"Dog"<<endl;
    }
};
void doSpeak(Animal &a){
    a.func();
}

int main(){
    Cat cat;
    Dog dog;
    cat.func();
    dog.func();
    doSpeak(cat);
    return 0;
}