#### 静态成员

静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员

- 静态成员变量
  - 所有对象共享同一份数据
  - 在编译阶段分配内存
  - 类内声明，**类外初始化**
- 静态成员函数
  - 所有对象共享一个函数
  - 静态成员函数**只能访问静态成员变量**

```c++
class Phone
{
private:
    // static string CPU;  // public、private都可以，但要注意访问权限
public:
    Phone();
    ~Phone();
    static void showInfo()
    {
        cout << "showInfo:" << CPU << endl;
    }
    static string CPU;  // 类内声明
};
// 类外初始化
string Phone::CPU="A16";

int main(){
    Phone p1;
    cout<<p1.CPU<<endl;      // 通过对象访问
    cout<<Phone::CPU<<endl;  // 通过类访问
    p1.showInfo();
    Phone::showInfo();       // 类外无法调用私有的静态成员函数
    return 0;
}
```

#### this指针

this指针指向被调用的成员函数所属对象

this指针的本质是 **指针常量** 指针的指向是不能修改的

> 相当于`Person * const this;`

```c++
class Person
{
private:
    int age;
    mutable int false_age; // 特殊变量，在 常函数 或 常对象 中也能被修改
public:
    Person(int age);
    ~Person();
    void showClassName(){
        cout<<"Class: Person"<<endl;
    }
    // 成员函数后面加const，修饰的是this指针，让指针指向的值不可修改
    void showAge() const
    {
        // this->age=100;
        false_age=100;
        if(this==NULL) return;  // 提高代码的健壮性
        cout<<"age="<<this->age<<endl;
    }
    // 返回对象本身用*this
    Person& addAge(int addage){
        this->age+=addage;
        return *this;
    }
};

int main(){
    Person p1(18);
    p1.showAge();
    // 链式编程思想
    p1.addAge(10).addAge(10).addAge(10);
    p1.showAge();
    // 空指针访问成员函数
    Person *p=NULL;
    p->showClassName();
    p->showAge();
    // 常对象只能调用常函数
    const Person p2(20);
    // p2.addAge(10); // 报错，只能调用常函数
    p2.showAge();
    
    return 0;
}
```

