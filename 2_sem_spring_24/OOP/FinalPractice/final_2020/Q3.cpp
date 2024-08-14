#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class candidate
{
public:
    string fname;
    string nic;
    string degree;
    string DOB;
    int experience;
    static int id;
    float expsal;
    string address;

public:
    candidate(string f, string n, string d, string b, int e, float s, string a) : fname(f), nic(n), degree(d), DOB(b), expsal(s), address(a), experience(e)
    {
        id++;
    }
    candidate() {}
};

int candidate::id = 0;
class moderator;
class employer
{
protected:
    static int empid;
    moderator m1;

public:
    employer()
    {
        empid++;
    }
    void selectcandidate(candidate &c)
    {
        if (c.experience > 60)
        {
            cout << "Candidate " << c.fname << " hired!!" << endl;
            m1.writedata("Vacancy Closed");
        }
    }
    void recieveapplication(candidate &c)
    {
        if (c.address != "" && c.degree != "" && c.DOB != "" && c.experience != NULL && c.expsal != NULL && c.fname != "" && c.id != NULL && c.nic != "")
        {
            selectcandidate(c);
        }
    }
    virtual void postvacancy() = 0;
};
int employer::empid = 0;

class education : public employer
{
private:
    int campuses;
    int teachingyear;
    bool pressure;

public:
    education()
    {
    }
    void postvacancy() override
    {
        int y;
        cin >> y;
        bool p;
        cin >> p;
        pressure = p;
        teachingyear = y;
    }
};
class pharma : public employer
{
private:
    double budget;
    bool skills;

public:
    pharma()
    {
    }
    void postvacancy() override
    {
        cin >> skills;
    }
};
class bank : public employer
{
private:
    int branch;
    bool skills;

public:
    bank()
    {
    }
    void postvacancy() override
    {
        cin >> skills;
    }
};
class construction : public employer
{
private:
    int activeproject;
    bool ability;

public:
    construction()
    {
    }
    void postvacancy() override
    {
        cin >> ability;
    }
};

class moderator
{
    static int modid;
    static int totalapplications;
    vector<candidate> candidateslist;

public:
    moderator()
    {
        modid++;
    }
    void writedata()
    {
        fstream fileptr;
        fileptr.open("info.txt", ios::out);
        fileptr << totalapplications;
    }
    void writedata(string m)
    {
        fstream fileptr;
        fileptr.open("messages.txt", ios::app);
        fileptr << m;
    }
};
int moderator::modid = 0;
int moderator::totalapplications = 0;

candidate operator<(candidate &obj, candidate &obj2)
{
    if (obj.experience > obj2.experience)
        return obj;

    return obj2;
}; 