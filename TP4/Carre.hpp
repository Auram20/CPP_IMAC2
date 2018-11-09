
// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef CARRE_HPP__
#define CARRE_HPP__

#include<iostream>
#include "Rectangle.hpp"

class Carre : public Rectangle {
	

	public:
	Carre() : Rectangle() {};
	~Carre();
	//		  setHauteur(cote),
	//		  setLargeur(cote);

	public:
	Carre(double c);
	void setCote(double c);
	virtual void quiSuisJe() const;
	
};




#endif 