#include <iostream>

using namespace std;
int throwExecption()
{
    throw 10;
}
int funC()
{
    try
    {
        throwExecption();
    }
    catch (int i)
    {
        cout << "From funC: Value thrown  : " << i << endl;
        throw 4;
    }
}
int funB()
{
    try
    {
        funC();
    }
    catch (int i)
    {
        cout << "From funB: Value thrown  : " << i << endl;
    }
}
int funA()
{
    try
    {
        funB();
    }
    catch (int i)
    {
        cout << "From funA: Value thrown  : " << i << endl;
    }
}
int main()
{
    funA();
    return 0;
}