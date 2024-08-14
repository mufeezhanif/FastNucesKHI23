#include <iostream>

// Abstract class Animals
class Animals {
public:
    // Pure virtual methods
    virtual void cats() const = 0;
    virtual void dogs() const = 0;
};

// Subclass Cats
class Cats : public Animals {
public:
    // Implementation of cats method
    void cats() const override {
        std::cout << "Cats meow" << std::endl;
    }

    // Dummy implementation of dogs method (not needed for Cats)
    void dogs() const override {}
};

// Subclass Dogs
class Dogs : public Animals {
public:
    // Dummy implementation of cats method (not needed for Dogs)
    void cats() const override {}

    // Implementation of dogs method
    void dogs() const override {
        std::cout << "Dogs bark" << std::endl;
    }
};

int main() {
    // Creating objects for each subclass
    Cats cat;
    Dogs dog;

    // Calling respective methods for each object
    cat.cats(); // Output: Cats meow
    dog.dogs(); // Output: Dogs bark

    return 0;
}

