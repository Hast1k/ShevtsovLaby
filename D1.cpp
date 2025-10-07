#include "D1.h"
#include <iostream>
using namespace std;

D1::D1() {
    cout << "Class D1, predok public B1" << endl;
}

D1::~D1() {
    cout << "Destructor D1" << endl;
}

void D1::set_name(string _name) {
    name = _name;
}

void D1::print() {
    B1::print();
    cout << "Class D1, name = " << name << endl;
}