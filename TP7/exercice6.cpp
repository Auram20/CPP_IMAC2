
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 6
// ANIK Myriam
// ================================


#include <iostream> 
#include <map>
#include <iterator> 



int main ()
{
	std::map <const char *,int> eleves;
	eleves.insert(std::pair < const char *, int>("Myriam",21));
	eleves.insert(std::pair < const char *, int>("Audrey",22));
	eleves.insert(std::pair < const char *, int>("Nina",22));
	eleves.insert(std::pair < const char *, int>("Nathanael",20));


 	// AFFICHER MA MAP 
 	std::cout << "PRENOMS => AGES : \n";
	for (std::map<const char *,int>::iterator it=eleves.begin(); it!=eleves.end(); ++it)
	 	std::cout << it->first << " => " << it->second << '\n';

	// AFFICHER L'AGE DE QQUN 

	//Personne qu'on cherche : 
	 const char * personne="Marie";
		if ( eleves.find(personne) == eleves.end() ) 
		{ // not found
			std::cout << personne <<" n'est pas stockée dans la map." << std::endl;
		} 
	else 
		{ // found
	  	std::cout << "L'age de " << personne << " est :" << eleves.find(personne)->second << std::endl; // Second car on cherche l'age qui est associé à la clé (le prénom)
		}




		return 0; 
}




