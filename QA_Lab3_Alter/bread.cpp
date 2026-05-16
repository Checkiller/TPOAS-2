#include <iostream>

#include "bread.hpp"

Bread::Bread()
	: Product(), bread(0) {
}

Bread::Bread(int calories, float cost, int bread)
	: Product(calories, cost), bread(bread) {
}

void Bread::set(int calories, float cost, int bread) {
	Product::set(calories, cost);
	this->bread = bread;
}

void Bread::display() {
	std::cout << "Product: caloric content: " << this->calories << " cost: " << this->cost << " bread units " << this->bread << std::endl;
}

float Bread::worth() {
	return this->calories / (this->cost * std::pow((this->bread), 2)); /// No division by 0 validation.
}