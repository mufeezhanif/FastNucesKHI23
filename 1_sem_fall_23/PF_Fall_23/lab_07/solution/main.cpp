#include <iostream>
#include<string>
#include<typeinfo>

using namespace std;

int main()
{
    int a = 34;
    to_string(a);
    cout<<typeid(a).name();
    return 0;
}
