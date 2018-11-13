
// ================================
// POO C++ - IMAC 2
// TP 6 - Exercice 3 
// ANIK Myriam
// ================================


#include <iostream> 
#include <vector>
#include <cstdlib>



int main ()
{
	
	// Déclare un vec de 20 entiers randoms
	std::vector<int> v(20, (std::rand()%20)); 

	// Afficher le contenu du vecteur 
	std::cout << "Notre vecteur :" << std::endl;
	for (size_t i=0; i<v.size() ;i++)
		{
			std::cout << v[i] << " "; 
		} 
		std::cout << std::endl;





	return 0; 
}