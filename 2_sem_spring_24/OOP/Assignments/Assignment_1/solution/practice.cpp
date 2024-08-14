#include <iostream>
#include <string>
using namespace std;

class restaurant
{
    string name;
    string location;
    string menu[3];
    string price[3];
    string validcoupons[2];
    static int count;

public:
    void setName(string restaurant_name)
    {
        name = restaurant_name;
    }

    void setLocation(string restaurant_location)
    {
        location = restaurant_location;
    }

    void setMenu(int index, string dish_name)
    {
        menu[index] = dish_name;
    }

    void setPrice(int index, string dish_price)
    {
        price[index] = dish_price;
    }
    void setvalidcoupons(int i, string code)
    {
        validcoupons[i] = code;
    }

    // Getter functions
    string getName()
    {
        return name;
    }

    string getLocation()
    {
        return location;
    }

    string getMenu(int index)
    {
        return menu[index];
    }

    string getPrice(int dishnum)
    {
        return price[dishnum];
    }
    string getvalidcoupon(int i)
    {
        return validcoupons[i];
    }

    int afterdiscount(int i)
    {
        cout << "BUY ONE GET ONE,Save RS:" << price[i] << endl;
        count++;
        return 0;
    }
};

int restaurant::count = 0;

class bogo
{
    string ccode;
    string validfrom;
    string validto;
    string rcode;
    string extractedrestaurantcode;

public:
    void setCode(string code)
    {
        ccode = code;
    }

    void setValidFrom(string from)
    {
        validfrom = from;
    }

    void setValidTo(string to)
    {
        validto = to;
    }

    void setRestaurantCode(string r_code)
    {
        rcode = r_code;
    }

    string getCode()
    {
        return ccode;
    }

    string getValidFrom()
    {
        return validfrom;
    }

    string getValidTo()
    {
        return validto;
    }

    string getRestaurantCode()
    {
        return rcode;
    }

    bool valid(string datetoday)
    {
        extractedrestaurantcode = ccode.substr(0, 2);
        int d1, d2, d3, m1, m2, m3, y1, y2, y3;
        d1 = (datetoday[0] - '0') * 10 + (datetoday[1] - '0');
        d2 = (validfrom[0] - '0') * 10 + (validfrom[1] - '0');
        d3 = (validto[0] - '0') * 10 + (validto[1] - '0');
        m1 = (datetoday[2] - '0') * 10 + (datetoday[3] - '0');
        m2 = (validfrom[2] - '0') * 10 + (validfrom[3] - '0');
        m3 = (validto[2] - '0') * 10 + (validto[3] - '0');
        y1 = (datetoday[4] - '0') * 10 + (datetoday[5] - '0');
        y2 = (validfrom[4] - '0') * 10 + (validfrom[5] - '0');
        y3 = (validto[4] - '0') * 10 + (validto[5] - '0');

        if ((extractedrestaurantcode == rcode) && (d1 <= d3 && d1 >= d2 && m1 <= m3 && m1 >= m2 && y1 <= y3 && y1 >= y2))
        {
            cout << "Code Valid!!" << endl;

            return true;
        }
        else
        {
            cout << "Code Invalid" << endl;
            return false;
        }
    }
};

class user
{
private:
    string name;
    int age;
    string mobino;
    bogo newcouponlist[5];
    bogo usedcouponlist[5];

public:
    user(string name, int age, string mobino)
    {
        this->name = name;
        this->age = age;
        this->mobino = mobino;
    }

    void displaynewcouponlist(int index)
    {
        int i;
        for (i = 0; i < index; i++)
        {
            cout << newcouponlist[i].getCode() << endl;
        }
    }

    void displayusedcouponlist(int index)
    {
        int i;
        for (i = 0; i < 5; i++)
        {
            cout << usedcouponlist[i].getCode() << endl;
        }
    }

    bool checkforvalid(bogo tocheck, string datetoday)
    {
        if (tocheck.valid(datetoday) && unredeemed(tocheck.getCode()))
        {
            cout << "Coupon is valid,unredeemed and can be added" << endl;
            return true;
        }
        else
        {
            cout << "Invalid Coupon or used" << endl;
            return false;
        }
    }

