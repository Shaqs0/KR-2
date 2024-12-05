#pragma once

#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int age;

public:
    Employee();
    Employee(string name, int age);
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
    virtual void displayInfo();
    virtual ~Employee() {}
};

