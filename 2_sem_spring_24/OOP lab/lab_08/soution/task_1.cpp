#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    int number;
    int age;

    Employee(string n, int m, int a) : name(n), number(m), age(a) {}

public:
    int getAge() { return age; }
    int getNumber() { return number; }
    string getName() const { return name; }

    void setAge(int a) { age = a; }
    void setNumber(int a) { number = a; }
    void setName(string n) { name = n; }
};

class Manager : public Employee
{
private:
    string title;
    double dues;

public:
    Manager(string _title, double _dues, string n, int m, int a) : Employee(n, m, a), title(_title), dues(_dues) {}

    double getDues() { return dues; }
    string getTitle() { return title; }

    void setTitle(string t) { title = t; }
    void setDues(double d) { dues = d; }

    void displayData()
    {
        cout << "Name: " << getName() << endl;
        cout << "Number: " << getNumber() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Title: " << title << endl;
        cout << "Club Dues: " << dues << endl;
    }
};

class Scientist : public Employee
{
private:
    string title;
    string publications;

public:
    Scientist(string _title, string _publications, string n, int m, int a) : Employee(n, m, a), title(_title), publications(_publications) {}

    string getPublications() { return publications; }
    string getTitle() { return title; }

    void setTitle(string t) { title = t; }
    void setPublications(string d) { publications = d; }

     void displayData()
    {
        cout << "Name: " << getName() << endl;
        cout << "Number: " << getNumber() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Title: " << title << endl;
        cout << "Publications: " << publications << endl;
    }
};

class laborer : public Employee
{
private:
    string title;

public:
    laborer(string _title, string n, int m, int a) : Employee(n, m, a), title(_title) {}

    string getTitle() { return title; }

    void setTitle(string t) { title = t; }

     void displayData()
    {
        cout << "Name: " << getName() << endl;
        cout << "Number: " << getNumber() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Title: " << title << endl;
    }
};

int main()
{
    Scientist S1("Data Scientist","10000","Mufeez",646512,20);
    Manager M1("fdfd",15.56,"Mufeez",45512,20);
    laborer l("Mazdoor","Someone",45512,20);

    l.displayData();
    S1.displayData();
    M1.displayData();

    return 0;
}