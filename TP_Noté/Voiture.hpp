
// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

#ifndef VOITURE_HPP__
#define VOITURE_HPP__

#include<iostream>
#include "Vehicule.hpp"

// Classe voiture qui hérite de véhicule 
class Voiture : public Vehicule {
	

	public:
	Voiture() : Vehicule() {}; // Constructeur défaut 
	Voiture(const char * mamarque, int madate, int monprix); // Constructeur liste initialisation
	~Voiture();
	
	public:
	virtual void afficher_infos();
	
};




#endif 