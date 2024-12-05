#include "Cook.h"
#include <iostream>
using namespace std;

Cook::Cook() : Employee(), specialty("None") {}

Cook::Cook(string name, int age, string specialty) : Employee(name, age), specialty(specialty) {}

void Cook::setSpecialty(string specialty) {
    this->specialty = specialty;
}

string Cook::getSpecialty() {
    return specialty;
}

void Cook::displayInfo() {
    cout << "Cook: " << name << ", Age: " << age << ", Specialty: " << specialty << endl;
}
