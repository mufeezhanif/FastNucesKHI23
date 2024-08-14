// CHANGING VALUES USING ONLY REFERENCE OF A VARIABLE IN CLASS

#include <iostream>
using namespace std;
/*
class Test
{
    int &t;

public:
    Test(int &t) : t(t) {} // Initializer list must be used
    int getT() { return t; }
};
int main()
{
    int x = 20;
    Test t1(x);
    cout << t1.getT() << endl;
    x = 30;
    cout << t1.getT() << endl;
    return 0;
}
*/

class Test
{
public:
    int *t;
    Test(int var) : t(&var) {} // Initializer list must be used
    int getT()
    {
        return *t;
    }
};
int main()
{
    int x = 20;
    Test t1(x);
    cout << t1.getT() << endl;
    x = 30;
    cout << t1.getT() << endl;
    return 0;
    
}