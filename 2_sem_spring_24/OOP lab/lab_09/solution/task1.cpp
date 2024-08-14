#include <iostream>
#include <string>

using namespace std;

class Location
{
public:
    int latitude;
    int longitude;
    Location(int _latitude, int _longitude) : latitude(_latitude), longitude(_longitude) {}
    virtual void display() const
    {
        cout << "Latitude : " << latitude << endl
             << "Longitude : " << longitude << endl;
    }
    Location operator++()
    {
        ++latitude;
        ++longitude;
        return *this;
    }
    Location operator++(int)
    {
        ++latitude;
        ++longitude;
        return *this;
    }
       void operator +(int x)
   {
        latitude+=x;
        longitude+=x;
   }
   
   Location& operator=(Location &temp) 
   {
        latitude = temp.latitude;
        longitude = temp.longitude;
        return *this;
   }
    friend Location operator+(int , Location &);


};
Location operator+(int x,Location &object)
{
	object.latitude=object.latitude+x;
	object.longitude=object.longitude+x;
	return object;
}

class Details : public Location
{
public:
    string address;

    Details(int _latitude, int _longitude, string _address) : Location(_latitude, _longitude), address(_address) {}
    void display() const
    {
        Location::display();
        cout << "Address : " << address << endl;
    }
};
int main()
{
    Details obj1(10, 20, "Islamabad");
    Details obj2(5, 30, "Islamabad");
    Details obj3(90, 90, "Islamabad");
    obj1.display();
    obj2.display();
    obj3.display();
    (++obj1).display();
    obj1++;
    obj2=obj1;
    obj2.display();

    obj1+10;
    obj2=obj1;
    obj2.display();

    10+obj1;
    obj2=obj1;
    obj2.display();

	obj1=obj2=obj3;
	obj1.display();
	obj2.display();
	obj3.display();

    Location *ptr = &obj1;  
    ptr->display();
    
    return 0;
}