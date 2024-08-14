#include <iostream>

using namespace std;

class hello
{
public:
    int a;

}; int main()
{
    hello obj;
    obj.a = 7;
    hello obj1 = obj;

    cout << obj.a << endl;
    cout << obj1.a << endl;

    obj.a = 5;
    cout << obj.a << endl;
    cout << obj1.a << endl;
    return 0;
}