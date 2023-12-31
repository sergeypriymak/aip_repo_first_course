#include <cmath>

class Shape {
public:
    virtual double getPerimeter() {
        return 0;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;
public:
    Rectangle(int a, int b) : length(a), width(b) {}
    double getPerimeter() override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    int radius;
public:
    Circle(int r) : radius(r) {}
    double getPerimeter() override {
        return 2 * M_PI * radius;
    }
};

class Triangle : public Shape {
private:
    int sideA;
    int sideB;
    int sideC;
public:
    Triangle(int a, int b, int c) : sideA(a), sideB(b), sideC(c) {}
    double getPerimeter() override {
        if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) {
            return sideA + sideB + sideC;
        } else {
            return 0;
        }
    }
};
