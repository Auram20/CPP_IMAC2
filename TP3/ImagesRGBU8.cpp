// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#include "ImagesRGBU8.hpp"
#include <vector> 

 


// Créer une image
// Constructeur 
ImagesRGBU8::ImagesRGBU8(const unsigned int width, const unsigned int height):m_width(width), m_height(height), m_data(width*height*3) // Pour les types primitifs pas besoin de construire, en écrivait m_wifth(width) le compilo comprend automatiquement
{
	std::fill(m_data.begin(),m_data.end(),255); // On remplit le tableau de blanc pour avoir une image blanche par défaut
};


// Constructeur par défaut
ImagesRGBU8::ImagesRGBU8():m_width(0), m_height(0), m_data()
{
};



// Détruire une image
ImagesRGBU8::~ImagesRGBU8()
{
}





