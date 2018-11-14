// ================================
// POO C++ - IMAC 2
// TP Noté - ANIK Myriam
// ================================

// Pour compiler : 
// g++ -o main -Wall -O2 main.cpp Vehicule.cpp Voiture.cpp Bus.cpp 
// Pour executer : 
// ./main


// On importe les librairies nécessaires et les fichiers .hpp
#include <iostream>
#include <vector>
#include <algorithm>
#include "Vehicule.hpp"
#include "Voiture.hpp"
#include "Bus.hpp"


void informations(Vehicule &v)
{
	v.afficher_infos();
}


int main()
{

	// Des petits tests pour commencer 
	std::cout <<" \n ___________ PETITS TESTS _______________ " <<std::endl;

	Vehicule myvehicle1("Twingo",2000,16000);
	informations(myvehicle1);

	Voiture mycar1("Peugeot",2018,30000);
	informations(mycar1);

	Bus mybus1("CTM",2003,59999);
	informations(mybus1);

	// Déclarer un vecteur de pointeurs sur des véhicules

	std::vector<Vehicule*> Garage;
	Garage.push_back(new Voiture("BM",2010,10000));
	Garage.push_back(new Voiture("Opel",2004,4100));
	Garage.push_back(new Bus("Mercedez-Benz",1999,42300));
	Garage.push_back(new Bus("Renault",2016,55699));

	// On veut lister les véhicules du Garage avec leurs informations : 

	std::cout <<"\n _____________GARAGE________________ " <<std::endl;
	std::for_each(Garage.begin(), Garage.end(),
		[](Vehicule *veh)
		{
			informations(*veh);
		}
	);

	// Si on veut vider le garage : 
	 Garage.clear();



	return 0;
}