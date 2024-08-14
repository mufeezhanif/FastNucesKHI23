#include <iostream>
using namespace std;
class Pet
{
public:
    string healthStatus;
    int hungerLevel;
    int happinessLevel;
    string specialSkills[10]; // not more than 10 skills are possible
    bool adopted;

public:
    Pet() : adopted(0){};
    void displayPetDetails()
    {
        cout << "Pet Details: \n";
        cout << "Health Status: " << healthStatus << endl;
        cout << "Hunger Level: " << hungerLevel << "\n";
        cout << "happoness Level: " << happinessLevel << "\n";
        cout << "Special Skills: \n";
        int i = 0;
        while (specialSkills[i] != "")
        {
            cout << specialSkills[i] << ", ";
            ++i;
        }
    }
    void updateHappiness()
    {
        cout << "\nEnter new happiness level: ";
        cin >> happinessLevel;
        if (happinessLevel > 10)
        {
            happinessLevel = 10;
        }
    }
    void updateHealth()
    {
        cout << "\nEnter new Health Status: ";
        cin.ignore();
        cin >> healthStatus;
    }
    void updateHunger()
    {
        int a;
        cout << "\nEnter new hunger level:";
        cin >> a;
        if (a > hungerLevel)
            --happinessLevel;
        else if (a < hungerLevel)
            if (happinessLevel < 10)
                ++happinessLevel;
        hungerLevel = a;
    }
};
class Adopter
{
public:
    string adopterName;
    string adopterMobileNum;
    struct record
    {
        string *healthStatus;
        int *hungerLevel;
        int *happinessLevel;
        string specialSkills[100];
        bool adopted;
    };
    record adoptedPetRecords[10]; // can't adopt more than 10
    int count;

public:
    Adopter(string name, string num) : adopterName(name), adopterMobileNum(num), count(0) {}
    void adoptPet(Pet &newpet)
    {
        if (newpet.adopted == 1)
            cout << "\nSorry the pet has been adopted ";
        else
        {
            newpet.adopted = 1;
            adoptedPetRecords[count].happinessLevel = &newpet.happinessLevel;
            adoptedPetRecords[count].hungerLevel = &newpet.hungerLevel;
            adoptedPetRecords[count].healthStatus = &newpet.healthStatus;
            for (int i = 0; i < 10; i++)
            {
                adoptedPetRecords[count].specialSkills[i] = newpet.specialSkills[i];
            }
            adoptedPetRecords[count].adopted = 1;
            count++;
        }
    }
    void returnPet(Pet &returnPet)
    {
        for (int i = 0; i < count; i++)
        {
            if (*(adoptedPetRecords[i].happinessLevel) == returnPet.happinessLevel)
            {
                returnPet.adopted = 0;
                adoptedPetRecords[i].adopted = 0;
                adoptedPetRecords[i].happinessLevel = nullptr;
                adoptedPetRecords[i].healthStatus = nullptr;
                adoptedPetRecords[i].hungerLevel = nullptr;
                for (int j = 0; j < 10; j++)
                {
                    adoptedPetRecords[i].specialSkills[j] = "";
                }
                count--;
                cout << "\n The pet has been returned";
            }
            else if (returnPet.adopted == 1)
                cout << "\n This pet record not found, it was not adopted by you";
        }
    }
    void displayAdoptedPets()
    {
        for (int i = 0; i < count; i++)
        {
            cout << "\n\nPet " << i + 1 << " Details: \n";
            cout << "Health Status: " << *(adoptedPetRecords[i].healthStatus) << endl;
            cout << "Hunger Level: " << *(adoptedPetRecords[i].hungerLevel) << "\n";
            cout << "happoness Level: " << *(adoptedPetRecords[i].happinessLevel) << "\n";
            cout << "Special Skills: \n";
            for (int j = 0; j < 10; j++)
            {
                cout << adoptedPetRecords[i].specialSkills[j] << ", ";
            }
        }
    }
};
int main()
{
    cout << "23k0800 Muhammad Mufeez" << endl;
    string name, phone;
    int choice;
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your phone: ";
    cin >> phone;
    Adopter mufeez(name, phone);
    Pet cat, dog, horse;

    mufeez.adoptPet(cat);
    cout << "Play with your pet!";
    cat.updateHappiness();
    cat.updateHealth();
    cat.updateHunger();
    cat.displayPetDetails();
    cat.updateHappiness();
    cat.updateHealth();
    cat.updateHunger();
    cat.displayPetDetails();

    mufeez.adoptPet(dog);
    cout << "Play with your pet!";
    dog.updateHappiness();
    dog.updateHealth();
    dog.updateHunger();
    dog.displayPetDetails();
    dog.updateHappiness();
    dog.updateHealth();
    dog.updateHunger();
    dog.displayPetDetails();

    mufeez.displayAdoptedPets();
    mufeez.returnPet(cat);
    mufeez.returnPet(dog);
    mufeez.displayAdoptedPets();
    return 0;
}
