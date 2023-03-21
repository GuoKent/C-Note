#### 函数的定义

1. 返回值类型
2. 函数名
3. 参数列表
4. 函数体
5. return表达式

##### 值传递

```c++
int add(int num1,int num2){  // num1、num2称为形参
    return num1+num2;
}
void swap(int &num1,int &num2){  // 传入地址
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
    
    swap(a,b);
    cout<<a<<" "<<b<<endl;  // a=23,b=12

    return 0;
}
```



> swap函数为地址传递，不会为形参另外分配空间，num1代表的地址和传入的a地址相同，指向同一块地方，因此会直接影响到a和b的值



#### 函数声明

```c++
// 函数声明
int add(int num1,int num2);

int main(){
    int a=12;
    int b=23;
    cout<<add(a,b)<<endl;

    return 0;
}

// 定义函数
int add(int num1,int num2){  // num1、num2称为形参
    return num1+num2;
}
```

> 如果要把函数写在main函数后面，那么在main运行前要声明有该函数，否则main执行过程中不知道有该函数定义。



#### 函数分文件编写

1. 创建后缀名为.h的头文件
2. 创建后缀名为.cpp的源文件
3. 在头文件中写函数的声明
4. 在源文件中写函数的定义

##### swap.h

```c++
#include <iostream>
using namespace std;

// 函数声明
void swap(int &num1,int &num2);
```

##### swap.cpp

```c++
#include "swap.h"

void swap(int &num1,int &num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    return ;
}
```

##### main.cpp

```c++
int a=12;
int b=21;
swap(a,b);
```

