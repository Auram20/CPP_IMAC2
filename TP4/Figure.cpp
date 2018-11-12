// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "Figure.hpp"


#include<iostream>



// Détruire une Figure
Figure::~Figure()
{
}; 

void Figure::quiSuisJe() const
{
	std::cout << "Je suis une Figure" << std::endl;
}
