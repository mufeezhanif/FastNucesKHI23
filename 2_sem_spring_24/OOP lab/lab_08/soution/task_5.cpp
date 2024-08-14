#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    int age;
    string size;

public:
    int GetAge() const
    {
        return age;
    }

    string GetSize() const
    {
        return size;
    }
    void setAge(int age) { this->age = age; }
    void setSize(string size) { this->size = size; }

    Animal()
    {
        age = 0;
        size = "";
    }
    Animal(int _age, string _size) : age(_age), size(_size) {}
};
class Dog : public Animal
{
private:
    string breed;

public:
    Dog() { breed = ""; }
    Dog(int _age, string _size, string _breed) : Animal(_age, _size), breed(_breed) {}
    string GetBreed() const
    {
        return breed;
    }

    void SetBreed(string breed)
    {
        this->breed = breed;
    }
};
class Cat : public Animal
{
private:
    int numberOfLives;

public:
    Cat() : numberOfLives(0) {}
    Cat(int _age, string _size, int _nol) : Animal(_age, _size), numberOfLives(_nol) {}
    int GetNumberOfLives() const
    {
        return numberOfLives;
    }

    void SetNumberOfLives(int numberOfLives)
    {
        this->numberOfLives = numberOfLives;
    }
};
int main()
{
    Cat c1;
    Cat c2(23,"Big",233);
    Dog d1;
    Dog d2(23,"Big","233");

    return 0;
}