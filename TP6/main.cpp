
// ================================
// POO C++ - IMAC 2
// TP 6 
// ANIK Myriam
// ================================

#include <iostream>
#include <string>
#include "Erreur.hpp"



 // --------------------  CATCH AVEC INT   --------------------------
 
/*int main(int argc, char const *argv[])
{

	int a=10;
	int b=0;

	std::cout <<"a/2 = " <<  a/2 << std::endl;
	
	try 
		{
			if (b==0)
				throw 444; // On balance une erreur int 444 si le dénominateur est nul
			else
				std::cout <<"a/b = " <<  a/b << std::endl;
			// 	Exception en point flottant - La division par 0 ne passe pas à l'exécution
		}

	catch(int &error)
	{
		std::cerr << "ERROR : Division par 0" << std::endl;
	}

	std::cout <<"a/5 = " <<  a/5 << std::endl;
	std::cout <<"Términé ! " << std::endl;

	return 0;
}
 
*/ 

 // --------------------  ACATCH VEC STRING  --------------------------
/*
int main(int argc, char const *argv[])
{

	int a=10;
	int b=0;

	std::cout <<"a/2 = " <<  a/2 << std::endl;
	
	try 
		{
			if (b==0)
				throw "divisionNul";  // On lance une exception char
			else
				std::cout <<"a/b = " <<  a/b << std::endl;
			// 	Exception en point flottant - La division par 0 ne passe pas à l'exécution
		}

	catch(char const* &error) 	// On catch un char
	{
		std::cerr << "ERROR : Division par 0" << std::endl;
	}

	std::cout <<"a/5 = " <<  a/5 << std::endl;
	std::cout <<"Términé ! " << std::endl;

	return 0;
}*/


// -------------------- QUELQUE SOIT LE THROW   --------------------------
	/*
int main(int argc, char const *argv[])
{

	int a=10;
	int b=0;

	std::cout <<"a/2 = " <<  a/2 << std::endl;
	
	try 
		{
			if (b==0)
				throw "divisionNul"; // On lance une exception char
			else
				std::cout <<"a/b = " <<  a/b << std::endl;
			// 	Exception en point flottant - La division par 0 ne passe pas à l'exécution
		}

	catch(...)	// On catch quelque soit ce qu'on throw 
		std::cerr << "ERROR : Division par 0" << std::endl;
	}

	std::cout <<"a/5 = " <<  a/5 << std::endl;
	std::cout <<"Términé ! " << std::endl;

	return 0;
}*/




// -------------------- CLASSE ERROR  + Version Updated de l'erreur --------------------------

int main(int argc, char const *argv[])
{

	int a=10;
	int b=0;

	std::cout <<"a/2 = " <<  a/2 << std::endl;
	
	try 
		{
			if (b==0)
				throw Erreur(1,444,"divisionNul",__LINE__,(const char*)__FILE__);
			else
				std::cout <<"a/b = " <<  a/b << std::endl;
			// 	Exception en point flottant - La division par 0 ne passe pas à l'exécution
		}

	catch(Erreur &e)
	{	

		std::cerr << "Level : " << e.getNiveau() << std::endl;
		std::cerr << "Code : " << e.getCode() << std::endl;
		std::cerr << "Description : " <<e.what() << std::endl;
		std::cerr << "Ligne : " << e.getLine() << std::endl;
		std::cerr << "Fichier : " << e.getFile() << std::endl;		
	}

	std::cout <<"a/5 = " <<  a/5 << std::endl;
	std::cout <<"Términé ! " << std::endl;

	return 0;
}


// Le bloc try ne compile pas sans le bloc catch. 
