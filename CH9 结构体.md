#### 结构体

##### 定义和使用

**语法：**`struct 结构体名{结构体成员列表}`

```c++
struct student
{
    string name;
    int age;
    int score;

}s3;

int main(){
    // 1.创建好结构体对象后定义参数
    struct student s1;
    s1.name="ZhangSan";
    s1.age=18;
    s1.score=90;
    cout<<s1.name<<"\t"<<s1.age<<"\t"<<s1.score<<endl;

    // 2.在创建结构体对象时定义参数
    struct student s2={"LiSi",20,75};
    cout<<s2.name<<"\t"<<s2.age<<"\t"<<s2.score<<endl;

    // 3.在定义结构体时顺便创建一个结构体对象
    s3.name="WangWu";
    s3.age=26;
    s3.score=88;
    cout<<s3.name<<"\t"<<s3.age<<"\t"<<s3.score<<endl;


    return 0;
}
```

#### 结构体数组

**语法：**`struct 结构体名 数组名{元素个数}={{},{},...,{}};`

```c++
// 结构体数组
struct student stu[3]={
    {"Mike",12,64},
    {"Amy",16,84},
    {"Jack",24,73}
};
for (int i = 0; i < 3; i++)
{
    cout<<stu[i].name<<"\t"<<stu[i].age<<"\t"<<stu[i].score<<endl;
}
```

#### 结构体指针

- 利用操作符`->`可以通过结构体指针访问结构体属性

```c++
// 结构体指针
student s={"Alice",26,65};
student *p=&s;
cout<<p->name<<"\t"<<p->age<<"\t"<<p->score<<endl;
```

#### 结构体嵌套结构体

```c++
struct student
{
    string name;
    int age;
    int score;

}s3;
struct teacher
{
    int id;
    string name;
    int age;
    student stu;
};

int main(){
    teacher t1;
    // 结构体嵌套结构体
    teacher t={001,"Joe",56,s};
    cout<<t.id<<"\t"<<t.name<<"\t"<<t.age<<"\t"<<t.stu.name<<endl;
   
    return 0;
}
```

#### 结构体做函数参数

```c++
void printStu1(student s){    // 值传递函数
    cout<<"Name:"<<s.name<<endl;
    cout<<"Age:"<<s.age<<endl;
    cout<<"Score:"<<s.score<<endl;
}
void printStu2(student *p){    // 地址传递函数
    cout<<"Name:"<<p->name<<endl;
    cout<<"Age:"<<p->age<<endl;
    cout<<"Score:"<<p->score<<endl;
}

int main(){
    student s={"Alice",26,65};
    // 结构体做函数参数
    printStu1(s);   // 值传递,不会影响实参
    printStu2(&s);  // 地址传递,会影响实参
   
    return 0;
}
```

> 注意：地址传递不会复制数据，能够减少内存占用空间

#### const修饰结构体

```c++
void printStu3(const student *p){    // 加入const,防止误操作
    // p->age=150;        // 报错，无法修改
    cout<<"Name:"<<p->name<<endl;
    cout<<"Age:"<<p->age<<endl;
    cout<<"Score:"<<p->score<<endl;
}
// 只能读取结构体的数据，不能对其进行修改
```

