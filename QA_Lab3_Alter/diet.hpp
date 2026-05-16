#include "adiet.hpp"
#include "product.hpp"

#ifndef HEADERS_DIET_HPP_
#define HEADERS_DIET_HPP_

/// Presents a simple diet configuration containing two single products.
class Diet : public ADiet {
public:
    /**
     * \brief Parameterized constructor.
     *
     * \param name Name of the diet.
     * \param p1 Reference to the first product.
     * \param portion1 Weight of the first product.
     * \param p2 Reference to the second product.
     * \param portion2 Weight of the second product.
     */
	Diet(std::string, const Product&, int, const Product&, int);
	void display();
	float totalWorth();
private:
	Product product1; /// First product component.
	Product product2; /// Second product component.
};

#endif