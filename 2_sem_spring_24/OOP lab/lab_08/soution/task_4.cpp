#include <iostream>

using namespace std;

class Person
{
private:
    int age;

protected:
    const string name;

public:
    Person(int _age, const string _name) : age(_age), name(_name) {}
    void setAge(int age) { this->age = age; }
    int getAge() const { return age; }
    string getName() const { return name; }
};

class Employee
{
private:
    const int empid;

protected:
    int salary;

public:
    Employee(const int id, int _salary) : empid(id), salary(_salary) {}
    void setSalary(int salary) { this->salary = salary; }
    int getSalary() const { return salary; }
    int getEmpid() const { return empid; }
};
class Manager : public Person, public Employee
{
private:
    string type;

public:
    Manager(string _type, int _age, const string _name, const int id, int _salary) : Person(_age, _name), Employee(id, _salary), type(_type) {}
    void setType(string type) { this->type = type; };
    string getType() const { return type; }
};
class ITManager:public Manager{
    private:
    int noOfPersons;
    public:
        ITManager(int age, const string name, const int id, int salary, string type, int _noOfPersons  ):Manager(type,age,name,id,salary), noOfPersons(_noOfPersons){}
        void display() const{
            cout<<"Name: "<<getName()<<endl;
            cout<<"Age: "<<getAge()<<endl;
            cout<<"Employee ID: "<<getEmpid()<<endl;
            cout<<"Salary: "<< getSalary()<<endl;
            cout<<"Number of persons managed by the manager: "<<noOfPersons<<endl;
            cout<<"Type: "<<getType();
        };
};

int main()
{
    ITManager p1(30, "Someone", 9808, 309000, "IT", 3);
    p1.display();
    return 0;
}