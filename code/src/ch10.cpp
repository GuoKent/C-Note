#include<iostream>
#include<string>
using namespace std;

// 全局变量ga、gb
int ga=10;
int gb=20;
const int gc=30;

int* func(){
    int as=10;     // 局部变量，存放在栈区，函数执行完后自动释放
    return &as;    // 返回局部变量的地址
}
int* func2(){
    int *p=new int(10);
    return p;
}
void newp(){
    int *p=new int(10);
    cout<<"new *p="<<*p<<endl;
    delete p;
}
void newarr(){
    int *arr=new int[10];  // 堆区开辟一个长度为10的数组
    for (int i = 0; i < 10; i++)
    {
        arr[i]=100+i;
    }
    cout<<"new *arr=";
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;  // 释放堆区数组
}


int main(){
    system("chcp 65001");

    // 局部变量a、b
    int a=10;
    int b=20;
    cout<<"局部变量a地址:"<<&a<<endl;
    cout<<"局部变量a地址:"<<&b<<endl;
    cout<<"全局变量ga地址:"<<&ga<<endl;
    cout<<"全局变量gb地址:"<<&gb<<endl;

    // 静态变量
    static int sa=10;
    static int sb=20;
    cout<<"静态变量sa地址:"<<&sa<<endl;
    cout<<"静态变量sb地址:"<<&sb<<endl;

    // 常量
    // 字符串常量
    cout<<"字符串常量地址:"<<&"hello world"<<endl;

    // const修饰的全局变量
    cout<<"全局常量gc地址:"<<&gc<<endl;
    // const修饰的局部变量
    const int c=30;
    cout<<"局部常量gc地址:"<<&c<<endl;

    /* // 栈区释放
    int *p=func();
    cout<<*p<<endl;
    cout<<*p<<endl; */

    // 堆区开辟数据
    int *p2=func2();
    cout<<*p2<<endl;

    // new、delete操作符
    newp();
    newarr();


    return 0;
}