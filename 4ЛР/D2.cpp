#include "D2.h"
#include <iostream>
using namespace std;

D2::D2() {
    cout << "Class D2, predok public D1, public B2, private B3" << endl;
}

D2::~D2() {
    cout << "Destructor D2" << endl;
}

void D2::set_name(string _name) {
    name = _name;
}

void D2::print() {
    D1::print();
    B2::print(); 
    cout << "Class D2, name = " << name << endl;
}

void D2::input() {
    string n;

    cout << "Enter name for D2: ";
    cin >> n;
    set_name(n);

    cout << "Enter D1: ";
    cin >> n;
    D1::set_name(n);

    cout << "Enter B1: ";
    cin >> n;
    B1::set_name(n);

    cout << "Enter B2: ";
    cin >> n;
    B2::set_name(n); 

}

void D2::output() {
    print();
}