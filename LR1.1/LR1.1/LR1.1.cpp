#include "AVTO.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "ukr");
    char toyotaMarka[] = "Toyota";
    char fordMarka[] = "Ford";
    char bmwMarka[] = "BMW";
    Avto car1;
    Avto* car2;
    car2 = new Avto;
    Avto carArray[3];
    car1.setAVTO(toyotaMarka, 150, 25000);
    cout << "Дані про перший автомобіль (стек):" << endl;
    car1.printAVTO();
    cout << endl;
    car2->setAVTO(fordMarka, 200, 30500);
    cout << "Дані про другий автомобіль (динамічна пам'ять):" << endl;
    car2->printAVTO();
    cout << endl;
    cout << endl;
    carArray[0].setAVTO(bmwMarka, 300, 55000);
    cout << "Дані з масиву:" << endl;
    carArray[0].printAVTO();
    delete car2;
    return 0;
}