#include <iostream>
#include <fstream>
using namespace std;
class Base
{
public:
    virtual void display() = 0;
};
class Child : public Base
{
public:
    virtual void display()
    {
        cout << "Never Give up!!!" << endl;
    };
};
int main()
{
    Child obj;
    cout << sizeof(obj) << endl;
    return 0;
}
