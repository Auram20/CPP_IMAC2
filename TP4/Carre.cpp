// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "Carre.hpp"


#include<iostream>




Carre::Carre(double c) : Rectangle(c,c)
{
}



void Carre::setCote (double c)
{
	hauteur=c;
	largeur=c;
}

