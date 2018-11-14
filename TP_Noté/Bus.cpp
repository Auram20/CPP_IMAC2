
// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

#include "Bus.hpp"


#include<iostream>


// Constructeur liste initialisation
Bus::Bus(const char * mamarque, int madate, int monprix) : Vehicule(mamarque,madate,monprix)
{};
	


// Détruire un Bus
Bus::~Bus()
{
}; 

void Bus::afficher_infos()
{
	std::cout << "\nMarque du bus: " << marque << std::endl;
	std::cout << "Prix d'achat du bus: " << prix_achat << std::endl;
	std::cout << "Date d'achat du bus: " << date_achat << std::endl;
	std::cout <<"_______________________________________" <<std::endl;
}