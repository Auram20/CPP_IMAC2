#include <array>
#include <iostream>
		
int maxValue(int tab[], size_t taille)
{
	int max=tab[0];
	if (size<0)
	{
		std::cerr << "attention ..."<< std::endl;
		return 0;
	}
	
	for (size_t i=0; i<taille; i++)
	{
		if (tab[i]>max)
		{
			max=tab[i];
		}
	}
	return max;
}

int main(int argc, char **argv)
{
	
	size_t taille;
	std::cout << "Entrez la taille de votre tableau " << std::endl;
	std::cin >> taille;
	int *tableau = new int[taille];

   // Utilisateur définit la taille et les valeurs du tableau 
	std::cout << "Entrez vos " << taille <<" éléments : " << std::endl;

	
	for(size_t i=0; i<taille; ++i)
	{
		std::cout << "Entrez la valeur :  " << std::endl;
		std::cin >> tableau[i];
	}

    // Affichage de l'adresse des trois premiers éléments et taille :
	for (int i=0; i<3; i++)
	{
		std::cout << "L'adresse : " << &tableau[i] << std::endl;
	}

    std::cout << "La taille : " << sizeof(tableau[0]) << std::endl;

    // Afficher premier élément sans [] 
	std::cout << "Le premier élément : " << *tableau << std::endl;
	std::cout << "Le cinquième élément s'il y en a: " << *(tableau+4) << std::endl;

	// Fonction MAX

	std::cout << "Le max est : " << maxValue(tableau,taille) << std::endl;

	delete[] tableau;

	return 0;
}
