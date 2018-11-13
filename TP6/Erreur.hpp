
// ================================
// POO C++ - IMAC 2
// TP 5 - Exercice 3 
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
		Erreur(int level, int code,const char *string); // Constructeur par liste 
		int getNiveau(); // On récupere le niveau d'erreur
		int getCode();	 // On récupere le code d'erreur 
		virtual const char * what(); // On récupere la description de l'erreur - Méthode existante dans la classe mère exception. 
		virtual ~Erreur();


	private: 
		int errLevel;
		int errCode;
		const char * errString;

};




#endif 