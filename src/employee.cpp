#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    std::string position;

    Employee(std::string n, std::string p) : name(n), position(p) {}

    void promote(std::string newPosition) {
        position = newPosition;
    }

    std::string getDetails() {
        return name + " - " + position;
    }
};
