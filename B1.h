#pragma once
#include <iostream>
using namespace std;

class B1 {
public:
    string name;

    B1();
    ~B1();

    void set_name(string _name);
    void print();
};