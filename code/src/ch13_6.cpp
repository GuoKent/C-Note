#include<iostream>
#include<string>
using namespace std;

class Building
{
    // 告诉编译器，goodGay是全局函数，是Building类的好朋友，可以访问私有内容
    friend void goodGay(Building *b);
private:
    string SittingRoom;
    string BedRoom;
public:
    Building();
    ~Building();
};

Building::Building()
{
    this->SittingRoom="Sitting Room";
    this->BedRoom="Bed Room";
}
Building::~Building()
{
}

void goodGay(Building *b){
    cout<<b->BedRoom<<endl;
    cout<<b->SittingRoom<<endl;
}

int main(){
    Building b;
    goodGay(&b);
}