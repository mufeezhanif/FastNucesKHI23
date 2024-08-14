#include <iostream>
#include <fstream>
using namespace std;
class A
{
public:
    void square(int *x)
    {
        *x = (*x)++ * (*x);
    }
    void square(int *x, int *y)
    {
        *x = (*x) * --(*y);
    }
};
int main()
{
    A obj;
    int number = 10;
    obj.square(&number, &number);
    cout << number;
    return 0;
}
