#include <iostream>
#include <cmath>
using namespace std;

class RollerCoaster
{
private:
    string Name;
    int height;
    int length;
    int speed;
    int capacity;
    int currentNumRiders;
    bool rideInProgress;

    int id, sp; // it was not required, but in the functions of acceleration and deaceleration, i had to use these

public:
    RollerCoaster() : Name("roller coaster"), height(500), length(2000), capacity(20), rideInProgress(false), speed(0) {}
    RollerCoaster(string Name, int height, int length, int capacity) : speed(0)
    {
        this->Name = Name;
        this->height = height;
        this->length = length;
        if (capacity < 3)
        {
            cout << "Enter capacity greater than 3: ";
            cin >> capacity;
        }
        if (capacity % 2 == 0 || capacity % 3 == 0)
            this->capacity = capacity;
        else
            this->capacity = ++capacity;
        rideInProgress = false;
    }
    int loadRiders()
    {
        int number;
        cout << "Ener number of riders: ";
        cin >> number;
        if (!rideInProgress)
        {
            cout << "\nRide is not in progress, entering riders";
            if (number > capacity)
            {
                currentNumRiders = capacity;
                return (number - capacity);
            }
            else
            {
                currentNumRiders = number;
                return 0;
            }
        }
        else
            cout << "\nRide is in progress";
    }
    int startRide()
    {
        if (rideInProgress)
        {
            cout << "\n Ride can not be started as it is in prہgress";
            return -1;
        }
        else if ((capacity - currentNumRiders) == 0)
        {
            cout << "\nRide has been started";
            rideInProgress = true;
            return 0;
        }
        else
        {
            cout << "\nAll seats are not filled";
            return (capacity - currentNumRiders);
        }
    }
    void stopRide()
    {
        if (rideInProgress)
        {
            cout << "\nRide was in progress, but it's been stopped now";
            rideInProgress = false;
        }
        else
            cout << "\nRide is already stopped";
    }
    void unloadRiders()
    {
        if (currentNumRiders == 0)
        {
            cout << "\nNo riders to unload.";
        }
        else if (!rideInProgress)
        {
            currentNumRiders = 0;
            cout << "\nPassengers unloaded";
        }
        else
            cout << "\n cant unload passengers, as ride is in progress";
    };
    void accelerateRollerCoster()
    {
        if (rideInProgress)
        {

            cout << "Enter your id: ";
            cin >> id;
            sp = returnLastNonZero(id);
            cout << "\n Speed has been increase by :" << sp;
            speed += sp;
            cout << "\n Current speed is: " << speed;
        }
        else
            cout << "Ride is not started yet";
    };
    void decelerateRollerCoaster()
    {
        if (rideInProgress)
        {
            cout << "\n Enter your id: ";
            cin >> id;
            sp = returnFirstNonZero(id);
            speed -= sp;
            cout << "\n Speed has been decreased by :" << sp;
            cout << "\n Current speed is: " << speed;
        }
        else
            cout << "Ride is not started yet";
    };
    int returnLastNonZero(int id)
    {
        if (id % 10 != 0)
        {
            return (id % 10);
        }
        else if (id == 0)
        {
            cout << "\n entered id is not correct";
            return 0;
        }
        else
        {
            returnLastNonZero(id / 10);
        }
    }
    int returnFirstNonZero(int id, int n = 1000)
    {
        if (id == 0)
        {
            cout << "\nIncorrect id entered";
            return 0;
        }
        else if (id / n != 0)
            return (id / n);
        else
            return returnFirstNonZero(id, (n / 10));
    }

    string GetName() const
    {

        return Name;
    }

    void SetName(string Name)
    {
        this->Name = Name;
    }

    int GetHeight() const
    {
        return height;
    }

    void SetHeight(int height)
    {
        this->height = height;
    }

    int GetLength() const
    {
        return length;
    }

    void SetLength(int length)
    {
        this->length = length;
    }

    int GetSpeed() const
    {
        return speed;
    }

    void SetSpeed(int speed)
    {
        this->speed = speed;
    }

    int GetCapacity() const
    {
        return capacity;
    }

    void SetCapacity(int capacity)
    {
        if (capacity < 3)
        {
            cout << "Enter capacity greater than 3: ";
            cin >> capacity;
        }
        if (capacity % 2 == 0 || capacity % 3 == 0)
            this->capacity = capacity;
        else
            this->capacity = ++capacity;
    }

    int GetCurrentNumRiders() const
    {
        return currentNumRiders;
    }

    void SetCurrentNumRiders(int currentNumRiders)
    {
        this->currentNumRiders = currentNumRiders;
    }

    bool GetRideInProgress() const
    {
        return rideInProgress;
    }

    void SetRideInProgress(bool rideInProgress)
    {
        this->rideInProgress = rideInProgress;
    }
};

int main()
{
    cout << "23k0800 Muhammad Mufeez" << endl;
    RollerCoaster R1, R2("Tornado", 800, 3500, 49);
    int choice = 0;
    while (choice != 99)
    {
        cout << "\n\nRollerCoaster Menu:\n";
        cout << "1. Load riders onto the roller coaster.\n";
        cout << "2. Start the roller coaster ride.\n";
        cout << "3. Stop the roller coaster ride.\n";
        cout << "4. Unload riders from the roller coaster.\n";
        cout << "5. Accelerate the roller coaster.\n";
        cout << "6. Decelerate the roller coaster.\n";
        cout << "99. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {

            int n = R2.loadRiders();
            cout << "\nremaining riders are: " << n << endl;
            break;
        }
        case 2:
        {

            int n = R2.startRide();
            if (n > 0)
                cout << "\nFill in the remaining seats: " << n << endl;
            break;
        }
        case 3:
            R2.stopRide();
            break;
        case 4:
            R2.unloadRiders();
            break;
        case 5:
            R2.accelerateRollerCoster();
            break;
        case 6:
            R2.decelerateRollerCoaster();
            break;
        case 99:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    }

    return 0;
}