#include <deque>
#include <iostream>
#include <list>
#include <vector>

#include "ansi.h"

#include "easyfind.hpp"

int main() {
    PRINT_SECTION("Testing easyfind function");
    {
        PRINT_SUBSECTION("Test std::vector {1, 2, 3, 4, 5}");

        PRINT_TEST("Value present in the middle (3)");
        {
            std::vector<int> vec;
            vec.push_back(1);
            vec.push_back(2);
            vec.push_back(3);
            vec.push_back(4);
            vec.push_back(5);
            try {
                std::vector<int>::iterator it = easyfind(vec, 3);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_TEST("Value present at the beginning (1)");
        {
            std::vector<int> vec;
            vec.push_back(1);
            vec.push_back(2);
            vec.push_back(3);
            vec.push_back(4);
            vec.push_back(5);
            try {
                std::vector<int>::iterator it = easyfind(vec, 1);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_TEST("Value present at the end (5)");
        {
            std::vector<int> vec;
            vec.push_back(1);
            vec.push_back(2);
            vec.push_back(3);
            vec.push_back(4);
            vec.push_back(5);
            try {
                std::vector<int>::iterator it = easyfind(vec, 5);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_TEST("Value not present (42)");
        {
            std::vector<int> vec;
            vec.push_back(1);
            vec.push_back(2);
            vec.push_back(3);
            vec.push_back(4);
            vec.push_back(5);
            try {
                std::vector<int>::iterator it = easyfind(vec, 42);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_TEST("Empty container");
        {
            std::vector<int> vec;
            try {
                std::vector<int>::iterator it = easyfind(vec, 42);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_SUBSECTION("Test std::list {10, 20, 30, 40, 50}");

        PRINT_TEST("Value present in the middle (30)");
        {
            std::list<int> lst;
            lst.push_back(10);
            lst.push_back(20);
            lst.push_back(30);
            lst.push_back(40);
            lst.push_back(50);
            try {
                std::list<int>::iterator it = easyfind(lst, 30);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_TEST("Value not present (99)");
        {
            std::list<int> lst;
            lst.push_back(10);
            lst.push_back(20);
            lst.push_back(30);
            lst.push_back(40);
            lst.push_back(50);
            try {
                std::list<int>::iterator it = easyfind(lst, 99);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_SUBSECTION("Test std::deque {100, 200, 300, 400, 500}");

        PRINT_TEST("Value present in the middle (300)");
        {
            std::deque<int> deq;
            deq.push_back(100);
            deq.push_back(200);
            deq.push_back(300);
            deq.push_back(400);
            deq.push_back(500);
            try {
                std::deque<int>::iterator it = easyfind(deq, 300);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }

        PRINT_TEST("Value not present (999)");
        {
            std::deque<int> deq;
            deq.push_back(100);
            deq.push_back(200);
            deq.push_back(300);
            deq.push_back(400);
            deq.push_back(500);
            try {
                std::deque<int>::iterator it = easyfind(deq, 999);
                std::cout << "Found: " << *it << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            }
        }
    }
    return (0);
}
