/// @file MutantStack.hpp

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

/// GERER DIFFERENT CONTAINER TYPES
template <typename T, class C>
class	MutantStack : public std::stack< T, C > {
public:
	/// @brief Default constructor.
	MutantStack<T>() {}

	/// @brief Copy constructor.
	/// @param original The MutantStack object we want to copy from.
	MutantStack<T>(const MutantStack<T, C>& original) { *this = original; }

	/// @brief Destructor.
	~MutantStack<T, C>() {}

	/// @brief Assignment operator overload.
	/// @param original The MutantStack object we want to assign from.
	/// @return A reference to the assigned MutantStack object.
	MutantStack<T, C>&	operator=(const MutantStack<T, C>& original) {
		if (this != &original) {
			std::stack<T>::operator=(original);
		}
        return (*this);
	}

	typedef typename std::stack<T, C>::container_type::iterator            iterator;
	typedef typename std::stack<T, C>::container_type::const_iterator      const_iterator;
	typedef typename std::stack<T, C>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T, C>::container_type::const_iterator      const_reverse_iterator;

	/// @brief Function to retrieve the beginning of the stack.
	/// @return An iterator.
	iterator				begin() { return (this->c.begin()); }

	/// @brief Function to retrieve the end of the stack.
	/// @return An iterator.
	iterator				end() { return (this->c.end()); }

	/// @brief Function to retrieve the beginning of the stack in reverse order.
	/// @return A reverse iterator.
	reverse_iterator		rbegin() { return (this->c.rbegin()); }

	/// @brief Function to retrieve the end of the stack in reverse order.
	/// @return A reverse iterator.
	reverse_iterator		rend() { return (this->c.rend()); }

	/// @brief Function to retrieve the beginning of the stack.
	/// @return An iterator.
	const_iterator			cbegin() const { return (this->c.begin()); }

	/// @brief Function to retrieve the end of the stack.
	/// @return An iterator.
	const_iterator			cend() const { return (this->c.end()); }

	/// @brief Function to retrieve the beginning of the stack in reverse order.
	/// @return A reverse iterator.
	const_reverse_iterator	rcbegin() const { return (this->c.rbegin()); }

	/// @brief Function to retrieve the end of the stack in reverse order.
	/// @return A reverse iterator.
	const_reverse_iterator	rcend() const { return (this->c.rend()); }
};

#endif // !MUTANTSTACK_HPP
