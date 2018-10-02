// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 6
// ================================

#include<iostream>
#include <vector>
#include "chrono.hpp"

namespace TP_CPP_IMAC2
{

	int meanCopy(const std::vector<int> myvec)
	{
		Chrono chrono;
		chrono.start();
		size_t taille=myvec.size();
		float moyenne=0;
				for (size_t i=0;i<taille;i++)
				{
					moyenne+=myvec[i];
				}	
			moyenne=moyenne/(float)taille;
			std::cout << "La moyenne des élts : " << moyenne << std::endl;
		chrono.stop();
		std::cout <<"Time Mean Copy : "<< chrono.timeSpan()<< " s "<<std::endl;
		return 0;
	}

	int mean(const std::vector<int> &myvec)
	{
		Chrono chrono;
		chrono.start();
		size_t taille=myvec.size();
		float moyenne=0;
				for (size_t i=0;i<taille;i++)
				{
					moyenne+=myvec[i];
				}	
			moyenne=moyenne/(float)taille;
			std::cout << "La moyenne des élts : " << moyenne << std::endl;

		chrono.stop();
		std::cout <<"Time Mean Reference : "<< chrono.timeSpan()<< " s "<<std::endl;
		return 0;
	}

	int main(int argc, char *argv[])
	{
		int val;
		size_t taille;
		std::vector<int> v;
		std::cout << "Quelle taille le vecteur ? " << std::endl;
		std::cin >> taille;

		for (size_t i=0;i<taille;i++)
		{
			std::cout << "Rentrez l'élément numéro : " << i << std::endl; 
			std::cin >> val;
			v.push_back(val);
		}

		std::cout << "La taille de votre vecteur : " << v.size() << std::endl;

	    // Affichage de l'adresse des trois premiers éléments et taille :
		for (int i=0; i<3; i++)
		{
			std::cout << "L'adresse des trois premiers élts: " << &v[i] << std::endl;
		}

		std::cout << "La taille d'un élément : " << sizeof(v[0]) << std::endl;
		std::cout << "Le dernier élément : " << v.back() << std::endl;

		TP_CPP_IMAC2::mean(v);
		TP_CPP_IMAC2::meanCopy(v);
		// Plus rapide quand c'est jute une copie. Normal car il n'y a pas de changement sur le vecteur en copie.
		// Effacer le dernier élément : 
		// v.erase(v.back)

		// v.clear() // Pour vider le vecteur 










		return 0;
	}
}

// Fonction main classique, point d'entr�e du programme
int main(int argc, char *argv[])
{
	// Appel de la fonction main de l'espace de nom TP_CPP_IMAC2
	return TP_CPP_IMAC2::main(argc, argv);
}

