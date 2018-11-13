
// ================================
// POO C++ - IMAC 2
// TP 6 - Exercice 2
// ANIK Myriam
// ================================


#include <iostream> 
#include <vector>
#include <string>

void afficherVecString( std::vector<std::string> v)
{
	for (size_t i=0; i<v.size() ;i++)
		{
			std::cout << v[i] << " "; 
		} 
		std::cout << std::endl;
}


int main ()
{


	// Swap entre deux vecteurs de strings
	std::vector<std::string> v1, v2;
	v1.push_back("Test");
	v2.push_back("Swap");
	afficherVecString(v1);
	afficherVecString(v2);
	std::cout << "On effectue le swap. \nOn obtient : " << std::endl;

	v1.swap(v2);

	afficherVecString(v1);
	afficherVecString(v2);


	return 0; 
}