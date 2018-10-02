// ================================
// POO C++ - IMAC 2
// TP 1 - Exercice 2 - ANIK Myriam
// ================================
#include <iostream>
		


int main(int argc, char **argv){
	int i;
	std::cout << "Entrez un nombre" << std::endl;
	std::cin >> i;

	if (i==79)
	{
		std::cout << "Parfait" << std::endl;
	}
	if (i<=0)
	{
		std::cout << "Négatif" << std::endl;	
	}
	else
	{
		std::cerr << "Strictement positif" << std::endl;
	}

	return 0;
}
