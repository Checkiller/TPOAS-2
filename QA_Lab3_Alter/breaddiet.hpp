#include "adiet.hpp"
#include "bread.hpp"

#ifndef HEADERS_BREADDIET_HPP_
#define HEADERS_BREADDIET_HPP_

class BreadDiet : public ADiet {
public:
    /**
     * \brief Parameterized constructor.
     *
     * \param name Name of the diet.
     * \param b1 Reference to the first bread product.
     * \param portion1 Weight of the first product.
     * \param b2 Reference to the second bread product.
     * \param portion2 Weight of the second product.
     */
	BreadDiet(std::string, const Bread&, int, const Bread&, int);
	void display();
	float totalWorth();
private:
	Bread bread1; /// First bread product component.
	Bread bread2; /// Second bread product component.
};

#endif