#### if语句

**语法：**`if(条件){执行内容}`

```c++
if(score>=600){
    cout<<"985"<<endl;
}
else if (score>=500){
    cout<<"211"<<endl;
}
else{
    cout<<"nothing"<<endl;
}
```



#### 三目运算符

**语法：**`表达式1 ? 表达式2:表达式3`

```c++
int a=23;
int b=30;
int c=50;
    
c=a>b ? a:b;
cout<<c<<endl;   // c=30

return 0;
```



#### switch语句

```c++
switch(c){
    case 20: cout<<"一般"<<endl;break;
    case 30: cout<<"良好"<<endl;break;
    case 40: cout<<"优秀"<<endl;break;
    case 50: cout<<"神作"<<endl;break;
    default: cout<<"评分过低"<<endl;break;
}
```

> 注意1：switch语句中表达式类型只能是整型或者字符型（变量c、case后面的数）
>
> 注意2：case里如果没有break，那么程序会一直向下运行
>
> 优点：结构清晰，执行效率高；缺点：不可以判断区间