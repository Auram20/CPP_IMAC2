// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "Cercle.hpp"


#include<iostream>



// Détruire un Cercle
Cercle::~Cercle()
{
}; 


Cercle::Cercle(double r) : Ellipse(r,r)
{
}



void Cercle::setRay (double r)
{
	smallRay=r;
	bigRay=r;
}

void Cercle::quiSuisJe() const
{
	std::cout << "Je suis un Cercle" << std::endl;
}

