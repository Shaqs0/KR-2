#pragma once

#include "Product.h"
#include "MenuItem.h"
#include "Cook.h"
#include "Waiter.h"

class DiningHall {
private:
    Product products[5];
    MenuItem menu[5];
    Cook cook;
    Waiter waiter;

public:
    DiningHall();
    void setCook(Cook cook);
    void setWaiter(Waiter waiter);
    void displayInfo();
};

