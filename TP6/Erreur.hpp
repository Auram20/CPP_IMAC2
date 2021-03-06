
// ================================
// POO C++ - IMAC 2
// TP 6
// ANIK Myriam
// ================================

#ifndef ERREUR_HPP__
#define ERREUR_HPP__


#include <iostream>
#include <exception> // On importe exception, définition sur le polycopié
#include <string>



class Erreur : std::exception {
		
	public: 
		Erreur(); // Constructeur par défaut 
		Erreur(int level, int code,const char *string, int line, const char *file); // Constructeur par liste 
		int getNiveau(); // On récupere le niveau d'erreur
		int getCode();	 // On récupere le code d'erreur 
		using exception::what;
		virtual const char * what() ; // On récupere la description de l'erreur - Méthode existante dans la classe mère exception. 
		inline const char* getFile() const { return errFile; }
		inline int getLine() const { return errLine; }
		//virtual ~Erreur();


	private: 
		int errLevel;
		int errCode;
		const char * errString;
		int errLine;
		const char * errFile;


};




#endif 