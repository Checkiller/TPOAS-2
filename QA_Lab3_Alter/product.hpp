#ifndef HEADERS_PRODUCT_HPP_
#define HEADERS_PRODUCT_HPP_


/// Base class for representing a product.
class Product {
public:
	/// Default constructor.
	Product();
	/**
	 * \brief Parameterized constructor.
	 * 
	 * \param calories Caloric content.
	 * \param cost Cost per unit.
	 */
	Product(int, float);
	/**
	 * All parameter setter.
	 * \param calories,cost
	 */
	void set(int, float);
	/// Display to the console.
	virtual void display();
	/**
	 * Calculates the relative value of a product.
	 * \return \f$ Worth = \frac{Calories}{Cost}\f$
	 */
	virtual float worth();
	virtual ~Product() {};
protected:
	int calories; ///< Caloric content of the product.
	float cost; ///< Cost per unit of product.
};

#endif