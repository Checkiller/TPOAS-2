#include <iostream>

#include "diet.hpp"

Diet::Diet(std::string name, const Product& product1, int portion1, const Product& product2, int portion2)
	: ADiet(name, portion1, portion2), product1(product1), product2(product2) {
}

void Diet::display() {
	std::cout << "Diet: " << this->name << std::endl;
	product1.display();
	product2.display();
}

float Diet::totalWorth() {
	return this->product1.worth() * portion1 + this->product2.worth() * portion2;
}