#include <iostream>
#include <string>
using namespace std;

bool operator*(FILE const &f1, FILE const &f2)
{
    if (f1->size == f2.size && f1.location == f2.location)
    {
        return true;
    }
    else
    {
        return false;
    }
}
class FILE
{
protected:
    int size;
    string location;
    string createDate;
    string modifiedDate;

public:
    virtual void open() = 0;
    virtual void print() = 0;
    {
        cout << "size: " << size << endl;
        cout << "location: " << location << endl;
        cout << "Created Date: " << createDate << endl;
        cout << "Modified Date: " << modifiedDate << endl;
    };
    friend bool operator*(FILE f1, FILE f2);
};
class PDF
{

public:
    void open(){cout << "PDF file opened"};
    void print()
    {
        cout << "Printing from pdf file" << endl;
    };
    
    friend bool operator*(FILE f1, FILE f2);
};
class ASCII
{

public:
    void open(){cout << "ASCII file opened"};
    void print()
    {
        cout << "Printing from ASCII file" << endl;
    };
    
    friend bool operator*(FILE f1, FILE f2);
};
class PS
{

public:
    void open(){cout << "PS file opened"};
    void print()
    {
        cout << "Printing from PS file" << endl;
    };
    
    friend bool operator*(FILE f1, FILE f2);
};
int main()
{
    FILE *ptr;
    FILE *ptr1;
    FILE *ptr2;

    PDF pdf =new PDF()
}