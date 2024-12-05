#include "Waiter.h"
#include <iostream>
using namespace std;

Waiter::Waiter() : Employee(), tablesServed(0) {}

Waiter::Waiter(string name, int age, int tablesServed) : Employee(name, age), tablesServed(tablesServed) {}

void Waiter::setTablesServed(int tables) {
    this->tablesServed = tables;
}

int Waiter::getTablesServed() {
    return tablesServed;
}

void Waiter::displayInfo() {
    cout << "Waiter: " << name << ", Age: " << age << ", Tables Served: " << tablesServed << endl;
}
