
// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef CERCLE_HPP__
#define CERCLE_HPP__

#include<iostream>
#include "Ellipse.hpp"

class Cercle : public Ellipse {
	

	public:
	Cercle() : Ellipse() {};
	~Cercle();
	//		  setHauteur(cote),
	//		  setLargeur(cote);

	public:
	Cercle(double r);
	void setRay(double r);
	virtual void quiSuisJe() const;
	
};




#endif 