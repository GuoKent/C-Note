#include<iostream>
#include<string>
#include "swap.h"
using namespace std;

int add(int num1,int num2){  // num1、num2称为形参
    return num1+num2;
}
void swap(int &num1,int &num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    return ;
}

int main(){
    int a=12;
    int b=23;
    cout<<add(a,b)<<endl;

    int arr[3]={1,2,3};
    swap(arr[0],arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}