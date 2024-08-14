#include <iostream>
//#include <exception>
using namespace std;
class newException : public exception
{
    virtual const char *what() const throw() // We can overwrite the what() function of the exception header file to define our exceptions.
    {
        return "newException occurred";
    }
};
int main()
{
    try
    {
        newException newex;
        throw newException();
        throw newex;
    }
    catch (exception &ex)
    {
        cout << ex.what() << '\n';
    }
    return 0;
}
