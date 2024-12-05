#pragma once

#include <string>
using namespace std;

class Product {
private:
    string name;
    int quantity;

public:
    Product();
    Product(string name, int quantity);
    void setName(string name);
    string getName();
    void setQuantity(int quantity);
    int getQuantity();
    void displayInfo();
};

