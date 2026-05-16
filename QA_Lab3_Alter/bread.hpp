#include "product.hpp"

#ifndef HEADERS_BREAD_HPP_
#define HEADERS_BREAD_HPP_

/// Presents bread-containing products as a separate type of product.
class Bread : Product {
public:
	/// Default constructor.
	Bread();
	/**
	 * \brief Parameterized constructor.
	 *
	 * \param calories Caloric content.
	 * \param cost Cost per unit.
	 * \param bread Bread units content.
	 */
	Bread(int, float, int);
	/**
	 * All parameter setter.
	 * \param calories,cost,bread
	 */
	void set(int, float, int);
	/// Display to the console.
	void display() override;
	/**
	* Calculates the relative value of product adjusted to bread factor.
	* \return \f$ Worth = \frac{Calories}{Cost \times {Bread}^2} \f$
	*/
	float worth() override;
private:
	int bread; /// Bread units content.
};

#endif