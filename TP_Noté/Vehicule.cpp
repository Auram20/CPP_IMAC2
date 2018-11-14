// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

#include <iostream>
#include "Vehicule.hpp"


// Constructeur par déf
Vehicule::Vehicule()
{}

// Constructeur ac liste d'initialisation
Vehicule::Vehicule(const char * mamarque, int madate, int monprix):marque(mamarque), date_achat(madate), prix_achat(monprix){};



int Vehicule::getDate_achat()
{
	return date_achat;
}


int Vehicule::getPrix_achat()
{
	return prix_achat;
}


const char * Vehicule::getMarque()
{
	return marque;
}


void Vehicule::afficher_infos()
{
	std::cout << "\nMarque du véhicule: " << marque << std::endl;
	std::cout << "Prix d'achat du véhicule : " << prix_achat << std::endl;
	std::cout << "Date d'achat du véhicule : " << date_achat << std::endl;
	std::cout <<"_______________________________________" <<std::endl;
}

// Déstructeur 
Vehicule::~Vehicule() 
{}