#include <iostream>

#include "hybriddiet.hpp"

HybridDiet::HybridDiet(std::string name, const Product& product, int portion1, const Bread& bread, int portion2)
	: ADiet(name, portion1, portion2), product(product), bread(bread) {
}

void HybridDiet::display() {
	std::cout << "Diet: " << this->name << std::endl;
	product.display();
	bread.display();
}

float HybridDiet::totalWorth() {
	return this->product.worth() * portion1 + this->bread.worth() * portion2;
}