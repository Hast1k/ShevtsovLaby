#include "B1.h"
#include <iostream>
using namespace std;

B1::B1() {
    cout << "Class B1, predkiv nema" << endl;
}

B1::~B1() {
    cout << "Destructor B1" << endl;
}

void B1::set_name(string _name) {
    name = _name;
}

void B1::print() {
    cout << "Class B1, name = " << name << endl;
}