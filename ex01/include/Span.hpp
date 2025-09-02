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

	/// @brief
	/// @param maxNumValues
	Span(int maxNumValues);

	/// @brief Copy constructor.
	/// @param original
	Span(const Span& original);

	/// @brief Destructor.
	~Span();

	/// @brief
	/// @param value
	void	addNumber(int value);

	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	/// @brief
	int		longestSpan() const;

	/// @brief
	int		shortestSpan() const;

	/// @brief Assignment operator overload.
	/// @param original
	/// @return
	Span&	operator=(const Span& original);

private:
	std::vector<int>	container_;	//<
	const unsigned int	maxValues_;	//<
};

#endif // !SPAN_HPP
