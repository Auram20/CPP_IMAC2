
// ================================
// POO C++ - IMAC 2
// TP 8 - Exercice 3
// ANIK Myriam
// ================================

#ifndef __TABLEAU__HPP
#define __TABLEAU__HPP

#include <iostream>
#include "Erreur.hpp"


template<typename T, int N>

class Tableau
{
	
	// METHODES 
	public:
		Tableau():m_size(0){ m_data = new T[N];} // CONSTRUCTEUR

		~Tableau() { delete[] m_data; } // DESTRUCTEUR

	// METHODES 
	// Tableau vide -> Vrai / Tableau non-vide -> Faux 
		bool isEmpty() const 
		{
			if(m_size <= 0)
				return true;
			else 
				return false; 
		}

	// Getter taille
		unsigned int getSize() const 
		{
			return m_size;
		}


	// Getter nb d'elts max
		int getMaxSize() const 
		{
			return N;
		}

	// Reference sur premier élt. avec exception si vide
		T getFirst() const 
		{
			if (isEmpty())
				throw Erreur(1, 1, "Array vide.");
			else
				return m_data[0]; 
		}

	// Reference sur dernier élt. avec exception si vide
		T getLast() const 
		{
			if (isEmpty())
				throw Erreur(1, 1, "Array vide.");
			else
				return m_data[m_size-1];
		}
	// Remplir tableau
		void push(const T &n) 
		{
			if (m_size >= N) {
				throw Erreur(1, 3, "Array Plein");
			} else {
				m_data[m_size] = n;
				m_size++;
			}
		}


// POP - INSERT - ERASE à faire

	// SURCHARGES
	
		T operator[](const unsigned int &n) const 
		{
			return m_data[n];
		}

		T &operator[](const unsigned int &n) 
		{
			return m_data[n];
		}

		T at(const unsigned int &n) const
		{
			if (isEmpty() || n > m_size)
				throw Erreur(1, 2, "Doesn't exist");
			else
				return m_data[n];
		}

		T &at(const unsigned int &n)
		{
			if (isEmpty() || n > m_size-1)
				throw Erreur(1, 2, "Doesn't exist.");
			else
				return m_data[n];
		}



	// ATTRIBUTS
	private: 
		T *m_data;
		unsigned int m_size;

};


#endif