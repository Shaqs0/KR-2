#include "MenuItem.h"
#include <iostream>
using namespace std;

MenuItem::MenuItem() : name("Unnamed"), price(0.0) {}

MenuItem::MenuItem(string name, double price) : name(name), price(price) {}

void MenuItem::setName(string name) {
    this->name = name;
}

string MenuItem::getName() {
    return name;
}

void MenuItem::setPrice(double price) {
    this->price = price;
}

double MenuItem::getPrice() {
    return price;
}

void MenuItem::displayInfo() {
    cout << "Menu Item: " << name << ", Price: $" << price << endl;
}
