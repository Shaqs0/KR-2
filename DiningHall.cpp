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

void DiningHall::setMenu(MenuItem items[], int size) {
    int limit = (size < 5) ? size : 5; 
    for (int i = 0; i < limit; ++i) {
        menu[i] = items[i];
    }
}

void DiningHall::displayInfo() {
    cout << "Dining Hall Information:" << endl;
    cook.displayInfo();
    waiter.displayInfo();

    cout << "Menu:" << endl;
    for (int i = 0; i < 5; ++i) {
        menu[i].displayInfo();
    }
}
