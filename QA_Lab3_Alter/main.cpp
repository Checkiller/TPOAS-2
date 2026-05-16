#include <iostream>

#include "diet.hpp"
#include "breaddiet.hpp"
#include "hybriddiet.hpp"

int main() {
	Product product1(100, 100);
	Product product2(100, 200);

	Bread bread1(100, 100, 20);
	Bread bread2(100, 200, 40);

	Diet diet1("Standart Diet", product1, 100, product2, 50);
	BreadDiet diet2("Bread Diet", bread2, 100, bread2, 50);
	HybridDiet diet3("Hybrid Diet", product1, 100, bread1, 50);

	diet1.display();
	diet2.display();
	diet3.display();
}