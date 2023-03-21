#include<iostream>
#include<string>
using namespace std;

int main(){
    system("chcp 65001");
    int a=10;
    while (a>0)
    {
        cout<<a<<endl;
        a-=1;
    }

    bool flag=false;
    do
    {
        cout<<"flag="<<flag<<endl;
    } while (flag==1);

    cout<<"水仙花数"<<endl;

    int i=100;
    while (i<1000)
    {
        int f1=i%10;      // 个位
        int f2=i%100/10;  // 十位
        int f3=i/100;     // 百位
        if (f1*f1*f1+f2*f2*f2+f3*f3*f3==i)
        {
            cout<<i<<endl;
        }
        i+=1;
    }

    cout<<"敲桌子"<<endl;
    for (int i = 1; i <= 100; i++)
    {
        int f1=i%10;
        int f2=i/10;
        int f3=i%7;
        if(f1==7||f2==7||f3==0){
            cout<<i<<endl;
        }
    }

    cout<<"乘法口诀表"<<endl;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"x"<<i<<"\t";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}