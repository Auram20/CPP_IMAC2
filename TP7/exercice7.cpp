
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 7
// ANIK Myriam
// ================================


#include <iostream> 
#include <map>
#include <string> 
#include <locale>

class Majuscule
{
	
	public:
        std::string operator()(std::string a)   //La surcharge de l'opérateur ()
    	{	
    		std::locale loc;
    		std::string newstring;
    		 for (std::string::size_type i=0; i<a.length(); ++i)
   				 {
    			 newstring+=std::toupper(a[i],loc);
    			 }
    		return newstring;	 
    	}
};


int main ()
{
		Majuscule texte;
		const char * montexte="marrant";
		std::string c(montexte);
		std::cout << texte(c) << std::endl;

		return 0; 
}

