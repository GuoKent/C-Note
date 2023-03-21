#### 指针

##### 指针定义

```c++
int a=10;
int *p;
p=&a;
cout<<"a="<<*p<<endl;
cout<<"a的地址="<<p<<endl;
```

##### 占用内存

32位操作系统下占4个字节，64位操作系统下占8个字节，不管什么数据类型

```c++
cout<<"sizeof(int *)="<<sizeof(int *)<<endl;       // 8
cout<<"sizeof(float *)="<<sizeof(float *)<<endl;   // 8
cout<<"sizeof(double *)="<<sizeof(double *)<<endl; // 8
cout<<"sizeof(char *)="<<sizeof(char *)<<endl;     // 8
```

##### 空指针

```c++
int *p=NULL;
```

**空指针：**指针变量指向内存中编号为0的空间

**用途：**初始化指针变量

**注意：**空指针指向的内存是**不可以访问的**

>0~255之间的内存编号是系统占用

##### 野指针

**野指针：**指针变量指向非法的内存空间

```c++
// 指针变量指向编号为0x1100的空间
int *p=(int *)0x1100;

// 访问野指针报错
cout<<*p<<endl;
```



#### const修饰指针

##### 常量指针

`const int *p;`

**特点：**指针指向的可以修改，指针指向的值不可以改

```c++
int a=10;
int b=20;
const int *p=&a;
*p=20;  // 错误，指针指向的值不可以改
p=&b;   // 正确，指针指向可以改
```



##### 指针常量

`int * const p;`

**特点：**指针指向不可以改，指针指向的值可以改

```c++
int a=10;
int b=20;
int * const p=&a;
*p=20;  // 正确，指针指向的值可以改
p=&b;   // 错误，指针指向不可以改
```



##### 指针常量指针

`const int * const p;`

**特点：**指针指向和指针指向的值都不可以改

```c++
int a=10;
int b=20;
int * const p=&a;
*p=20;  // 错误，指针指向的值不可以改
p=&b;   // 错误，指针指向不可以改
```



#### 指针和数组

```c++
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int *p=arr;
cout<<*p<<endl;    // 1
p++;               // 指针向后偏移4个字节
cout<<*p<<endl;    // 2

// 指针循环访问数组
for (int i=0;i<10;i++)
{
    cout<<*p1<<" ";
    p1++;
}
cout<<endl;
```



#### 指针和函数

```c++
void swap1(int &num1,int &num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    return ;
}
void swap2(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    return ;
}

// 调用函数
int a=12;
int b=23;
swap1(a,b);     // a=23,b=12
swap2(&a,&b);   // a=23,b=12
```

##### 冒泡排序—指针调用实例

```c++
void bubble(int *arr,int len){  // int *arr 等效于 int arr[]
    // arr是指针，占8个字节，sizeof(arr)=8，*arr指向数组第一个元素
    // int len=sizeof(arr)/sizeof(arr[0]);
    // cout<<"len="<<len<<endl;
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

int main(){
    system("chcp 65001");
    cout<<"=====指针指向冒泡排序======="<<endl;
    int arr2[]={5,6,8,1,2,7,3,9,4};
    int len = sizeof(arr2)/sizeof(arr2[0]);
    cout<<"len="<<len<<endl;
    bubble(arr2,9);
    // system("pause");
    return 0;
}
```

> 注意：在函数内的arr是指针，占8个字节，无法在函数内求数组的长度

##### string指针

使用`c_str()`函数来定义string指针

```c++
string s="abcd";
const char *p=s.c_str();
cout<<p<<endl;  // abcd
cout<<*p<<endl; // a
p+=2;
cout<<p<<endl;  // cd
cout<<*p<<endl; // c
```

