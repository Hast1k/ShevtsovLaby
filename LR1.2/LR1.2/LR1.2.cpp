#include <iostream>
#include "Triangle.h"
using namespace std;

void demoOperations(Triangle& t) {
    cout << "\n--- Демонстрація операцій ---" << endl;
    cout << "Початковий: "; t.printSides();
    cout << "Існує: " << (t ? "Так" : "Ні") << endl;

    if (t) {
        t.checkTriangleType();
        cout << "Периметр: " << t.calculatePerimeter() << endl;
        cout << "Площа: " << t.calculateArea() << endl;
    }

    cout << "Після ++: "; (++t).printSides();
    cout << "Після --: "; (--t).printSides();

    int scalar = 2;
    Triangle multiplied = t * scalar;
    cout << "Помножений на " << scalar << ": "; multiplied.printSides();

    string str = t;
    cout << "Як string: " << str << endl;
}

int main() {
    setlocale(0, "ukr");

    int count;
    cout << "Скільки трикутників хочете створити? ";
    cin >> count;

    Triangle* triangles = new Triangle[count];

    // Ввід даних
    for (int i = 0; i < count; i++) {
        cout << "\nТрикутник #" << i + 1 << endl;

        int a, b, c;
        cout << "Введіть три сторони (a b c): ";
        cin >> a >> b >> c;
        triangles[i].setSides(a, b, c);
    }

    // Вивід результатів
    cout << "\n\n=== РЕЗУЛЬТАТИ ===" << endl;
    for (int i = 0; i < count; i++) {
        cout << "\nТрикутник #" << i + 1 << ":" << endl;
        demoOperations(triangles[i]);
    }

    // Окремо демонстрація роботи з string
    cout << "\n--- ДЕМОНСТРАЦІЯ РОБОТИ З STRING ---" << endl;
    cin.ignore();

    cout << "Введіть трикутник у форматі '3,4,5': ";
    string inputStr;
    getline(cin, inputStr);

    Triangle fromString = stringToTriangle(inputStr);
    cout << "Отриманий трикутник: ";
    fromString.printSides();
    cout << "Існує: " << (fromString ? "Так" : "Ні") << endl;

    delete[] triangles;
    return 0;
}