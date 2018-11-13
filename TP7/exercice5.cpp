
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 5
// ANIK Myriam
// ================================


#include <iostream> 
#include <list>


void afficherList(std::list<std::string> liste)
{
	for( std::list<std::string>::iterator it=liste.begin() ; it!=liste.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}




int main ()
{
	// On initialise une decque à 5 nombres randoms 
	std::list<std::string> l_philo, l_math; 
	
	l_philo.push_front("Kant");
	l_philo.push_front("Descartes");
	l_philo.push_front("Aristote");	
	l_philo.push_front("Platon");

	l_math.push_front("Descartes");
	l_math.push_front("Poincaré");
	l_math.push_front("Laplace");	
	l_math.push_front("Gauss");

	// On trie les deux listes et on les affiche 
	l_philo.sort();
	l_math.sort();

	std::cout << " \nPhilo Trié : " << std::endl; 
	afficherList(l_philo);

	std::cout << " \nMaths Trié : " << std::endl; 
	afficherList(l_math);

	// On merge les deux listes triées :  

	std::list<std::string> l_all;
	l_philo.merge(l_math); 
	l_all=l_philo;

	std::cout << " \nPhilo + Maths Trié : " << std::endl; 
	afficherList(l_philo);

	// On supprime les doublons et on inverse la liste
	l_all.unique();
	l_all.reverse();
	std::cout << " \nPhilo + Maths sans doublon et ordre PAS alphabétique : " << std::endl; 
	afficherList(l_all);

	return 0; 
}




