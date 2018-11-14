
// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

#ifndef BUS_HPP__
#define BUS_HPP__

#include<iostream>
#include "Vehicule.hpp"

// Classe Bus qui hérite de Véhicule 


class Bus : public Vehicule {
	

	public:
		Bus() : Vehicule() {};	// Constructeur déf
		Bus(const char * mamarque, int madate, int monprix); // Constructeur liste initialisation
		~Bus();
	
	public:
	virtual void afficher_infos();
	
};




#endif 