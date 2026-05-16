#include "adiet.hpp"
#include "bread.hpp"

#ifndef HEADERS_HYBRIDDIET_HPP_
#define HEADERS_HYBRIDDIET_HPP_

class HybridDiet : public ADiet {
public:
    /**
     * \brief Parameterized constructor.
     *
     * \param name Name of the diet.
     * \param p1 Reference to the first product.
     * \param portion1 Weight of the first product.
     * \param b1 Reference to the bread product.
     * \param portion2 Weight of the second product.
     */
	HybridDiet(std::string, const Product&, int, const Bread&, int);
	void display();
	float totalWorth();
private:
	Product product; /// First product component.
	Bread bread; /// Bread product component.
};

#endif