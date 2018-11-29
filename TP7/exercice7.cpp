
// ================================
// POO C++ - IMAC 2
// TP 7 - Exercice 7
// ANIK Myriam
// ================================


#include <iostream> 
#include <map>
#include <string> 
#include <locale>
#include <functional>

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
    	// const char * texte;
		//const char * montexte="marrant";
		//std::string c(montexte);
		// std::cout << texte1(c) << std::endl;


        

        std::string montexte="marrant";
        std::string nouveautexte;

        // Fonction Lambda 
        std::function <char (const char ) > lambda; 
        lambda = [] (char lettre) 
        { 
            return std::toupper(lettre);
        };
        

        // Application Fonction Lambda
        for (std::string::size_type i=0; i<montexte.length(); ++i)
                 {
                    nouveautexte+=lambda(montexte[i]);
                 }

        std::cout << nouveautexte << std::endl;
        

		return 0; 
}
