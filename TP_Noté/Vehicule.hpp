// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

#ifndef VEHICULE_HPP__
#define VEHICULE_HPP__

#include <iostream>


class Vehicule 
{
	
	public: 
		Vehicule(); // Constructeur par déf
		Vehicule(const char * mamarque, int madate, int monprix); // Constructeur liste d'init
		virtual ~Vehicule(); // Déstructeur
		virtual void afficher_infos();
		
		// GETTERS sur les attributs
		int getDate_achat();
		int getPrix_achat();
		const char * getMarque();

		
		// Attributs en protected pour que les classes filles puissent s'en servir
	protected: 
		const char * marque;
		int date_achat; 
		int prix_achat;


};




#endif 