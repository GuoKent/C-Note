#include <iostream>
#include <string>
using namespace std;
class Phone
{
private:
public:
    Phone();
    ~Phone();
    static void showInfo()
    {
        cout << "showInfo:" << CPU << endl;
    }
    static string CPU; // 类内声明
};
// 类外初始化
string Phone::CPU = "A16";
Phone::Phone()
{
}
Phone::~Phone()
{
}

int main()
{
    Phone p1;
    cout << p1.CPU << endl;     // 通过对象访问
    cout << Phone::CPU << endl; // 通过类访问
    p1.showInfo();
    Phone::showInfo();
    return 0;
}