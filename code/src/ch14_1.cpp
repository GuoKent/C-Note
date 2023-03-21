#include<iostream>
using namespace std;

class Vector
{
    friend Vector operator-(Vector &v1,Vector &v2);
    friend ostream &operator<<(ostream &cout, Vector v);
    friend Vector &operator++(Vector &v);
    friend Vector operator++(Vector &v,int);
private:
    int num1;
    int num2;
public:
    Vector(int num1,int num2);
    ~Vector();
    // 通过成员函数重载运算符 +
    Vector operator+(Vector &v){
        Vector temp(0,0);
        temp.num1=this->num1+v.num1;
        temp.num2=this->num2+v.num2;
        return temp;
    }
    // 成员函数重载后置++
    /*Vector operator++(int){
        Vector temp=*this;
        this->num1++;
        this->num2++;
        return temp;
    }*/
    void show(){
        cout<<this->num1<<"\t"<<this->num2<<endl;
    }
};

Vector::Vector(int num1,int num2)
{
    this->num1=num1;
    this->num2=num2;
}
Vector::~Vector(){}

// 通过全局函数重载运算符 -
Vector operator-(Vector &v1,Vector &v2){
    Vector temp(0,0);
    temp.num1=v1.num1-v2.num1;
    temp.num2=v1.num2-v2.num2;
    return temp;
}
// 左移运算符重载
// v前面不要加&，目的是为了后置++重载时，返回的是一个临时变量，引用不能指向临时变量
ostream &operator<<(ostream &cout, Vector v){
    cout<<v.num1<<"\t"<<v.num2<<endl;
    return cout;
}
/*void operator<<(ostream &cout, Vector &v){
    cout<<v.num1<<"\t"<<v.num2<<endl;
    return cout;
}
使用void重载就无法 cout<<v<<enl; 连续使用<<运算符
*/

// 递增运算符重载 前置
Vector &operator++(Vector &v){
    v.num1++;
    v.num2++;
    return v;
}
// 递增运算符重载 后置 int是占位符，表示后置++
// 后置++要返回值，不能返回引用类型，因为temp是个临时变量
Vector operator++(Vector &v,int){
    Vector temp=v;
    v.num1++;
    v.num2++;
    return temp;
}

int main(){
    Vector v1(1,2);
    Vector v2(4,5);
    Vector v3=v1+v2;
    Vector v4=v1-v2;
    v3.show();
    v4.show();
    cout<<v3<<endl;  // 重载<<后的返回类型要注意
    ++(++v3);        // 要令++v3返回值仍为v3的引用，才能使用连续++
    cout<<v3;
    cout<<v3++;
    cout<<v3;
    return 0;
}