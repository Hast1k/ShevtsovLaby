#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

Triangle::Triangle(int sideA, int sideB, int sideC) {
    setSides(sideA, sideB, sideC);
}

void Triangle::printSides() const {
    cout << "������� A: " << a << ", ������� B: " << b << ", ������� C: " << c << endl;
}

int Triangle::calculatePerimeter() const {
    return a + b + c;
}

double Triangle::calculateArea() const {
    if (!isExist()) return 0.0;
    double p = calculatePerimeter() / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::setSides(int sideA, int sideB, int sideC) {
    a = sideA;
    b = sideB;
    c = sideC;
}

bool Triangle::isExist() const {
    return (a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) && (b + c > a);
}

void Triangle::checkTriangleType() const {
    if (!isExist()) {
        cout << "��������� �� ����." << endl;
        return;
    }

    if (a == b && b == c) {
        cout << "г�����������" << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "г�����������" << endl;
    }
    else {
        cout << "г�����������" << endl;
    }
}

// �������������� ���������
Triangle& Triangle::operator++() {
    ++a; ++b; ++c;
    return *this;
}

Triangle Triangle::operator++(int) {
    Triangle temp = *this;
    ++(*this);
    return temp;
}

Triangle& Triangle::operator--() {
    --a; --b; --c;
    return *this;
}

Triangle Triangle::operator--(int) {
    Triangle temp = *this;
    --(*this);
    return temp;
}

Triangle Triangle::operator*(int scalar) const {
    return Triangle(a * scalar, b * scalar, c * scalar);
}

Triangle operator*(int scalar, const Triangle& t) {
    return t * scalar;
}

Triangle::operator string() const {
    return "Triangle(" + to_string(a) + "," + to_string(b) + "," + to_string(c) + ")";
}

// ���������� ������ ����� stringToTriangle
Triangle stringToTriangle(const string& str) {
    // ������ �������� ������� ����� � ��������� ������ �����
    cout << "������� stringToTriangle ��������� �� ������.\n";
    cout << "���� �����, ������ ��� ������� ����� �����: ";

    int a, b, c;
    cin >> a >> b >> c;

    return Triangle(a, b, c);
}

void testTriangle(const Triangle& t) {
    t.printSides();
    cout << "����: " << (t.isExist() ? "���" : "ͳ") << endl;
    if (t.isExist()) {
        t.checkTriangleType();
        cout << "��������: " << t.calculatePerimeter() << endl;
        cout << "�����: " << t.calculateArea() << endl;
    }
}