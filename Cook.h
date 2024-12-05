#pragma once

#include "Employee.h"

class Cook : public Employee {
private:
    string specialty;

public:
    Cook();
    Cook(string name, int age, string specialty);
    void setSpecialty(string specialty);
    string getSpecialty();
    void displayInfo() override;
};

