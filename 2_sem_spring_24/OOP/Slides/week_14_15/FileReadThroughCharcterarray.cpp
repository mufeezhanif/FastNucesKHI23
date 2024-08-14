#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char str[12];
	ifstream f;
	f.open("temp.txt");
	if(!f){cout<<"\nFile nhi khuli";}
	while (f) // reading through file object
	{
		f.getline(str, 15);
		cout << str << endl;
	}
	f.close();
}
