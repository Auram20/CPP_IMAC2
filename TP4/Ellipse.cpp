// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "Ellipse.hpp"


#include<iostream>
#include <math.h>

Ellipse::Ellipse(double a, double b)
{
	smallRay=a;
	bigRay=b;
}


// Détruire une Ellipse
Ellipse::~Ellipse()
{
}; 

double Ellipse::getSmallRay() const
{
	return smallRay;
}


double Ellipse::getBigRay() const
{
	return bigRay;
}


void Ellipse::setSmallRay(double a)
{
	smallRay=a;
}

void Ellipse::setBigRay(double b)
{
	bigRay=b;
}

double Ellipse::surface() const
{
	return smallRay*bigRay*M_PI;
}

void Ellipse::quiSuisJe() const
{
	std::cout << "Je suis une ellipse" << std::endl;
}
