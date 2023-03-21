#include<iostream>
#include<string>
using namespace std;
// 函数重载
void func(){
    cout<<"func调用"<<endl;
}
void func(int a){
    cout<<"func(int a)调用"<<endl;
}
/* int func(int a){
    cout<<"func(int a)调用"<<endl;
} */
void test(int &a){        // int &a=10; 不合法
    cout<<"test1"<<endl;
}
void test(const int &a){  // const int &a=10; 合法
    cout<<"test2"<<endl;
}

void test2(int a,int b=10){
    cout<<"test2_1"<<endl;
}
void test2(int a){
    cout<<"test2_2"<<endl;
}

int main(){
    system("chcp 65001");

    func();
    func(10); 

    int a=10;
    test(a);
    test(10);

    // test2(a);  // 报错


    return 0;
}