#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int var = 0;
    try
    {
        try
        {
            throw var;
        }
        catch (int ex)
        {
            ex += 10;
            cout << "Error handling :: Val :" << var << " Ex : "<<ex<<endl; 
                throw;
        }
    }
    catch (...)
    {
        cout << "All Exception Catch: val :" << var <<endl; 
    }
    return 0;
}
