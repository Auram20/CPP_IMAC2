// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "Carre.hpp"


#include<iostream>



// Détruire un Carre
Carre::~Carre()
{
}; 


Carre::Carre(double c) : Rectangle(c,c)
{
}



void Carre::setCote (double c)
{
	hauteur=c;
	largeur=c;
}

void Carre::quiSuisJe() const
{
	std::cout << "Je suis un carre" << std::endl;
}

