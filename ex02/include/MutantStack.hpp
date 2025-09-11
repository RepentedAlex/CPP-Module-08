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

	iterator	begin();
	iterator	end();
	iterator	rbegin();
	iterator	rend();
	const_iterator	cbegin() const;
	const_iterator	cend() const;
	const_iterator	rcbegin() const;
	const_iterator	rcend() const;
private:
};

#endif // !MUTANTSTACK_HPP
