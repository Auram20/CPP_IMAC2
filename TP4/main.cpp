// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================.


#include "Rectangle.hpp"
#include "Carre.hpp"
#include "Ellipse.hpp"
#include "Cercle.hpp"
#include "Figure.hpp"
#include<iostream>


void presenter(Figure const &f)
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
	presenter(e1);

	
 	Cercle ce1(3), ce2;
 	std::cout << ce1.surface() <<std::endl;
	presenter(ce1);

	// On fait les tests de la question 8 

	Rectangle r3;
//	Rectangle r4 = Carre(8); // Un Carré est un rectangle donc cette déclaration marche. 
//	Rectangle r4 = Cercle(8); // Aucune raison que ça marche un Cercle n'est pas un Rectangle. 
//	Carre r4=r3; // On ne peut pas affecter à un objet sous classe, un objet superclasse. On ne peut pas créer un carré et dire que c'est un Rectangle. Un rectangle est un carré mais un carré n'est pas un rectangle forcement.  
	std::cout << r4.getLargeur() << std::endl;
	std::cout << r4.getHauteur() << std::endl;
	



 	return 0;
}