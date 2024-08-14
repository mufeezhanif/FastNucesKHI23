#include <iostream>
#include<string>

using namespace std;
class User
{
private:
    string firstName;
    string lastName;

public:
    User(string fname, string lname) : firstName(fname), lastName(lname) {}
    friend class Message;
};

class Message
{
private:
    string content;

public:
    void sendMessage(User& sender, User& receiver){
        cout<<"Enter Content: "<<endl;
        getline(cin, content);
        cout<<sender.firstName<<" has sent a message to "<<receiver.firstName<<endl;
    }
};

int main()
{   User u1("Muhammad","Mufeez"), u2("Ahmer","Hanif");
    Message m;
    m.sendMessage(u1,u2);

    return 0;
}