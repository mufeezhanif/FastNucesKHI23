#include<iostream>
using namespace std;

class Menu
{
    public:
    virtual void prepare()=0;
    virtual void serve()=0;
};

class Appetizer:public Menu
{
    public:
    void prepare() override
    {
        cout<<"Appetizer Preparing"<<endl;
    }
    void serve() override
    {
        cout<<"Serving Appetizer"<<endl;
    }
};

class Maincourse:public Menu
{
    public:
    void prepare() override
    {
        cout<<"Maincourse Preparing"<<endl;
    }
    void serve() override
    {
        cout<<"Serving Maincourse"<<endl;
    }
};

class dessert:public Menu
{
    public:
    void prepare() override
    {
        cout<<"Freesing dessert"<<endl;
    }
    void serve() override
    {
        cout<<"Dessert served"<<endl;
    }
};

int main()
{
    Appetizer a1;
    Maincourse m1;
    dessert d1;

    a1.prepare();
    a1.serve();
    m1.prepare();
    m1.serve();
    d1.prepare();
    d1.serve();
}