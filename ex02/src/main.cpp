#include <iostream>
#include <list>
#include <vector>

#include "ansi.h"

#include "MutantStack.hpp"

int main() {
	PRINT_SECTION("Subject's main");
	{
		MutantStack<int> mstack;
		PRINT_TEST("Populating MutantStack object");
		{
			mstack.push(5);
			mstack.push(17);

			for (MutantStack<int, std::deque<int> >::reverse_iterator it = mstack.rbegin() ; it != mstack.rend() ; it++) {
				std::cout << '[' << *it << ']';
				std::cout << std::endl;
			}
		}
		PRINT_TEST("Displaying MutantStack's top element");
		{
			std::cout << mstack.top() << std::endl;
		}
		PRINT_TEST("Displaying MutantStack's size after popping one element");
		{
			mstack.pop();
			std::cout << mstack.size() << std::endl;
		}
		PRINT_TEST("Pushing elements into the MutantStack");
		{
			mstack.push(3);
			mstack.push(5);
			mstack.push(737);
			mstack.push(0);
		}
		PRINT_TEST("Displaying each element of the stack");
		{
			MutantStack<int, std::deque<int> >::iterator it = mstack.begin();
			MutantStack<int, std::deque<int> >::iterator ite = mstack.end();
			++it;
			--it;
			while (it != ite) {
				std::cout << *it << std::endl;	// I find this to be pretty dumb since it'll print the stack in the wrong order
				++it;
			}
			std::stack<int> s(mstack);
		}
	}
	PRINT_SECTION("Subject's main but with a std::deque explicitly specified as container_type");
	{
		MutantStack<int, std::deque<int> > mstack;
		PRINT_TEST("Populating MutantStack object");
		{
			mstack.push(5);
			mstack.push(17);

			for (MutantStack<int, std::deque<int> >::reverse_iterator it = mstack.rbegin() ; it != mstack.rend() ; it++) {
				std::cout << '[' << *it << ']';
				std::cout << std::endl;
			}
		}
		PRINT_TEST("Displaying MutantStack's top element");
		{
			std::cout << mstack.top() << std::endl;
		}
		PRINT_TEST("Displaying MutantStack's size after popping one element");
		{
			mstack.pop();
			std::cout << mstack.size() << std::endl;
		}
		PRINT_TEST("Pushing elements into the MutantStack");
		{
			mstack.push(3);
			mstack.push(5);
			mstack.push(737);
			mstack.push(0);
		}
		PRINT_TEST("Displaying each element of the stack");
		{
			MutantStack<int, std::deque<int> >::iterator it = mstack.begin();
			MutantStack<int, std::deque<int> >::iterator ite = mstack.end();
			++it;
			--it;
			while (it != ite) {
				std::cout << *it << std::endl;	// I find this to be pretty dumb since it'll print the stack in the wrong order
				++it;
			}
			std::stack<int, std::deque<int> > s(mstack);
		}
	}
	PRINT_SECTION("Now, the same but with a std::list, subject specifies that it should behave the same");
	{
		MutantStack<int, std::list<int> >	list;
		PRINT_TEST("Populating MutantStack object");
		{
			list.push(5);
			list.push(17);

			for (MutantStack<int, std::list<int> >::reverse_iterator it = list.rbegin() ; it != list.rend() ; it++) {
				std::cout << '[' << *it << ']';
				std::cout << std::endl;
			}
		}
		PRINT_TEST("Displaying MutantStack's top element");
		{
			std::cout << *list.rbegin() << std::endl;
		}
		PRINT_TEST("Displaying MutantStack's size after popping one element");
		{
			list.pop();
			std::cout << list.size() << std::endl;
		}
		PRINT_TEST("Pushing elements into the MutantStack");
		{
			list.push(3);
			list.push(5);
			list.push(737);
			list.push(0);
		}
		PRINT_TEST("Displaying each element of the stack");
		{
			std::list<int>::iterator it = list.begin();
			std::list<int>::iterator ite = list.end();
			++it;
			--it;
			while (it != ite) {
				std::cout << *it << std::endl;	// I find this to be pretty dumb since it'll print the stack in the wrong order
				++it;
			}
			std::stack<int, std::list<int> > s(list);
		}
	}
	PRINT_SECTION("Now, the same but with a std::vector, subject specifies that it should behave the same");
	{
		MutantStack<int, std::vector<int> >	list;
		PRINT_TEST("Populating MutantStack object");
		{
			list.push(5);
			list.push(17);

			for (MutantStack<int, std::vector<int> >::reverse_iterator it = list.rbegin() ; it != list.rend() ; it++) {
				std::cout << '[' << *it << ']';
				std::cout << std::endl;
			}
		}
		PRINT_TEST("Displaying MutantStack's top element");
		{
			std::cout << *list.rbegin() << std::endl;
		}
		PRINT_TEST("Displaying MutantStack's size after popping one element");
		{
			list.pop();
			std::cout << list.size() << std::endl;
		}
		PRINT_TEST("Pushing elements into the MutantStack");
		{
			list.push(3);
			list.push(5);
			list.push(737);
			list.push(0);
		}
		PRINT_TEST("Displaying each element of the stack");
		{
			std::vector<int>::iterator it = list.begin();
			std::vector<int>::iterator ite = list.end();
			++it;
			--it;
			while (it != ite) {
				std::cout << *it << std::endl;	// I find this to be pretty dumb since it'll print the stack in the wrong order
				++it;
			}
			std::stack<int, std::vector<int> > s(list);
		}
	}
	PRINT_SECTION("Using double variables instead of int");
	{
		MutantStack<double, std::vector<double> >	list;
		PRINT_TEST("Populating MutantStack object");
		{
			list.push(5.48);
			list.push(17.26);

			for (MutantStack<double, std::vector<double> >::reverse_iterator it = list.rbegin() ; it != list.rend() ; it++) {
				std::cout << '[' << *it << ']';
				std::cout << std::endl;
			}
		}
		PRINT_TEST("Displaying MutantStack's top element");
		{
			std::cout << *list.rbegin() << std::endl;
		}
		PRINT_TEST("Displaying MutantStack's size after popping one element");
		{
			list.pop();
			std::cout << list.size() << std::endl;
		}
		PRINT_TEST("Pushing elements into the MutantStack");
		{
			list.push(3.14);
			list.push(5.12);
			list.push(737.777);
			list.push(0.0);
		}
		PRINT_TEST("Displaying each element of the stack");
		{
			std::vector<double>::iterator it = list.begin();
			std::vector<double>::iterator ite = list.end();
			++it;
			--it;
			while (it != ite) {
				std::cout << *it << std::endl;	// I find this to be pretty dumb since it'll print the stack in the wrong order
				++it;
			}
			std::stack<double, std::vector<double> > s(list);
		}
	}
	return 0;
}
