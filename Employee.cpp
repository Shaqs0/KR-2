#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee() : name("Unknown"), age(0) {}

Employee::Employee(string name, int age) : name(name), age(age) {}

void Employee::setName(string name) {
    this->name = name;
}

string Employee::getName() {
    return name;
}

void Employee::setAge(int age) {
    this->age = age;
}

int Employee::getAge() {
    return age;
}

void Employee::displayInfo() {
    cout << "Employee: " << name << ", Age: " << age << endl;
}
