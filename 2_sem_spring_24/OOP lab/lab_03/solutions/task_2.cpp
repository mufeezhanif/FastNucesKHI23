#include <iostream>
using namespace std;

class student
{
private:
    int stId;
    int stAge;
    string stName;
    char grade;

public:
    int getStId()
    {
        return stId;
    }

    int getStAge()
    {
        return stAge;
    }

    string getStName()
    {
        return stName;
    }

    char getGrade()
    {
        return grade;
    }

    void setStId(int stId)
    {
        this->stId = stId;
    }

    void setStAge(int stAge)
    {
        this->stAge = stAge;
    }

    void setStName(string stName)
    {
        this->stName = stName;
    }

    void setGrade(char grade)
    {
        this->grade = grade;
    }
    void displayStudents()
    {
        cout << "\nName of student : " << stName << endl;
        cout << "Student ID: " << stId << endl;
        cout << "Student Age: " << stAge << endl;
        cout << "Grade: " << grade << endl;
    }
};
class teacher
{
private:
    int tId;
    string tName;
    string subject;

public:
    int getTId()
    {
        return tId;
    }

    string getTName()
    {
        return tName;
    }

    string getSubject()
    {
        return subject;
    }

    void setTId(int tId)
    {
        this->tId = tId;
    }

    void setTName(string tName)
    {
        this->tName = tName;
    }

    void setSubject(string subject)
    {
        this->subject = subject;
    }
    void displayTeachers()
    {
        cout << "\nTeacher Name: " << tName << endl;
        cout << "Teacher Id: " << tId << endl;
        cout << "Subject Taught: " << subject << endl;
    }
};
class course
{
private:
    string courseCode;
    string courseName;

public:
    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }
    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getCourseCode()
    {
        return courseCode;
    }

    void displayCourses()
    {
        cout << "\nCourse Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
    }
};

class schoolManagement
{
public:
    void displayAllStudents(student students[], int n)
    {
        int i;
        cout << "\nStudents: \n\n"
             << endl;

        for (i = 0; i < n; i++)
        {
            students[i].displayStudents();
            cout << "\n\n";
        }
    }
    void displayAllTeachers(teacher teachers[], int n)
    {
        int j;
        cout << "\nTeachers: \n"
             << endl;

        for (j = 0; j < n; j++)
        {
            teachers[j].displayTeachers();
            cout << "\n\n";
        }
    }
    void displayAllCourses(course courses[], int n)
    {
        int i;
        cout << "Courses: \n"
             << endl;

        for (i = 0; i < n; i++)
        {
            courses[i].displayCourses();
            cout << "\n\n";
        }
    }

    void addStudent(student students[], int &n)
    {
        n++;
        int id, age;
        string name;
        char grade;
        cout << "Enter ID of the student:\n " << endl;
        cin >> id;
        cout << "Enter First Name only of the student:\n " << endl;
        cin >> name;
        cout << "Enter Age of the student:\n " << endl;
        cin >> age;
        cout << "Enter Grade of the student:\n " << endl;
        cin >> grade;
        students[n - 1].setStId(id);
        students[n - 1].setStName(name);
        students[n - 1].setStAge(age);
        students[n - 1].setGrade(grade);
    }
    void addTeacher(teacher teachers[], int &n)
    {
        n++;

        int id;
        string name, subj;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subj;
        teachers[n - 1].setTId(id);
        teachers[n - 1].setTName(name);
        teachers[n - 1].setSubject(subj);
    }
    void addCourse(course courses[], int &n)
    {
        n++;

        string courseCode, courseName;
        cin.ignore();
        cout << "Enter Course code: ";
        cin >> courseCode;
        cin.ignore();
        cout << "Enter Course name: ";
        cin >> courseName;
        courses[n - 1].setCourseCode(courseCode);
        courses[n - 1].setCourseName(courseName);
    }
};

int main()
{
    int choice;
    int s = 0;
    int t = 0;
    int c = 0;
    schoolManagement fastSchool;
    student students[100];
    teacher teachers[100];
    course courses[100];

    cout << "\n\nFast me aagae, ab to gae" << endl;
    cout << "\n1. Add a student\n2. Add a teacher\n3. Add a course\n4. Display all students\n5. Display all teachers\n6. Display all courses\nand 7. to exit" << endl;
    cin >> choice;
    while (choice != 7)
    {

        switch (choice)
        {
        case 1:
        {
            fastSchool.addStudent(students, s);
            break;
        }
        case 2:
        {
            fastSchool.addTeacher(teachers, t);
            break;
        }
        case 3:
        {
            fastSchool.addCourse(courses, c);
            break;
        }
        case 4:
        {
            fastSchool.displayAllStudents(students, s);
            break;
        }
        case 5:
        {
            fastSchool.displayAllTeachers(teachers, t);
            break;
        }
        case 6:
        {
            fastSchool.displayAllCourses(courses, c);
            break;
        }
        }
        cout << "\n\nFast me aagae, ab to gae" << endl;
        cout << "\n1. Add a student\n2. Add a teacher\n3. Add a course\n4. Display all students\n5. Display all teachers\n6. Display all courses\nand 7. to exit" << endl;
        cin >> choice;
    }

    return 0;
}
