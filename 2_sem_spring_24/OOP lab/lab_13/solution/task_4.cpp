#include <iostream>

using namespace std;
template <typename T>
T get_factorial(T n)
{
    cout << " normal version" << endl;
    if (n == 1 || n == 0)
        return 1;
    else
        return n * get_factorial(n - 1);
};
template <>
int get_factorial<int>(int n)
{
    cout << " int version" << endl;
    if (n == 1 || n == 0)
        return 1;
    else
        return n * get_factorial(n - 1);
};
int main()
{
    double num = 5;
    cout << get_factorial(num);
    int n = 5;
    cout << get_factorial(n);
    return 0;
}