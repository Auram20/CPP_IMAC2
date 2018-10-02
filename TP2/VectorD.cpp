// ================================
// POO C++ - IMAC 2
// TP 2 - Exercice 1
// ================================

#include "VectorD.hpp"


// Créer un vecteur
VectorD::VectorD(const size_t &size):m_size(size)
{
	m_data= new double[size];
}; 	


VectorD::VectorD(const VectorD &v):m_size(v.m_size)
{
	m_data=new double[v.m_size];
	std::copy(v.m_data,v.m_data+v.m_size,m_data);

};


// Détruire un vecteur
VectorD::~VectorD()
{
	delete[] m_data;
}; 