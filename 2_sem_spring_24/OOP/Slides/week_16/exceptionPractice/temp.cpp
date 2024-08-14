#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <exception>
using namespace std;
class Bot_Exception{
    public: 
    string temp;
    Bot_Exception(string Temp):temp(Temp){}
};

int main()
{
    string temp;
    try{
        if(3<6){

        throw Bot_Exception("Exception occured");
        }
    }
    catch(Bot_Exception &h){
        cout << "Hello" <<h.temp<< endl;
    }
    return (0);
}
