#include <iostream>
using namespace std;
class SecurityTool
{
protected:
    string securityLevel;
    int cost;
    int noOfDevices;

public:
    string GetSecurityLevel() const
    {
        return securityLevel;
    }

    void SetSecurityLevel(string _securityLevel)
    {
        checkSecurityLevel(_securityLevel);
    }

    int GetCost() const
    {
        return cost;
    }

    void SetCost(int _cost)
    {
        checkCost(_cost);
    }

    int GetNoOfDevices() const
    {
        return noOfDevices;
    }


public:
    SecurityTool(string _SecurityLevel, int _cost, int _noOfDevices)
        : noOfDevices(_noOfDevices)
    {
        checkCost(_cost);
        checkSecurityLevel(_SecurityLevel);
    }
    void performScan()
    {
        cout << "Performing a generic security scan" << endl;
    }
    // the following functions are used to check the security level and cost, they are not required but were reused in constructor as wel as in setters
    void checkSecurityLevel(string &_SecurityLevel)
    {
        while (_SecurityLevel != "High" && _SecurityLevel != "Low" && _SecurityLevel != "Medium")
        {
            cout << "please enter correct security level i.e 'High', 'Medium' or 'Low' : " << endl;
            cin >> _SecurityLevel;
        }
        securityLevel = _SecurityLevel;
    }
    void checkCost(int &_cost)
    {
        while (_cost <= 0)
        {
            cout << "cost can't be less than or equal to 0, please enter correct cost: " << endl;
            cin >> _cost;
        }
        cost = _cost;
    }
};
class FirewallTool : public SecurityTool
{
protected:
    int ports[23];
    string Protocols[6];

public:
    FirewallTool(string _SecurityLevel, int _cost, int id)
        : SecurityTool(_SecurityLevel, _cost, 10)
    {
        generateList(id);
        Protocols[0] = "HTTPS";
        Protocols[1] = "FTP";
        Protocols[2] = "UDP";
        Protocols[3] = "ICMP";
        Protocols[4] = "SSH";
        Protocols[5] = "SNMP";
    }
    int returnNonZero(int id)
    {
        if (id % 10 != 0)
        {
            return (id % 10);
        }
        else if (id == 0)
        {
            cout << "\n Entered id contains only zeros";
            return 0;
        }
        else
        {
            returnNonZero(id / 10);
        }
    }
    void generateList(int id)
    {
        int n = returnNonZero(id); //mine id is 0800
        for (int i = 0; i < 23; i++)
        {
            ports[i] = ++n;
        }
    }
    void performScan()
    {
        SecurityTool::performScan();
        if (securityLevel == "High")
        {
            cout << "Traffic from the port and protocol list are allowed, following are the ports, and the port list : " << endl;
            for (int i = 0; i < 23; i++)
            {
                cout << ports[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << Protocols[i] << endl;
            }
        }
        else if (securityLevel == "Medium")
        {
            cout << "Traffic from the port along with the next two ports and protocol list are allowed, following are the ports, and the port list : " << endl;
            for (int i = 0; i < 23; i++)
            {
                cout << ports[i] << " ";
            }
            int n = ports[22];
            cout << ++n << " ";
            cout << ++n << endl;

            for (int i = 0; i < 6; i++)
            {
                cout << Protocols[i] << endl;
            }
        }
        else
        {
            cout << "Traffic from the port along with the next 5 ports and from protocol list along with TCP and DNS are allowed, following are the ports, and the port list : " << endl;
            for (int i = 0; i < 23; i++)
            {
                cout << ports[i] << " ";
            }
            int n = ports[22];
            for (int i = 0; i < 5; ++i)
            {
                cout << ++n << " ";
            }
            cout << endl;
            for (int i = 0; i < 6; i++)
            {
                cout << Protocols[i] << endl;
            }

            cout << "TCP" << endl;
            cout << "DNS" << endl;
        }
    }
};
int main()
{
    cout << "Muhammad mufeez 23k0800";
    FirewallTool f1("High", 100,800);
    f1.performScan();
    FirewallTool f2("Low", 0,9087);
    f2.performScan();
    FirewallTool f3("Med", 23333,2000);
    f3.performScan();
    return 0;
}