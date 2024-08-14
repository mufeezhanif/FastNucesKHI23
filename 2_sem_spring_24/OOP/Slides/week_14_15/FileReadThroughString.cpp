#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
	string str;
	ifstream f;
	f.open("temp.txt");
	while (f)
	{
		getline(f, str);
		cout << str << endl;
	}
	f.close();
}
