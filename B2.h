#pragma once
#include <iostream>
using namespace std;

class B2 {
public:
    string name;

    B2();
    ~B2();

    void set_name(string _name);
    void print();
};