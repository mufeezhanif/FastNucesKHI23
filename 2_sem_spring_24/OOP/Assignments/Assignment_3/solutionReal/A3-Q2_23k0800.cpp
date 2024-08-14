#include <iostream>
using namespace std;

template <class T>
class Pet{
    private:
    T name;
    int age;
    public:
    Pet(T name, int age) : name(name), age(age){}

    virtual void makeSound() = 0;
};

template <class T>
class Cat : public Pet<T> {

    public:
    Cat(T name, int age) : Pet<T>(name, age) {}
    
    void makeSound() override{
        cout << "Meow" << endl;
    }
};

template <class T>
class Dog : public Pet<T> {
    private:

    public:
    Dog(T name, int age ) : Pet<T>(name, age) {}

    void makeSound() override {
        cout << "Woof" << endl;
    }
};
template <class T>
class Bird : public Pet<T> {
    private:

    public:
    Bird(T name, int age ) : Pet<T>(name, age) {}

    void makeSound() override {
        cout << "Chirp" << endl;
    }
};

int main(){
    
    cout << "23k-0800 Muhammad Mufeez" << endl;
    Cat<string> cat("cat", 5);
    Dog<string> dog("dog", 12);
    Bird<string> bird("bird", 2);

    cat.makeSound();
    dog.makeSound();
    bird.makeSound();
}
