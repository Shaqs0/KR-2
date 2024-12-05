#include "DiningHall.h"
#include "Cook.h"
#include "Waiter.h"
#include "Product.h"
#include "MenuItem.h"

int main() {
    Cook cook("John Doe", 35, "Italian Cuisine");
    Waiter waiter("Alice Smith", 28, 10);

    MenuItem menuItems[5] = {
        MenuItem("Spaghetti Carbonara", 12.99),
        MenuItem("Margherita Pizza", 10.99),
        MenuItem("Caesar Salad", 8.49),
        MenuItem("Tiramisu", 6.99),
        MenuItem("Espresso", 2.99)
    };

    DiningHall diningHall;
    diningHall.setCook(cook);
    diningHall.setWaiter(waiter);
    diningHall.setMenu(menuItems, 5);

    diningHall.displayInfo();

    return 0;
}
