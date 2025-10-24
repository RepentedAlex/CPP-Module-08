#include <iostream>

#include "ansi.h"

#include "Span.hpp"

int main() {
	PRINT_SECTION("Test from subject's main");
	{
		Span sp(5);
		try {
			PRINT_TEST("Populating Span object");
			{
				sp.addNumber(6);
				sp.addNumber(3);
				sp.addNumber(17);
				sp.addNumber(9);
				sp.addNumber(11);
				std::cout << "Values inside Span \"sp\": ";
				for (std::vector<int>::const_iterator it = sp.getContainer().begin() ; it != sp.getContainer().end() ; it++) {
					std::cout << '[' << *it << ']';
					if (it != (sp.getContainer().end()) - 1) {
						std::cout << ", ";
					}
				}
				std::cout << std::endl;
			}
			PRINT_TEST("Finding shortest span");
			{
				std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			}
			PRINT_TEST("Finding longest span");
			{
				std::cout << "Longest span: " << sp.longestSpan() << std::endl;
			}
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}

	PRINT_SECTION("Personal tests");
	{
		Span sp2(10);
		Span sp3(10);
		Span sp4(1);
		try {
			std::vector<int> vec;
			vec.push_back(100);
			vec.push_back(200);
			vec.push_back(300);
			PRINT_TEST("Populating Span object \"sp2\" through iterator range");
			{
				sp2.addNumber(vec.begin(), vec.end());
				std::cout << "Values inside Span \"sp2\": ";
				for (std::vector<int>::const_iterator it = sp2.getContainer().begin() ; it != sp2.getContainer().end() ; it++) {
					std::cout << '[' << *it << ']';
					if (it != (sp2.getContainer().end()) - 1) {
						std::cout << ", ";
					}
				}
				std::cout << std::endl;
			}
			PRINT_TEST("Copying Span object \"sp2\" to Span \"sp3\"");
			{
				sp3 = sp2;
				std::cout << "Values inside Span \"sp3\": ";
				for (std::vector<int>::const_iterator it = sp3.getContainer().begin() ; it != sp3.getContainer().end() ; it++) {
					std::cout << '[' << *it << ']';
					if (it != (sp3.getContainer().end()) - 1) {
						std::cout << ", ";
					}
				}
				std::cout << std::endl;
			}
			PRINT_TEST("Finding shortest span");
			{
				std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
			}
			PRINT_TEST("Finding longest span");
			{
				std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
			}
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
		try {
			PRINT_TEST("Trying to copy Span object to smaller one");
			{
				sp4 = sp3;
			}
			PRINT_TEST("Finding shortest span");
			{
				std::cout << "Shortest span: " << sp4.shortestSpan() << std::endl;
			}
			PRINT_TEST("Finding longest span");
			{
				std::cout << "Longest span: " << sp4.longestSpan() << std::endl;
			}
		} catch (const std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	return (0);
}
