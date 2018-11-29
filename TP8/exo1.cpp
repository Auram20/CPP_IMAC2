
// ================================
// POO C++ - IMAC 2
// TP 8 - Exercice 1 
// ANIK Myriam
// ================================

#include <iostream>
#include "exo1.hpp"


int main()	
{

	std::cout << getMinimum(79,67) << std::endl;
	std::cout << getMinimum(7.9,6.7) << std::endl;
	std::cout << getMinimum('a','z') << std::endl;
	std::cout << getMinimum<float>(7.9,67) << std::endl;
	std::cout << getMinimum('a','Z') << std::endl;


	return 0;
}