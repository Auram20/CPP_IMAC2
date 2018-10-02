// ================================
// POO C++ - IMAC 2
// TP 2 - Exercice 1
// ================================

#include "VectorD.hpp"
#include<iostream>


int main()
{

	VectorD vec(3);
	vec.m_data[0]=1;
	vec.m_data[1]=1;
	vec.m_data[2]=1;


	VectorD vec2(vec);

	return 0;
}