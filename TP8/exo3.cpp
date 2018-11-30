
// ================================
// POO C++ - IMAC 2
// TP 8 - Exercice 3 
// ANIK Myriam
// ================================

#include <iostream>
#include "exo3.hpp"



int main()
{

	Tableau<int, 3> Tab1;
	try {
		Tab1.push(1);
		Tab1.push(2);
		Tab1.push(3);
	} 
	catch (const Erreur &e) {
		std::cerr << e.what() <<  std::endl;
	}


	std::cout << Tab1[0] << std::endl;
	std::cout << Tab1[1] << std::endl;
	std::cout << Tab1[2] << std::endl;

	return 0;

};