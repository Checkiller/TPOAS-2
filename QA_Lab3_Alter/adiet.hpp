#include <string>

#ifndef HEADERS_ADIET_HPP_
#define HEADERS_ADIET_HPP_

/**
* \image html pad.png "Project Architecture Diagram"
* 
 * Abstract class representing a generic diet configuration.
 * 

 */
class ADiet {
public:
	/**
	 * \brief Parameterized constructor.
	 *
	 * \param name Name of the diet.
	 * \param portion1 Size of the first portion.
	 * \param portion2 Size of the second portion.
	 */
	ADiet(std::string, int, int);
	virtual ~ADiet() {};
	/// Display diet details to the console.
	virtual void display() = 0;
	/**
	* Calculates total worth of the diet.
	* \return Total worth of products in proportion. Formula: \f$ TotalWorth = Worth(P_1) \times Portion_1 + Worth(P_2) \times Portion_2 \f$
	*/
	virtual float totalWorth() = 0;
protected:
	std::string name; /// Name of the diet.
	int portion1; /// First portion weight.
	int portion2; /// Second portion weight.
};

#endif