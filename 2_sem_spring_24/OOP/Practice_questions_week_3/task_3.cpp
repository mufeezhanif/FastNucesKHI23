#include <iostream>
using namespace std;

class CarSpecs
{
private:
    int wheels;
    int doors;
    int carSpeed;

public:
    
    CarSpecs()
    {
        carSpeed = 0;
        doors = 2;
        wheels = 4;
        cout << "\n\t\tspeed: " << carSpeed << endl;
    }
    void Civic()
    {
        carSpeed = 0;
        doors = 2;
        wheels = 4;
    }
    void Rubicon()
    {
        doors += 2;
        wheels += 2;
    }
    void Speed()
    {
        carSpeed += 7;

        cout << "\n\t\tspeed: " << carSpeed << endl;
    }
    void Break()
    {
        carSpeed -= 7;

        cout << "\n\t\tspeed: " << carSpeed << endl;
    }
    void printAllDetails()
    {

        cout << "\n\t\tWheels: " << this->wheels << endl;
        cout << "\n\t\tDoors: " << this->doors << endl;
        cout << "\n\t\tCarspeed: " << this->carSpeed << endl;
    }
};

int main()
{
    int choice = 0;
    CarSpecs c1;
    while (choice != 7)
    {

        cout << "press\n1- civic()\n2- rubicon\n3- speed()\n4- break()\n5- print speed\n6- print all details\n7- exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            c1.Civic();
            break;
        }
        case 2:
        {
            c1.Rubicon();
            break;
        }
        case 3:
        {
            c1.Speed();
            break;
        }
        case 4:
        {
            c1.Break();
            break;
        }
        case 5:
        {
            cout << "\n\t\tspeed: " << c1.getCarSpeed() << endl;
            break;
        }
        case 6:
        {
            c1.printAllDetails();
            break;
        }
        }
    }

    return 0;
}