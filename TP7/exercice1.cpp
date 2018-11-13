
// ================================
// POO C++ - IMAC 2
// TP 6 - Exercice 1 
// ANIK Myriam
// ================================


#include <iostream> 
#include <vector>




int main ()
{
	
	// Déclarer un vec vide d'entiers 
	std::vector<int> v; 
	// Afficher si le vec est vide
	std::cout << "0 si plein, 1 si vecteur vide : " << v.empty() << std::endl;
	// Afficher la taille du vec 
	std::cout << "Taille du vecteur : " << v.size() << std::endl;
	// Afficher la taille max du vec 
	std::cout <<"Taille maximale d'un vec d'int : " << v.max_size() << std::endl;
	// Ajouter des éléments dans le vec
	std::cout <<"On ajoute des éléments dans notre vecteur" << std::endl;
	v.push_back(0);
	v.push_back(5);
	v.push_back(10);
	// Afficher la nouvelle taille 
	std::cout << "Taille du vecteur : " << v.size() << std::endl;
	// Afficher le contenu du vecteur 
	std::cout << "Notre vecteur :" << std::endl;
	for (size_t i=0; i<v.size() ;i++)
		{
			std::cout << v[i] << " "; 
		} 
		std::cout << std::endl;





	return 0; 
}