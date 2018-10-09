// ================================
// POO C++ - IMAC 2
// TP 2 - Exercice 1
// ================================

#include "VectorD.hpp"
#include<iostream>


int main()
{

	VectorD vec(3);
	
	vec.setValue(0,1);
	vec.setValue(1,1);
	vec.setValue(2,1);

	VectorD vec2(3);

	vec2.setValue(0,2);
	vec2.setValue(1,2);
	vec2.setValue(2,2);

	VectorD vec3=vec.operator+(vec2);

	vec3.saveFile();

	// std::cout << vec.size() << std::endl ;
	std::cout << "L'élément demandé " << vec3.getValue(1) << std::endl ;

	return 0;
}