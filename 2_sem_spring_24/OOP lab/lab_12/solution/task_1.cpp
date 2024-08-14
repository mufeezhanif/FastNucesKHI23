#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string _name) : name(_name) {}
    virtual void getdata() = 0;
    virtual bool isoutstanding() = 0;
    string getName()
    {
        return name;
    }
    void putName(string name)
    {
        this->name = name;
    }
};

class Student : public Person
{
private:
    float gpa;

public:
    Student(string n) : Person(n)
    {
    }
    void getdata()
    {
        cout << "Please ennter cgpa:" << endl;
        cin >> gpa;
    }
    bool isoutstanding()
    {
        return (gpa > 3.5);
    }
};

class Professor : public Person
{
private:
    int published;

public:
    Professor(string n) : Person(n)
    {
    }
    void getdata()
    {
        cout << "Enter Publications:" << endl;
        cin >> published;
    }
    bool isoutstanding()
    {
        return (published > 100);
    }
};

int main()
{
    Professor p1("Einstein");
    Student s1("somone");
    int ch;
    do
    {
        cout << "Enter Choice:\n1)Student\n2)Professor\n3)EXIT" << endl;
        cin >> ch;
        cin.ignore();
        switch (ch)
        {
        case 1:
        {
            s1.getdata();
            if (s1.isoutstanding())
                cout << s1.getName() << " is outstanding" << endl;
            else
                cout << s1.getName() << " is not outstanding" << endl;
            break;
        }
        case 2:
        {
            p1.getdata();
            if (p1.isoutstanding())
                cout << p1.getName() << " is outstanding" << endl;
            else
                cout << p1.getName() << " is not outstanding" << endl;
            break;
        }
        case 3:
        {
            return 0;
        }
        }
    } while (ch!=3);
}