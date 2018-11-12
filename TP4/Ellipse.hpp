// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef ELLIPSE_HPP__
#define ELLIPSE_HPP__

#include<iostream>
#include "Figure.hpp"



class Ellipse : public Figure{
	
	protected:
	double smallRay;
	double bigRay;
		

	public:
	Ellipse() = default;
	Ellipse(double l, double h);
	~Ellipse(); 
	
	double getBigRay() const;
	double getSmallRay() const;
	void setBigRay(double l);
	void setSmallRay(double h);
	double surface() const;
	virtual void quiSuisJe() const;
};




#endif 