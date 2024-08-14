#include <iostream>
using namespace std;

class Enemy;
class Character;
class Player;
class Weapon;
class Player
{
protected:
    int playerId;
    string playerName;
    int health;

public:
    Player(int _playerId, string _playerName) : playerId(_playerId), playerName(_playerName), health(100) {}

    int GetPlayerId() const
    {
        return playerId;
    }
    void setHealth(int health)
    {
        this->health = health;
        cout << "Remaining Health: " << this->health << endl;
    }

    string GetplayerName() const
    {
        return playerName;
    }

    int GetHealth() const
    {
        return this->health;
    }
};
class Weapon
{
public:
    string weaponList[20]; // we have max of 20 weapons
    Weapon()
    {
        cout << "Start Entering weapons " << endl;
        for (int i = 0; i < 20; i++)
        {
            getline(cin, weaponList[i]);
            // cin.ignore();
            if (weaponList[i] == "" && i < 5)
            {
                cout << "Enter atleast 5 weapons" << endl;
                i--;
            }
            else if (weaponList[i] == "")
            {
                break;
            }
        }
    }
    void useWeapon()
    {
        string temp;
        cout << "Enter name of weapon you wanna use: " << endl;
        cin >> temp;
        int i = 0;
        while (weaponList[i] != "")
        {
            if (weaponList[i].compare(temp) == 0)
            {
                cout << weaponList[i] << " selected" << endl;
                for (int j = i; j < 20 && weaponList[j] != ""; j++)
                {
                    weaponList[j] = weaponList[j + 1];
                }
                break;
            }
            i++;
        }
        if (i == 0 && weaponList[i] == "")
        {
            cout << "No weapons left, you can't attack the enemy" << endl;
        }
        else if (i != 0 && weaponList[i - 1] == "")
        {
            cout << "Weapon not found" << endl;
            useWeapon();
        }
    }
};
class Character : public Player, public Weapon
{
private:
    int level;
    string experience;
    int points;

public:
    Character(int _playerId, string _playerName) : Player(_playerId, _playerName), level(0), experience("beginner"), points(0) { cout << "New Player Added" << endl; }
    void levelUp()
    {
        level++;
        if (experience == "beginner")
        {
            experience = "intermediate";
        }
        else if (experience == "intermediate")
        {
            experience = "Advanced";
        }
        else if (experience == "Advanced")
        {
            experience = "Expert";
        }
    }
    void PlayGame()
    {
        cout << "Player turn" << endl;
        useWeapon();
        points += 10;
        levelUp();
        cout << "Points: " << points << " Experience: " << experience << " Level: " << level << endl;
    }
};
class Enemy : public Weapon, public Player
{
private:
    int damage;

public:
    Enemy(int damage, int _playerId, string _playerName) : Player(_playerId, _playerName), damage(damage)
    {
        while (damage < 1 || damage > 10)
        {
            cout << "Enter damage between 1 and 10" << endl;
            cin >> damage;
        }
        cout << "New Enemy Added" << endl;
    }
    void attack(Character &player)
    {
        cout << "Enemy Turn" << endl;
        useWeapon();
        cout << "Attacked the player " << endl;
        player.setHealth(player.GetHealth() - damage);
    }
};

int main()
{
    cout << "Muhammad mufeez 23k0800" << endl;
    Character c1(23434, "Mufeez");
    Enemy e1(10, 343, "Someone");
    int choice;

    do
    {
        cout << "Enter 1 to attack enemy, 2 to attack player, 0 to exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            c1.PlayGame();
            break;
        }
        case 2:
        {
            e1.attack(c1);
            break;
        }
        case 0:
            break;
        default:
            break;
        }
    } while (choice != 0 && c1.GetHealth() > 0);

    if (c1.GetHealth() <= 0)
    {
        cout << "Player died, game over, restart the program to start a new game" << endl;
    }
    return 0;
}