
// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef CARRE_HPP__
#define CARRE_HPP__

#include<iostream>
#include "Rectangle.hpp"

class Carre : public Rectangle {
	
	private:
	double cote;

	public:
	Carre() : Rectangle() {};
	//		  setHauteur(cote),
	//		  setLargeur(cote);

	Carre(double c);
	void setCote(double c);

	};




#endif 