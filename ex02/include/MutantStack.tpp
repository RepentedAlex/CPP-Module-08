#include "MutantStack.hpp"

template <typename T>
iterator	MutantStack<T>::begin() {
	return (this->c.begin());
}

template <typename T>
iterator		MutantStack<T>::end() {
	return (this->c.end());
}

template <typename T>
iterator		MutantStack<T>::rbegin() {
	return (this->c.end());
}

template <typename T>
iterator		MutantStack<T>::rend() {
	return (this->c.begin());
}

template <typename T>
const_iterator	MutantStack<T>::cbegin() const {
	return (this->c.begin());
}

template <typename T>
const_iterator	MutantStack<T>::cend() const {
	return (this->c.end());
}

template <typename T>
const_iterator	MutantStack<T>::rcbegin() const {
	return (this->c.end());
}

template <typename T>
const_iterator	MutantStack<T>::rcend() const {
	return (this->c.begin());
}
