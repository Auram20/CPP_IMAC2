// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef RECTANGLE_HPP__
#define RECTANGLE_HPP__

#include<iostream>


class Rectangle {
	
	protected:
	double largeur;
	double hauteur;
	

	public:
	Rectangle( )= default;
	Rectangle(double l, double h);
	~Rectangle(); 
	double getLargeur() const;
	double getHauteur() const;
	void setLargeur(double l);
	void setHauteur(double h);
	double surface() const;
	virtual void quiSuisJe() const;
};




#endif 