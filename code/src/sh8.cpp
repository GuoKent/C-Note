#include<iostream>
#include<string>
using namespace std;

void bubble(int *arr,int len);

int main(){
    system("chcp 65001");
    int a=10;
    int *p;
    p=&a;
    cout<<"a="<<*p<<endl;
    cout<<"a的地址="<<p<<endl;
    cout<<"sizeof(int *)="<<sizeof(int *)<<endl;
    cout<<"sizeof(float *)="<<sizeof(float *)<<endl;
    cout<<"sizeof(double *)="<<sizeof(double *)<<endl;
    cout<<"sizeof(char *)="<<sizeof(char *)<<endl;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p1=arr;
    cout<<*p1<<endl;
    for (int i=0;i<10;i++)
    {
        cout<<*p1<<" ";
        p1++;
    }
    cout<<endl;

    cout<<"=====指针指向冒泡排序======="<<endl;
    int arr2[]={5,6,8,1,2,7,3,9,4};
    int len = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"len="<<len<<endl;
    bubble(arr2,len);
    

    // system("pause");
    return 0;
}

// 冒泡排序
void bubble(int *arr,int len){
    // int len2=sizeof(arr)/sizeof(arr[0]); arr是指针，占8个字节，sizeof(arr)=8，*arr指向数组第一个元素
    // cout<<"len2="<<len2<<endl;
    int temp;
    for(int i=0;i<len-1;i++){
        for (int j = 0; j < len-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return;
}