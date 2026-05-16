#include <iostream>

#include "product.hpp"

Product::Product()
	: calories(0), cost(0) {
}

Product::Product(int calories, float cost)
	: calories(calories), cost(cost) {
}

void Product::set(int calories, float cost) {
	this->calories = calories;
	this->cost = cost;
}

void Product::display() {
	std::cout << "Product: caloric content: " << this->calories << " cost: " << this->cost << std::endl;
}

float Product::worth() {
	// "This comment will not be included in the documentation." (c).
	return this->calories / this->cost; /// No division by 0 validation.
}