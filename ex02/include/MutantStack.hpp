/// @file MutantStack.hpp

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

/// @tparam T
template <typename T>
/// @class MutantStack
class	MutantStack : public std::stack< T, std::deque<T> > {
public:
	MutantStack<T>() {}
	MutantStack<T>(const MutantStack<T>& original) { *this = original; }
	~MutantStack<T>() {}
	MutantStack<T>&	operator=(const MutantStack<T>& original) {
		if (this != &original) {
		std::stack<T>::operator=(original);
		}
	}

	typedef typename std::deque<T>::iterator		iterator;
	typedef typename std::deque<T>::const_iterator	const_iterator;

	iterator	begin() { return (this->c.begin()); }
	iterator	end() { return (this->c.end()); }
	iterator	rbegin() { return (this->c.end()); }
	iterator	rend() { return (this->c.begin()); }
	const_iterator	cbegin() const { return (this->c.begin()); }
	const_iterator	cend() const { return (this->c.end()); }
	const_iterator	rcbegin() const { return (this->c.end()); }
	const_iterator	rcend() const { return (this->c.begin()); }
private:
};

#endif // !MUTANTSTACK_HPP
