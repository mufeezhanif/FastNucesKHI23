#include <iostream>

using namespace std;

class Distance
{
private:
    float distanceInFeet;
    float distanceInInches;

public:
    Distance() : distanceInFeet(23.2), distanceInInches(231.5) {}
    void setInMeters()
    {
        float distance;
        cout << "\nEnter distance in meters: " << endl;
        cin >> distance;
        distanceInFeet = distance * 3.28084;
        distanceInInches = distance * 39.3701;
    }
    void displayInMeters()
    {
        cout << "\nDistance in meters: " << distanceInFeet / 3.28084;
    }
    void displayInFeets(){
        cout << "\nDistance in Feets: " << distanceInFeet;
        
    }
    ~Distance()
    {
        cout << "\n\nDestructor called" << endl;
    }
};

int main()
{
    Distance obj;
    obj.setInMeters();
    obj.displayInMeters();
    obj.displayInFeets();
    return 0;
}