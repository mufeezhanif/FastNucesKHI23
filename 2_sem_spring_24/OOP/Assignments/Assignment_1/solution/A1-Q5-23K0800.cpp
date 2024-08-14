#include <iostream>
#include <string>
using namespace std;

class BOGOCoupon
{
private:
    string coupon_code;
    int valid_from;
    int valid_until;
    string restuarant_code;

public:
    BOGOCoupon(){};
    string GetCoupon_code() const
    {
        return coupon_code;
    }

    void SetCoupon_code(string coupon_code)
    {
        this->coupon_code = coupon_code;
    }

    int GetValid_from() const
    {
        return valid_from;
    }

    void SetValid_from(int valid_from)
    {
        this->valid_from = valid_from;
    }

    int GetValid_until() const
    {
        return valid_until;
    }

    void SetValid_until(int valid_until)
    {
        this->valid_until = valid_until;
    }

    string GetRestuarant_code() const
    {
        return restuarant_code;
    }

    void SetRestuarant_code(string restuarant_code)
    {
        this->restuarant_code = restuarant_code;
    }

    BOGOCoupon(string c, int vf, int vu, string rc) : valid_from(vf), valid_until(vu), restuarant_code(rc), coupon_code(c) {}

    bool is_valid(int current_date, string restuarantCode)
    {
        return ((current_date >= valid_from) && (current_date <= valid_until)) && (restuarant_code == restuarantCode);
    }
};

class User
{
private:
    string name;
    int age;
    string mobile_number;

public:
    BOGOCoupon coupons_list[50]; // user can not have more then 50 coupons
    BOGOCoupon redeemed_coupons_list[50];
    int coupons;
    int redeemedCoupons;

public:
    string GetName()
    {
        return name;
    }

    void SetName(string name)
    {
        this->name = name;
    }

    int GetAge() const
    {
        return age;
    }

    void SetAge(int age)
    {
        this->age = age;
    }

    string GetMobile_number() const
    {
        return mobile_number;
    }

    void SetMobile_number(string mobile_number)
    {
        this->mobile_number = mobile_number;
    }

    User(string Name, int Age, string MobileNumber) : name(Name), age(Age), mobile_number(MobileNumber), coupons(0), redeemedCoupons(0) {}

    void accumulate_coupon(string code, int valid_from, int valid_until, string restuarant_code)
    {
        coupons_list[coupons].SetCoupon_code(code);
        coupons_list[coupons].SetValid_from(valid_from);
        coupons_list[coupons].SetValid_until(valid_until);
        coupons_list[coupons].SetRestuarant_code(restuarant_code);
        cout << "\n\tCoupon accumulated successfully" << endl;
        ++coupons;
    }

    int has_valid_coupon(string restuarantCode)
    {
        int count = 0;
        for (int i = 0; i < coupons; ++i)
        {
            if (coupons_list[i].GetRestuarant_code() == restuarantCode)
            {   
                for(int j =0;j<redeemedCoupons;++j){
                    if(redeemed_coupons_list[j].GetRestuarant_code() == restuarantCode ){
                        cout<<"Coupon is already used"
                    }
                }
                if (coupons_list[i].is_valid(20240229, restuarantCode))
                {
                    cout << "\n Valid Coupon with code: " << coupons_list[i].GetCoupon_code();
                    count++;
                }
            }
        }
        if (count == 0)
            cout << "\n There is no valid coupon " << endl;
    };

    bool redeem_coupon(string coupon_code, int current_date, string restuarantCode)
    {
        for (int i = 0; i < redeemedCoupons; ++i)
        {
            if (redeemed_coupons_list[i].GetCoupon_code() == coupon_code)
            {
                cout << "\n Coupon has been redeemed before" << endl;
                return false;
            }
        }
        for (int i = 0; i < coupons; i++)
        {
            if (coupons_list[i].GetCoupon_code() == coupon_code)
            {
                if (!coupons_list[i].is_valid(current_date, restuarantCode))
                {
                    cout << "\n Invalid Coupon " << endl;
                    return false;
                }
                else
                {
                    cout << this->GetName() << "has  Valid Coupon" << endl;
                    redeemed_coupons_list[redeemedCoupons].SetCoupon_code(coupons_list[i].GetCoupon_code());
                    redeemed_coupons_list[redeemedCoupons].SetRestuarant_code(coupons_list[i].GetRestuarant_code());
                    redeemed_coupons_list[redeemedCoupons].SetValid_from(coupons_list[i].GetValid_from());
                    redeemed_coupons_list[redeemedCoupons].SetValid_until(coupons_list[i].GetValid_until());
                    ++redeemedCoupons;
                    return true;
                }
            }
        }
        cout << "\n Enter the correct coupon code associated with the restuarant code" << endl;
        return false;
    };
};
class Restuarant
{
public:
    int static coupons_redeemed_count;
    struct orderList
    {
        int quantity;
        int price;
        string name;
    };

