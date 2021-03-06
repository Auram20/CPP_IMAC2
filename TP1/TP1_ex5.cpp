// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 5
// ================================

#include<iostream>
#include <vector>

namespace TP_CPP_IMAC2
{
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

