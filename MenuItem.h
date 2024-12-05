#pragma once

#include <string>
using namespace std;

class MenuItem {
private:
    string name;
    double price;

public:
    MenuItem();
    MenuItem(string name, double price);
    void setName(string name);
    string getName();
    void setPrice(double price);
    double getPrice();
    void displayInfo();
};

