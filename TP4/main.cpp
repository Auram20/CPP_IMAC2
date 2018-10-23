// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================.


#include "Rectangle.hpp"
#include<iostream>

int main()
{

	Rectangle r1(2.6, 4.42), r2;
	std::cout << r1.surface() << std::endl;
	r1.setLargeur(3.9);
	std::cout << r1.getLargeur() << std::endl;
 	return 0;
}