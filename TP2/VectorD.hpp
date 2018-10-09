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
inline size_t size() const{return m_size;}; // Ça coute moins d'implémenter la fonction dans le hpp car pas couteux.
inline double getValue(const size_t index) const{return m_data[index];};
inline void setValue(const size_t index, const double &val) {m_data[index]=val;};
void normalize();
VectorD operator+(const VectorD &v2)const;
VectorD &operator=(const VectorD &v);
int saveFile();
int VecFromFile();

	//Attributs 

private:
	size_t m_size;
	double *m_data;

};

#endif 