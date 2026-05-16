#include <iostream>

#include "breaddiet.hpp"

BreadDiet::BreadDiet(std::string name, const Bread& bread1, int portion1, const Bread& bread2, int portion2)
	: ADiet(name, portion1, portion2), bread1(bread1), bread2(bread2) {
}

void BreadDiet::display() {
	std::cout << "Diet: " << this->name << std::endl;
	bread1.display();
	bread2.display();
}

float BreadDiet::totalWorth() {
	return this->bread1.worth() * portion1 + this->bread2.worth() * portion2;
}