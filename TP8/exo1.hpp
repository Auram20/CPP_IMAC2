
// ================================
// POO C++ - IMAC 2
// TP 8 - Exercice 1 
// ANIK Myriam
// ================================

#ifndef EXO1_HPP__
#define EXO1_HPP__

template<typename T>

const T &getMinimum(const T &a, const T &b)
{	
	return a < b ? a : b;  // Affectation ternaire	
	// équivaut à : 
	// if (a <b ) retun a;
	// else return b;

}

template<>

const char &getMinimum<char>(const char &a, const char &b)
{
	char A=toupper(a);
	char B=toupper(b);
	return A < B ? a : b;
}

#endif 