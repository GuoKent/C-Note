#include<iostream>
#include<string>
using namespace std;
int main(){
    goto FLAG;
    cout<<"执行1"<<endl;
    cout<<"执行2"<<endl;

    FLAG:
    cout<<"执行3"<<endl;

    return 0;

}