#include <iostream>
using namespace std;

class Circle
{
public:
    float radius;
    const float pi = 3.1415;
    int num = 0;

public:
    Circle()
    {
        radius = 0;
    }
    float calCircumference()
    {
        return 2 * radius * pi * 2;
    }
    float calArea()
    {
        return pi * radius * radius;
    }
    void setRadius(float radius)
    {
        this->radius = radius;
    }
    float getRadius()
    {
        return radius;
    }
    void showData()
    {
        cout << "\n\nDetails are given below: " << endl;
        cout << "Radius: " << radius << endl;
        cout << "Circumference: " << calCircumference() << endl;
        cout << "Area: " << calArea() << endl;
    }
};
int main()
{
    Circle first;
    first.setRadius(7);
    first.showData();
    return 0;
}