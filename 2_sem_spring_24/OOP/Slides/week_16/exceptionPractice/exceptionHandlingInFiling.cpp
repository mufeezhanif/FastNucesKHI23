#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
using namespace std;

void readIntegerFile(const string &fileName)
{
    ifstream istr;
    int temp;
    char buffer[256];
    istr.open(fileName.c_str());
    if (istr.fail())
    {
        throw exception();
    }
    while (istr)
    {
        istr.getline(buffer, 100);
        cout << buffer << endl;
    }
}
int main()
{

    const string fileName = "test66.txt";

    try
    {
        readIntegerFile(fileName);
    }
    catch (exception &e)
    {
        cerr << "Unable to open file " << fileName << endl;
        exit(1);
    }
    cout << endl;

    return (0);
}
