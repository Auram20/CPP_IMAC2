
// ================================
// POO C++ - IMAC 2
// TP 5 - Exercice 3 
// ANIK Myriam
// ================================


#include <iostream>
#include "Erreur.hpp"



// Constructeur par liste d'initialisation
Erreur::Erreur(int level, int code, const char * string) : errLevel(level), errCode(code), errString(string)
{};

// Constructeur par défaut
Erreur::Erreur() : errLevel(0), errCode(0), errString("")
{};




int Erreur::getNiveau()
{
	return errLevel;
};

int Erreur::getCode()
{
	return errCode;
};

const char * Erreur::what()
{
	return errString;
};


Erreur::~Erreur()
{};