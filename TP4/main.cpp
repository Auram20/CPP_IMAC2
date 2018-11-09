// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================.


#include "Rectangle.hpp"
#include "Carre.hpp"
#include "Ellipse.hpp"
#include<iostream>


void presenter(Rectangle const &f)
{
	f.quiSuisJe();
}


int main()
{

	Rectangle r1(2.6, 4.42), r2;
	std::cout << r1.surface() << std::endl;
	r1.setLargeur(3.9);
	std::cout << r1.getLargeur() << std::endl;
	presenter(r1);

	Carre c1(3), c2;
	std::cout << c1.surface() << std::endl;
	c2.setCote(2.9);
	presenter(c1);
 	

 	Ellipse e1(2,4), e2;
 	std::cout << e1.surface() << std::endl;

 	return 0;
}