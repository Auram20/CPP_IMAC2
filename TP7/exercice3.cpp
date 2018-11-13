
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 3 
// ANIK Myriam
// ================================


#include <iostream> 
#include <vector>

void afficheVec(std::vector<int> v)
{
	// Affichage du contenu du vecteur 
	std::cout << "Notre vecteur :" << std::endl;
	for (size_t i=0; i<v.size() ;i++)
		{
			std::cout << v[i] << " "; 
		} 
		std::cout << std::endl;
}

int main ()
{
	
	// Déclaration d'un vec de 20 entiers randoms
	std::vector<int> v; 
	srand(time(NULL));
	for (size_t i=0; i<20 ;i++)
		{
			v.push_back((rand()%21));
		} 

	// On affiche
		afficheVec(v);

	// Tri du vecteur 
		std::sort(v.begin(), v.end());
		afficheVec(v);

	// Nombre d'occurences du chiffre 7 
		int compteur = std::count (v.begin(), v.end(), 7);
  		std::cout << "7 apparait " << compteur << " fois.\n";

	return 0; 
}