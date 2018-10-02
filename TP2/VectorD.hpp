// ================================
// POO C++ - IMAC 2
// TP 2 - Exercice 1
// ================================

#ifndef VECTORD_HPP__
#define VECTORD_HPP__

#include<iostream>

class VectorD 
{

public: 
	/// \brief constructor // docsygen
	// Méthodes
VectorD(const size_t &size);
VectorD(const VectorD &v);
~VectorD(); 

public: 
	//Attributs 
	size_t m_size;
	double *m_data;

};

#endif 