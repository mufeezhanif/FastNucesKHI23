#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("temp.txt");
    if (!file.is_open())
        cout << "Error";
    else
        cout << "File Opened";
	file << "Hello world\nfdf";
    file.close();
    return 0;
};
