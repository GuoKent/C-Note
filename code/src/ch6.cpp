#include<iostream>
#include<string>
using namespace std;
int main(){
    system("chcp 65001");
    // 一维数组定义
    int arr1[10];
    int arr2[2]={0,1};
    int arr3[]={1,2,3,4};
    cout<<"arr3[2]="<<arr3[2]<<endl;

    cout<<"sizeof(arr1)="<<sizeof(arr1)<<endl;
    cout<<"arr1首地址="<<arr1<<endl;
    cout<<"arr1第二个元素的地址="<<&arr1[1]<<endl;
    cout<<"数组中元素个数="<<sizeof(arr1)/sizeof(arr1[0])<<endl;

    // 冒泡排序
    cout<<"==========冒泡排序=========="<<endl;
    int arr[]={5,6,8,1,2,7,3,9,4};
    int temp;
    for(int i=0;i<8;i++){
        for (int j = 0; j < 8 - i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"arr=";
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}