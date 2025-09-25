#pragma once
#include <iostream>
#include <string>

class Triangle {
private:
    int a, b, c;

public:
    Triangle() : a(0), b(0), c(0) {}
    Triangle(int sideA, int sideB, int sideC);

    void printSides() const;
    int calculatePerimeter() const;
    double calculateArea() const;

    void setSides(int sideA, int sideB, int sideC);
    int getSideA() const { return a; }
    int getSideB() const { return b; }
    int getSideC() const { return c; }

    bool isExist() const;
    void checkTriangleType() const;

    // Перевантаження операторів
    Triangle& operator++();
    Triangle operator++(int);
    Triangle& operator--();
    Triangle operator--(int);
    
    operator bool() const { return isExist(); }
    
    Triangle operator*(int scalar) const;
    operator std::string() const;
};

Triangle operator*(int scalar, const Triangle& t);
Triangle stringToTriangle(const std::string& str);
void testTriangle(const Triangle& t);