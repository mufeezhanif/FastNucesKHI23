#include <iostream>
#include <fstream>
using namespace std;
class Laptop
{
public:
    int id;
    float price;
    int hdd;
    int ram;

    void display(){
        cout << id << " " << price << " " << hdd << " " << ram << endl;
    }
};
class HP : public Laptop
{
public:
    int portsCount;
    void display(){
        cout << id << " " << price << " " << hdd << " " << ram << " " << portsCount << endl;
    }
};
class Dell : public Laptop
{
public:
    float screeenSize;
    void display(){
        cout << id << " " << price << " " << hdd << " " << ram << " " << screeenSize << endl;
    }
};
class ASUS : public Laptop
{
public:
    int graphicsCardSize;
    void display(){
        cout << id << " " << price << " " << hdd << " " << ram << " " << graphicsCardSize << endl;
    }
};

int main()
{
    HP hp;
    Dell dell;
    ASUS Asus;
    float t1 = 1200, t2 = 1200, t3 = 1200;
    fstream file("datafile.bin", ios::in | ios::binary);

    if (!file)
    {
        cout << "Error opening file" << endl;
        // return 1;
    }

    while (file.good())
    {

        file.read((char *)&hp, sizeof(hp));
        t1 += hp.price;
        hp.display();
        file.read((char *)&Asus, sizeof(Asus));
        t2 += Asus.price;
        Asus.display();
        file.read((char *)&dell, sizeof(dell));
        t3 += dell.price;
        dell.display();
    }

    file.close();
    file.open("report.txt", ios::out | ios::binary);
    if (!file)
    {
        cout << "Error opening file" << endl;
        // return 1;
    }

    file << "ELECTRONICS SHOP:\n";
    file << "__________________\n";
    file << "HP: " << t1 << " PKR\n";
    file << "DELL: " << t2 << " PKR\n";
    file << "ASUS: " << t3 << " PKR\n";
    file << "__________________\n";
    float total = t1 + t2 + t3;
    file << "Total: " << total << " PKR\n";

    file.close();
    return 0;
}