#include "B2.h"
#include <iostream>
using namespace std;

B2::B2() {
    cout << "Class B2, predkiv nema" << endl;
}

B2::~B2() {
    cout << "Destructor B2" << endl;
}

void B2::set_name(string _name) {
    name = _name;
}

void B2::print() {
    cout << "Class B2, name = " << name << endl;
}