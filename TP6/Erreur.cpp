
// ================================
// POO C++ - IMAC 2
// TP 6 
// ANIK Myriam
// ================================


#include <iostream>
#include "Erreur.hpp"



// Constructeur par liste d'initialisation
Erreur::Erreur(int level, int code, const char * string, int line, const char *file) : errLevel(level), errCode(code), errString(string), errLine(line), errFile(file)
{};

// Constructeur par défaut
Erreur::Erreur() : errLevel(0), errCode(0), errString(""), errLine(0), errFile("")
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


//Erreur::~Erreur()
//{};