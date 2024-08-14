#include <iostream>

using namespace std;
class RestuarantMeal
{
public:
    string name;
    int price;
    RestuarantMeal(string n, int p)
    {
        name = n;
        price = p;
    }
    void display(){
        cout << "name : " << name << endl
             << "price : " << price << endl;
    }
};

class HotelService
{
public:
    string serviceName;
    int serviceFee;
    int roomNumber;
    HotelService(string n, int s, int r)
    {
        serviceName = n;
        serviceFee = s;
        roomNumber = r;
    }
    void display(){
        cout << "service name : " << serviceName << endl
             << "service fee : " << serviceFee << endl
             << "room number : " << roomNumber << endl;
    }
};

class RoomServiceMeal : public RestuarantMeal, public HotelService
{
public:
    RoomServiceMeal(string n, int p, int r) : RestuarantMeal(n, p), HotelService("room service", 400, r)
    {
    }
    void display()
    {
        RestuarantMeal::display();
        HotelService::display();
        cout<<"Total cost : "<<price+serviceFee<<endl;
    }
};
int main()
{
    RoomServiceMeal rsm("steak dinner", 2000, 1202);
    rsm.display();
    return 0;
}