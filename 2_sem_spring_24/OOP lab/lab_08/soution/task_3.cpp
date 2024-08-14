#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
    string name;
    int age;
    int salary;
    int empid;

public:
    Employee(string n, int a, int s, int id) : name(n), age(a), salary(s), empid(id) {}
    void setName(string name) { this->name = name; }
    string getName() { return this->name; }
    void setAge(int age) { this->age = age; }
    int getAge() { return this->age; }
    void setSalary(int salary) { this->salary = salary; }
    int getSalary() { return this->salary; }
    void setEmpid(int empid) { this->empid = empid; }
    int getEmpid() { return this->empid; }
};

class Faculty : public Employee
{
private:
    string department;
    string Subjects[10]; // one teacher can't taech more than 10 subjects

    int tmp;
    int i;

public:
    Faculty(string n, int a, int s, int id, string dpt) : Employee(n, a, s, id), department(dpt), i(0)
    {
        cout << "How many Subjects  does " << n << " teaches? ";
        cin >> tmp;
        cin.ignore();
        while (i < tmp)
        {
            cout << "Enter subject " << (i + 1) << ": " << endl;
            getline(cin, Subjects[i++]);
        }
    };
    void printSubjects()
    {
        i = 0;
        cout << "Subjects: " << endl;
        while (i < tmp)
        {
            cout << Subjects[i++];
        }
    }
    void show_info()
    {
        cout << "\nFaculty Info:\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Department: " << department << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Salary: " << salary << "/-" << endl;
        this->printSubjects();
    }
    void setDepartment(string department) { this->department = department; }
    string getDepartment() { return this->department; }

    void updateSubjects()
    {
        i = 0;
        cout << "How many Subjects  does " << getName() << " teaches? ";
        cin >> tmp;
        cin.ignore();
        while (i < tmp)
        {
            cout << "Enter subject " << (i + 1) << ": " << endl;
            getline(cin, Subjects[i++]);
        }
    }
};

class AdministrativeStaff : public Employee
{
private:
    string position;
    string location;

public:
    AdministrativeStaff(string n, int a, int s, int id, string pos, string loc) : Employee(n, a, s, id), position(pos), location(loc)
    {
    }
    void show_info()
    {
        cout << "\nAdministrative Staff Info:\n";
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Position: " << position << endl;
        cout << "Employee ID: " << empid << endl;
        cout << "Salary: " << salary << "/-" << endl;
        cout << "Office location: " << location << endl;
    }
    void setLocation(string location) { this->location = location; }
    string getLocation() { return this->location; }
    void setPosition(string position) { this->position = position; }
    string getPosition() { return this->position; }
};

class TeachingAssistant : public Faculty, public AdministrativeStaff
{
public:
    int semester;

    TeachingAssistant(int sem, string n, int a, int s, int id, string pos, string loc, string dpt) : AdministrativeStaff(n, a, s, id, pos, loc), semester(sem), Faculty(n, a, s, id, dpt)
    {
    }

    void show_info()
    {
        cout << "\nTA All Info:\n";
        cout << "Name: " << Faculty::getName() << endl;
        cout << "Age: " << Faculty::getAge() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Employee ID: " << Faculty::getEmpid() << endl;
        cout << "Salary: " << Faculty::getSalary() << "/-" << endl;
        printSubjects();
    }
    void show_administrative_info() { AdministrativeStaff::show_info(); }
    void show_teaching_info() { Faculty::show_info(); }
    void setSemester(int semester) { this->semester = semester; }
    int getSemester() { return this->semester; }
};

int main()
{
    TeachingAssistant ta(6, "Mufeez", 22, 250000, 2350800, "Admin", "Shah Latif Town", "Data Science");
    ta.show_info();
    ta.show_administrative_info();
    ta.show_teaching_info();
    return 0;
}