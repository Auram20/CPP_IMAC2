
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 4 
// ANIK Myriam
// ================================


#include <iostream> 
#include <deque>


void afficheDec(std::deque<int> d)
{
	// Affichage du contenu du vecteur 
	std::cout << "Notre vecteur :" << std::endl;
	for (size_t i=0; i<d.size() ;i++)
		{
			std::cout << d[i] << " "; 
		} 
		std::cout << std::endl;
}


int main ()
{
	// On initialise une decque à 5 nombres randoms 
	std::deque<int> d; 
	srand(time(NULL));
	for (size_t i=0; i<5 ;i++)
		{
			d.push_back((rand()%21));
		} 
	afficheDec(d);
	
	// On fait rentrer par la gauche, et on supprime le dernier élt à chaque fois
	for (size_t i=0; i<5 ;i++)
		{
			d.push_front((rand()%21));
			d.pop_back();
		} 
	afficheDec(d);
	return 0; 
}