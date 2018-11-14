
// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

#include "Voiture.hpp"


#include<iostream>


// Constructeur liste initialisation
Voiture::Voiture(const char * mamarque, int madate, int monprix) : Vehicule(mamarque,madate,monprix)
{};
	


// Détruire une voiture
Voiture::~Voiture()
{
}; 

void Voiture::afficher_infos()
{
	std::cout << "\nMarque de la voiture: " << marque << std::endl;
	std::cout << "Prix d'achat de la voiture: " << prix_achat << std::endl;
	std::cout << "Date d'achat de la voiture: " << date_achat << std::endl;
	std::cout <<"_______________________________________" <<std::endl;
}