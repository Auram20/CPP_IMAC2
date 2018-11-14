
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 7
// ANIK Myriam
// ================================


#include <iostream> 
#include <map>
#include <string> 
#include <locale>
#include <list>




    
class AjoutSiPair{

	public:
	    int operator()(int a)   //La surcharge de l'opérateur ()
	    {
	        if(a%2 == 0)
	            return a+10;
	        else
	            return a;
	    }
};


int main()
{

	AjoutSiPair foncteur;

	std::list<int> l_numbers; 
	
	l_numbers.push_front(1);
	l_numbers.push_front(10);
	l_numbers.push_front(12);	
	l_numbers.push_front(3);


// On applique le foncteur
	 for( std::list<int>::iterator it=l_numbers.begin() ; it!=l_numbers.end(); it++)
	 {	
	 	*it=foncteur(*it);
	 }


// On affiche notre nouvelle liste : 
 	for( std::list<int>::iterator it=l_numbers.begin() ; it!=l_numbers.end(); it++)
	 {	
		std::cout << *it << std::endl;
	 }
	return 0;
}