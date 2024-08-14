#include <iostream>
using namespace std;
class Medicine
{
private:
    string name;
    string formula;
    int rPrice;
    string builtDate;
    string expDate;

public:
    Medicine(string name, string formula, int rPrice, string builtDate, string expDate)
    {
        this->name = name;
        this->formula = formula;
        this->rPrice = rPrice;
        this->builtDate = builtDate;
        this->expDate = expDate;
    }
    virtual void display()
    {
        cout << "Medicine Name: " << name << endl;
        cout << "Medicine Formula: " << formula << endl;
        cout << "Retail Price: " << rPrice << endl;
        cout << "Built Date: " << builtDate << endl;
        cout << "Expiry Date: " << expDate << endl;
    }
    bool operator==(Medicine *other)
    {
        for (int i = expDate.length() - 1; i >= expDate.length() - 4; --i)
        {
            if (other->expDate[i] != expDate[i])
            {
                return false;
            }
        }
        return true;
    }

    string
    GetName() const
    {
        return name;
    }

    void SetName(string name)
    {
        this->name = name;
    }

    string GetFormula() const
    {
        return formula;
    }

    void SetFormula(string formula)
    {
        this->formula = formula;
    }

    int GetRPrice() const
    {
        return rPrice;
    }

    void SetRPrice(int rPrice)
    {
        this->rPrice = rPrice;
    }

    string GetBuiltDate() const
    {
        return builtDate;
    }

    void SetBuiltDate(string builtDate)
    {
        this->builtDate = builtDate;
    }

    string GetExpDate() const
    {
        return expDate;
    }

    void SetExpDate(string expDate)
    {
        this->expDate = expDate;
    }
};
class Tablet : public Medicine
{
private:
    double sucroseLevel; // value from 0 to 1

public:
    Tablet(string name, string formula, int rPrice, string builtDate, string expDate, double _sucroseLevel) : Medicine(name, formula, rPrice, builtDate, expDate), sucroseLevel(_sucroseLevel) {}
    void display()
    {
        cout << "Medicine Name: " << GetName()
             << endl;
        cout << "Medicine Formula: " << GetFormula()
             << endl;
        cout << "Retail Price: " << GetRPrice()
             << endl;
        cout << "Built Date: " << GetBuiltDate()
             << endl;
        cout << "Expiry Date: " << GetExpDate()
             << endl;

        cout << "Sucrose Level: " << sucroseLevel << endl;
    }
    double GetSucroseLevel() const
    {
        return sucroseLevel;
    }

    void SetSucroseLevel(double sucroseLevel)
    {
        this->sucroseLevel = sucroseLevel;
    }
};
class Capsule : public Medicine
{
private:
    int absorption; // 1 to 100 percentage
public:
    int GetAbsorption() const
    {
        return absorption;
    }

    void SetAbsorption(int absorption)
    {
        this->absorption = absorption;
    }

    Capsule(string name, string formula, int rPrice, string builtDate, string expDate, int _absorption) : Medicine(name, formula, rPrice, builtDate, expDate), absorption(_absorption) {}
    void display()
    {
        cout << "Medicine Name: " << GetName()
             << endl;
        cout << "Medicine Formula: " << GetFormula()
             << endl;
        cout << "Retail Price: " << GetRPrice()
             << endl;
        cout << "Built Date: " << GetBuiltDate()
             << endl;
        cout << "Expiry Date: " << GetExpDate()
             << endl;

        cout << "Absorption Percentage: " << absorption << endl;
    }
};
class Syrup : public Medicine
{
private:
    int quantity; // in ml
public:
    Syrup(string name, string formula, int rPrice, string builtDate, string expDate, int _quantity) : Medicine(name, formula, rPrice, builtDate, expDate), quantity(_quantity) {}
    void display()
    {
        cout << "Medicine Name: " << GetName()
             << endl;
        cout << "Medicine Formula: " << GetFormula()
             << endl;
        cout << "Retail Price: " << GetRPrice()
             << endl;
        cout << "Built Date: " << GetBuiltDate()
             << endl;
        cout << "Expiry Date: " << GetExpDate()
             << endl;

        cout << "Quantity: " << quantity << endl;
    };
    int GetQuantity() const
    {
        return quantity;
    }

    void SetQuantity(int quantity)
    {
        this->quantity = quantity;
    }
};
class Shop
{
private:
    Medicine *medicine;
    int totalMedicine;

public:
    Shop()
    {
        Medicine med1("med", "ethane", 25, "15 04 2022", "15 04 2024");
        Tablet tab1("Panadol", "methane", 65, "15 04 2023", "15 04 2024", 0.65);
        Capsule cap1("Panadol", "butane", 90, "15 04 2020", "15 04 2022", 43);
        Syrup syr1("syrup 1", "octane", 200, "15 04 2021", "15 04 2026", 100);

        Medicine *medicines[] = {&med1, &tab1, &cap1, &syr1};
        int size = 4;
    }
    friend class Counter;
    friend class Pharmicist;
};
class Pharmicist
{
private:
    Medicine *medicine;
    int totalMedicine;

public:
    Pharmicist(Shop &s) : medicine(s.medicine), totalMedicine(s.totalMedicine) {}
    bool Search_Medicine(string _formula, string &Name, int &ind)
    {
        for (int i = 0; i < totalMedicine; ++i)
        {
            if (_formula == medicine[i].GetFormula())
            {
                Name = medicine[i].GetName();
                ind = i;
                return true;
            }
        }
        return false;
    };
};
class Counter
{
private:
    Medicine *medicine;
    int totalMedicine;
    int totalRevenue;
    string medicineName;
    int index;

public:
    Counter(Shop &s) : medicine(s.medicine), totalMedicine(s.totalMedicine) {}
    void removeMedcineFromList()
    {

        for (int i = index; i < totalMedicine; ++i)
        {
            medicine[i] = medicine[i + 1];
        }
        --totalMedicine;
    }
    void Search_Medicine(Pharmicist &p)
    {
        string _formula;
        cout << "Enter the formula of the medicine: ";
        cin >> _formula;
        if (p.Search_Medicine(_formula, medicineName, index))
        {
            cout << "Medicine Available" << endl;
            medicine[index].display();
            removeMedcineFromList();
            updateRevenue();
        }
        else
        {
            cout << "Medicine not Available" << endl;
        }
    }

    void updateRevenue()
    {
        int temp = 0;
        for (int i = 0; i < totalMedicine; ++i)
        {
            temp += medicine[i].GetRPrice();
        }
        totalRevenue = temp;
    }
};

int main()
{
    cout << "23k-0800 Muhammad Mufeez" << endl;
    Shop s1;
    Counter c1(s1);
    Pharmicist p1(s1);

    c1.Search_Medicine(p1);

    return 0;
}