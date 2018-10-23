// ================================
// POO C++ - IMAC 2
// TP 4 - Exercice 1
// ================================

#ifndef IMAGESRGBU8_HPP__
#define IMAGESRGBU8_HPP_HPP__

#include<iostream>
#include <vector> 


class ImagesRGBU8 
{

public: 

	// Méthodes
	// Constructeurs
ImagesRGBU8(const unsigned int width, const unsigned int height);
ImagesRGBU8();
~ImagesRGBU8(); 

	// GETTERS
inline unsigned int width() const{return m_width;};
inline unsigned int heigth() const{return m_height;};

	// GETTERS car CONST
inline const unsigned char &operator()(const unsigned int x, const unsigned int y, const unsigned int c) const {return m_data[(y*m_width+x)*3+c];};

	// SETTERS
inline  unsigned char &operator()(const unsigned int x, const unsigned int y, const unsigned int c)  {return m_data[(y*m_width+x)*3+c];};

	//Attributs 


private:
	unsigned int   m_width;
	unsigned int   m_height;
	std::vector<unsigned char> m_data; // Canaux RGB

};

#endif 

// Lire une image sous linux : convert monImage.jpg toto.ppm 
// feh *ppm