    bool unredeemed(string codecheck)
    {
        int i;
        for (i = 0; i < 5; i++)
        {
            if (codecheck == usedcouponlist[i].getCode())
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }

    void usecoupon(bogo toredeem, string datetoday, int i)
    {
        if (checkforvalid(toredeem, datetoday))
        {
            usedcouponlist[i].setCode(toredeem.getCode());
            // *i = *i + 1;
        }
    }

    void addcoupon(bogo newcoupon, int i)
    {
        newcouponlist[i].setCode(newcoupon.getCode());
    }
};

int main()
{
    int indexfornew = 0;
    int indexforused = 0;
    int choice, choice2;
    string current_date = "010224"; // Current date in DDMMYY format

    bogo c1, c2;
    restaurant r1, r2;
    user uzair("Uzair", 19, "0315 1111111");

    // Set coupon details
    c1.setCode("PB123");
    c1.setValidFrom("010224");
    c1.setValidTo("200224");
    c1.setRestaurantCode("PB");

    c2.setCode("FH123");
    c2.setValidFrom("010124");
    c2.setValidTo("250224");
    c2.setRestaurantCode("FH");

    // Set restaurant details
    r1.setName("Food Haven");
    r1.setLocation("City Center");
    r1.setMenu(0, "Sushi");
    r1.setPrice(0, "20");
    r1.setMenu(1, "Pad Thai");
    r1.setPrice(1, "52");
    r1.setvalidcoupons(0, c2.getCode());

    r2.setName("Pixel Bites");
    r2.setLocation("Cyber Street");
    r2.setMenu(0, "Binary Burger");
    r2.setPrice(0, "80");
    r2.setMenu(1, "Quantum Quinoa");
    r2.setPrice(1, "16");
    r2.setvalidcoupons(0, c1.getCode());

    // Menu-driven interface
    do
    {
        cout << "Welcome to the Coupon Management System" << endl;
        cout << "1. Add new coupon" << endl;
        cout << "2. Display unused coupons" << endl;
        cout << "3. Display used coupons" << endl;
        cout << "4. Order Food" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Add new coupon
            if (uzair.checkforvalid(c1, current_date))
            {
                uzair.addcoupon(c1, indexfornew);
                indexfornew++;
            }
            if (uzair.checkforvalid(c2, current_date))
            {
                uzair.addcoupon(c2, indexfornew);
                indexfornew++;
            }
            break;
        }
        case 2:
        {
            // Display unused coupons
            uzair.displaynewcouponlist(indexfornew);
            break;
        }
        case 3:
        {
            // Display used coupons
            uzair.displayusedcouponlist(indexforused);
            break;
        }
        case 4:
        {
            cout << "\t"
                 << "" << r1.getName() << "" << endl;
            cout << "\t1)" << r1.getMenu(0);
            cout << "\t\t" << r1.getPrice(0) << endl;
            cout << "\t2)" << r1.getMenu(1);
            cout << "\t" << r1.getPrice(1) << endl;
            cout << "\t"
                 << "" << r2.getName() << "" << endl;
            cout << "\t3)" << r2.getMenu(0);
            cout << "\t" << r2.getPrice(0) << endl;
            cout << "\t4)" << r2.getMenu(1);
            cout << "\t" << r2.getPrice(1) << endl;
            cout << "Enter choice:";
            cin >> choice2;
            switch (choice2)
            {
            case 1:
            {
                cout << "Original price:" << r1.getPrice(0) << endl;
                if (uzair.checkforvalid(c2, current_date) && c2.getRestaurantCode() == "FH")
                {
                    r1.afterdiscount(0);
                    uzair.usecoupon(c2, current_date, indexforused);
                    ++indexforused;
                }
                break;
            }
            case 2:
            {
                cout << "Original price:" << r1.getPrice(1) << endl;
                if (uzair.checkforvalid(c2, current_date) && c2.getRestaurantCode() == "FH")
                {
                    r1.afterdiscount(1);
                }
                break;
            }
            case 3:
            {
                cout << "Original price:" << r2.getPrice(0) << endl;
                if (uzair.checkforvalid(c1, current_date) && c1.getRestaurantCode() == "PB")
                {
                    r2.afterdiscount(0);
                }
                else
                {
                    cout << "This coupon is not for this restaurant";
                }
                break;
            }
            case 4:
            {
                cout << "Original price:" << r2.getPrice(1) << endl;
                if (uzair.checkforvalid(c1, current_date) && c1.getRestaurantCode() == "PB")
                {
                    r2.afterdiscount(1);
                }
                break;
            }
            default:
            {
                cout << "Invalid choice! Please enter a valid option." << endl;
                break;
            }
            }
            break;
        }
        case 5:
        {
            // Exit
            cout << "Exiting the program." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice! Please enter a valid option." << endl;
            break;
        }
        }
    } while (choice != 5);

    return 0;
}