#include "Product.h"
#include <iostream>
using namespace std;

Product::Product() : name("Unknown"), quantity(0) {}

Product::Product(string name, int quantity) : name(name), quantity(quantity) {}

void Product::setName(string name) {
    this->name = name;
}

string Product::getName() {
    return name;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

int Product::getQuantity() {
    return quantity;
}

void Product::displayInfo() {
    cout << "Product: " << name << ", Quantity: " << quantity << endl;
}
