#include <iostream>
#include <cstring>
#include <string>


using namespace std;
class String{
    private:
    char *str;
    public:
        String(string s){
            int n= s.length();
            str = new char(n+1);
            strcpy(str,s.c_str());
        }
        void operator=(string s){
            int n= s.length();
            delete str;
            str = new char(n+1);
            strcpy(str,s.c_str());
        }
    void display(){
        cout<<str<<endl;
    }
    ~String(){
        delete str;
    }
};
int main()
{
    String s("Hello world");
    s.display();
    s= "Hello C++";
    s.display();
    return 0;
}