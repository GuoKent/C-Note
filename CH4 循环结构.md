#### while循环

```c++
int a=10;
while (a>0)
{
    cout<<a<<endl;
    a-=1;
}
```

#### do...while循环

```C++
bool flag=false;
do
{
    cout<<"flag="<<flag<<endl;
} while (flag==1);
```

> 两者的区别在于：
>
> - while是先判断循环条件在执行语句
> - do...while是**先执行一次语句**再判断循环条件



#### for循环

```c++
// 方法1
for (int i = 0; i < 10; i++)
{
    cout<<i<<endl;
}

// 方法2
int i=0;
for (; i < 10; i++)
{
    cout<<i<<endl;
}
```

