/// @file Span.hpp
/// @brief

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

/// @class Span
/// @brief
class	Span {
public:
	/// @brief Default constructor.
	Span();

	/// @brief Constructor that sets the maximum number of values for our Span object.
	/// @param maxNumValues The maximum number of values that our Span object will be able to hold.
	Span(int maxNumValues);

	/// @brief Copy constructor.
	/// @param original The Span object we want to copy.
	Span(const Span& original);

	/// @brief Destructor.
	~Span();

	/// @brief Adds a number to container_.
	/// @param value The value to add to the container.
	void	addNumber(int value);

	/// @brief Add several numbers to our Span object.
    /// @param begin Beginning of the range of values we want to add to our Span object.
    /// @param end End of the range of values we want to add to our Span object.
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	/// @brief Finds the longest span between two values inside container_.
    /// @return A int representing the longest span.
	int		longestSpan() const;

	/// @brief Finds the shortest span between two values inside container_.
    /// @return A int representing the shortest span.
	int		shortestSpan() const;

	/// @brief Assignment operator overload.
	/// @param original The Span object we want to assign from
	/// @return A reference to the assigned Span object.
	Span&	operator=(const Span& original);

    unsigned int    getMaxValues() const;

    const std::vector<int>&   getContainer() const;

private:
	std::vector<int>	container_;	//< Container.
	const unsigned int	maxValues_;	//< Maximum number of values that the Span object can hold.
};

#endif // !SPAN_HPP
