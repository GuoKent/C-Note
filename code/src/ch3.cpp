#include<string>
#include<iostream>
using namespace std;

int maxnum(int a,int b){
    return a>b ? a:b;
}
int main(){
    //system("chcp 65001");
    int a=23;
    int b=30;
    int c=50;
    
    c=a>b ? a:b;
    cout<<c<<endl;
    cout<<maxnum(a,b)<<endl;
    cout<<"测试"<<endl;

    switch(c){
        case 20: cout<<"一般"<<endl;break;
        case 30: cout<<"良好"<<endl;break;
        case 40: cout<<"优秀"<<endl;break;
        case 50: cout<<"神作"<<endl;break;
        default: cout<<"评分过低"<<endl;break;
    }
    return 0;
}