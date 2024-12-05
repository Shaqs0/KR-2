#include "DiningHall.h"
#include "Cook.h"
#include "Waiter.h"
#include "Product.h"
#include "MenuItem.h"

int main() {
    Cook cook("John Doe", 35, "Italian Cuisine");
    Waiter waiter("Alice Smith", 28, 10);

    DiningHall diningHall;
    diningHall.setCook(cook);
    diningHall.setWaiter(waiter);

    diningHall.displayInfo();

    return 0;
}
