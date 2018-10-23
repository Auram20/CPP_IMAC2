// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef RECTANGLE_HPP__
#define RECTANGLE_HPP__

#include<iostream>


class Rectangle {
	
	private:
	double largeur;
	double hauteur;
	

	public:
	Rectangle( )= default;
	Rectangle(double l, double h);
	double getLargeur() const;
	double getHauteur() const;
	void setLargeur(double l);
	void setHauteur(double h);
	double surface() const;
};


#endif 