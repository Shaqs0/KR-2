#include "DiningHall.h"
#include <iostream>
using namespace std;

DiningHall::DiningHall() {}

void DiningHall::setCook(Cook cook) {
    this->cook = cook;
}

void DiningHall::setWaiter(Waiter waiter) {
    this->waiter = waiter;
}

void DiningHall::displayInfo() {
    cout << "Dining Hall Information:" << endl;
    cook.displayInfo();
    waiter.displayInfo();
}
