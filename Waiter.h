#pragma once

#include "Employee.h"

class Waiter : public Employee {
private:
    int tablesServed;

public:
    Waiter();
    Waiter(string name, int age, int tablesServed);
    void setTablesServed(int tables);
    int getTablesServed();
    void displayInfo() override;
};

