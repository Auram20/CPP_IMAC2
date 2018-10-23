// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "Rectangle.hpp"


#include<iostream>


Rectangle::Rectangle(double l, double h)
{
	largeur=l;
	hauteur=h;
}



double Rectangle::getLargeur() const
{
	return largeur;
}


double Rectangle::getHauteur() const
{
	return hauteur;
}


void Rectangle::setLargeur(double l)
{
	largeur=l;
}

void Rectangle::setHauteur(double h)
{
	hauteur=h;
}

double Rectangle::surface() const
{
	return largeur*hauteur;
}