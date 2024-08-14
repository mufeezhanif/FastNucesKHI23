#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int main()
{
int var;
	try
	{
		cin >> var;
		throw var;
		throw 'c'
		if (var == 0)
		{
			throw 404;
		}
		cout<<"Hello ";
	}
	catch (int a)
	{
		cout<<"World"<<var;
	}
	catch(...){

	}

	//    string word = "four";
	//    try
	//    {
	//        cout << word.at(4);
	//    }
	//
	//    catch (int e)
	//    {
	//        cout << endl;
	//        cout << "Exception thrown";
	//    }
	//    cout << endl;
	//    cout << "Programs End";

	string word = "four";
	vector<int> arr;
	try
	{
		word.at(4);
		
		throw excetio("out of range constructor");
	}

	catch (exception &ex)
	{
		cout << endl;
		cout << "Second Exception";
		cout << "Exception thrown" << ex.what();
	}
	catch (out_of_range &ex)
	{
		cout << endl;
		cout << "Exception thrown" << ex.what();
	}

	cout << endl;
	cout << "Programs End";

	return 0;
}
