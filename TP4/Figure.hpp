// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef FIGURE_HPP__
#define FIGURE_HPP__

#include<iostream>


class Figure {
	
	

	public:
	Figure( )= default;
	~Figure(); 
	virtual void quiSuisJe() const;
	virtual double surface() const =0;
};




#endif 