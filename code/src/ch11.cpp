#include<iostream>
#include<string>
using namespace std;

void swap01(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
/* int& test2(){
    int a=10;
    return a;
} */
int& test2(){
    static int a=10;
    return a;
}
void showvalue(const int& val){
    cout<<"val="<<val<<endl;
}

int main(){
    int a=10;
    int &b=a;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    b=100;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    int c=20;
    b=c;

    int& ref=test2();
    cout<<"ref="<<ref<<endl;
    // test2()=1000;
    cout<<"ref="<<ref<<endl;

    // int& ref2=10; // 错误，引用必须指向一块合法的内存空间
    const int& ref2=10;  // 相当于int temp=10; int& ref2=temp;

    showvalue(c);

    return 0;
}