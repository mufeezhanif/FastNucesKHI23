#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    float x;
    float y;
    float z;

public:
    float GetX()
    {
        return x;
    }

    void SetX(float a)
    {
        x = a;
    }

    float GetY()
    {
        return y;
    }

    void SetY(float b)
    {
        y = b;
    }

    float GetZ()
    {
        return z;
    }

    void SetZ(float c)
    {
        z = c;
    }
    Point() : x(0), y(0), z(0) {}
    Point(float a, float b, float c) : x(a), y(b), z(c) {}

    double distanceToOrigin()
    {
        return sqrt(x * x + y * y + z * z);
    }
    ~Point()
    {
        cout << "\nDestructor has been called";
    }
};
int main()
{
    Point obj1(2.42, 334.3, 43.323), obj2;

    cout << "Distance of obj 1 is: " << obj1.distanceToOrigin() << endl;
    cout << "Distance of obj 2 is: " << obj2.distanceToOrigin() << endl;
}