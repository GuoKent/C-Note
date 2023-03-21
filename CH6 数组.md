#### 一维数组定义方式

```c++
// 1.数据类型 数组名[数组长度];
// 2.数据类型 数组名[数组长度]={值1,值2,...};
// 3.数据类型 数组名[]={值1,值2,...};

int arr1[10];
int arr2[2]={0,1};
int arr2_1[5]={1，2，3}  // 如果没有全部填完，后面的数会用0填补
int arr3[]={1,2,3,4};
```

##### 数组名的用途

- 统计整个数组在内存中的长度
- 获取数组在内存中的首地址

```c++
cout<<"sizeof(arr1)="<<sizeof(arr1)<<endl;
// 整型数组，每个元素占4个字节，arr1长度为10，共40个字节

cout<<"arr1首地址="<<arr1<<endl;
// arr1首地址=0x61fdf0
cout<<"arr1第二个元素的地址="<<(int)&arr1[1]<<endl;
// 前面加&获取各个元素的地址，可转换成整型

cout<<"数组中元素个数="<<sizeof(arr1)/sizeof(arr1[0])<<endl;
// 数组元素个数的简单计算方式
```

##### 冒泡排序

```c++
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
```



#### 二维数组

```c++
// 几种定义方式
int arr1[2][3];
int arr2[2][3]={
    {1,2,3},
    {4,5,6}
};
int arr3[2][3]={1,2,3,4,5,6};
int arr4[][3]={1,2,3,4,5,6};
```

##### 数组名的用途

- 统计整个数组在内存中的长度
- 获取数组在内存中的首地址

```c++
int arr[2][3]={1,2,3,4,5,6};
cout<<"arr所占内存空间："<<sizeof(arr)<<endl;
cout<<"arr第一行所占内存空间："<<sizeof(arr[0])<<endl;
cout<<"arr第一个元素所占内存空间："<<sizeof(arr[0][0])<<endl;

// 求数组行数和列数
cout<<"arr行数："<<sizeof(arr)/sizeof(arr[0])<<endl;
cout<<"arr列数："<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
```