    string coupon;
    int count;
    int total;
    int menu;
    string prefix_restuarant;

private:
    string restuarant_name;
    string location;

public:
    string menu_list[3]; // in the given situation, there are only 3 items in both restuarants
    int price_list[3];   // in pkr, thats why int

    string valid_coupon_code_list[50];

public:
    Restuarant(string name, string located, string prefix) : restuarant_name(name), location(located), count(0), total(0), prefix_restuarant(prefix), menu(0) {}
    string GetRestuarant_name() const
    {
        return restuarant_name;
    }

    void SetRestuarant_name(string restuarant_name)
    {
        this->restuarant_name = restuarant_name;
    }

    string GetLocation() const
    {
        return location;
    }

    void SetLocation(string location)
    {
        this->location = location;
    }

    void generate_bill(User &customer)
    {
        this->display_menu();
        cout << "\nHow man distinct items you wanna order? (not more than 3)" << endl;
        cin >> count;
        orderList listOfBooking[count];
        int choice;
        for (int i = 0; i < count; ++i)
        {
            cout << "\n For item no :" << i + 1 << endl;
            cout << "Enter  item number :" << endl;
            cin >> choice;
            listOfBooking[i].name = menu_list[choice - 1];
            cout << "Enter  quantity :" << endl;
            cin >> listOfBooking[i].quantity;
            listOfBooking[i].price = price_list[choice - 1] * listOfBooking[i].quantity;
            total += listOfBooking[i].price;
        }
        cout << "\n Items Ordered are given below: " << endl;
        cout << "Name"
             << "\t"
             << "Quantity"
             << "\t"
             << "Price" << endl;
        for (int i = 0; i < count; ++i)
        {

            cout << listOfBooking[i].name << "\t" << listOfBooking[i].quantity << "\t" << listOfBooking[i].price << endl;
        }
        cout << "Total : " << total << endl;

        cout << "Do you have any discount code? if yes than enter the code : " << endl;
        cin >> coupon;
        bool applicable = customer.redeem_coupon(coupon, 20240229, prefix_restuarant);

        if (applicable)
        {
            coupons_redeemed_count++;
            cout << "\n Congratulations, coupon is valid and BOGO offer applied on the first item" << endl;
            listOfBooking[0].quantity += 1;
            for (int i = 0; i < count; ++i)
            {

                cout << listOfBooking[i].name << "\t" << listOfBooking[i].quantity << "\t" << listOfBooking[i].price << endl;
                cout << "Total : " << total << endl;
            }
        }
        else
        {
            cout << "\n Sorry, the coupon code is invalid" << endl;
        }
    };
    void display_menu()
    {
        cout << "\n\nDisplaying Menu of " << restuarant_name << ": " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << menu_list[i] << "\tPrice: " << price_list[i] << endl;
        }
    };
    void updateMenu(string name, int price)
    {
        menu_list[menu] = name;
        price_list[menu] = price;
        ++menu;
    }
};

int Restuarant::coupons_redeemed_count = 0;
int main()
{
    cout << "23k0800 Muhammad Mufeez" << endl;
    User mufeez("Mufeez", 20, "03230434423");
    // accumulating coupons to user

    mufeez.accumulate_coupon("FH-BOGO-12345", 20230229, 20240229, "FH");
    mufeez.accumulate_coupon("FH-BOGO-12345", 20230229, 20220229, "FH");
    mufeez.accumulate_coupon("PB-BOGO-12345", 20230229, 20240229, "PB");
    mufeez.accumulate_coupon("SH-BOGO-12345", 20230229, 20240229, "SH");
    mufeez.accumulate_coupon("OH-BOGO-12345", 20230229, 20240229, "OH");

    // testing has valid  coupon method

    mufeez.has_valid_coupon("SH");

    // creating restuarant

    Restuarant FoodHaven("Food Haven", "City Center", "FH");
    Restuarant PixelBites("Pixel Bites", "Cyber Street", "PB");
    // adding items to the food haven's menu

    FoodHaven.updateMenu("Sushi", 100);
    FoodHaven.updateMenu("Pad Thai", 200);
    FoodHaven.updateMenu("Mango Tango", 300);

    // adding items to the pixel bites menu

    PixelBites.updateMenu("Binary Burger", 1000);
    PixelBites.updateMenu("Quantum Quinoa", 2000);
    PixelBites.updateMenu("Data Donuts", 3000);

    FoodHaven.generate_bill(mufeez);
    PixelBites.generate_bill(mufeez);

    mufeez.has_valid_coupon("PB");
    return 0;
}