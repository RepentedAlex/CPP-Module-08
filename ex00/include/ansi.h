/// @file ansi.h
/// @brief

#ifndef ANSI_H
#define ANSI_H

#define BLUE	"\033[1;95m"
#define CYAN	"\033[36m"
#define YELLOW	"\033[4;33m"
#define RESET	"\033[0m"

#include <iostream>

#define PRINT_SECTION(x) \
do { \
	std::cout << std::endl << BLUE "=== " x " ===" RESET << std::endl; \
} while (0)


#define PRINT_SUBSECTION(x) \
do { \
	std::cout << std::endl << CYAN "~ " x " ~" RESET << std::endl; \
} while (0)

#define PRINT_TEST(x) \
do { \
	std::cout << YELLOW x RESET << std::endl; \
} while (0)

#endif // !ANSI_H
