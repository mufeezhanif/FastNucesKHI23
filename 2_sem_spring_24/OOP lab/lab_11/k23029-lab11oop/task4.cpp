#include <iostream>
#include <cmath>

// Abstract base class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() const = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementation of calculateArea for Rectangle
    double calculateArea() const override {
        return width * height;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Implementation of calculateArea for Circle
    double calculateArea() const override {
        return M_PI * radius * radius; // Using PI from cmath
    }
};

int main() {
    const int numShapes = 2;
    // Array of pointers to Shape objects
    Shape* shapes[numShapes];

    // Creating Rectangle and Circle objects dynamically
    shapes[0] = new Rectangle(5, 4);
    shapes[1] = new Circle(3);

    // Calling calculateArea for each shape using polymorphism
    for (int i = 0; i < numShapes; ++i) {
        std::cout << "Area of shape " << i+1 << ": " << shapes[i]->calculateArea() << std::endl;
    }

    // Freeing dynamically allocated memory
    for (int i = 0; i < numShapes; ++i) {
        delete shapes[i];
    }

    return 0;
}

