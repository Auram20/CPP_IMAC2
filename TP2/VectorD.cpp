// ================================
// POO C++ - IMAC 2
// TP 2 - Exercice 1
// ================================

#include "VectorD.hpp"
#include <cmath>
#include <fstream>
 


// Créer un vecteur
VectorD::VectorD(const size_t &size):m_size(size)
{
	m_data= new double[size];
}; 	


VectorD::VectorD(const VectorD &v):m_size(v.m_size)
{
	m_data=new double[v.m_size];
	std::copy(v.m_data,v.m_data+v.m_size,m_data);
};






// Détruire un vecteur
VectorD::~VectorD()
{
	delete[] m_data;
}; 







// Normaliser un vecteur
void VectorD::normalize()
{
	double norme = 0.0;

	for(size_t i=0; i<m_size; i++)
		norme += m_data[i] * m_data[i];

	if(fabs(norme)<10e-10)
		return;

	norme = sqrt(norme);

	for(size_t j=0; j<m_size; j++)
		m_data[j] /= norme;
};





// Addition de deux vecteurs

VectorD VectorD::operator+(const VectorD &v2)const
{
	if (m_size!=v2.m_size)
	{
		std::cerr <<"error : VectorD::operator+ : Les deux opérandes ont pas la meme taille"<<std::endl;
		return *this;
	}

	VectorD v3(m_size);
	for(size_t i=0; i<m_size; i++)
	{
		v3.m_data[i]=m_data[i]+v2.m_data[i];
	}	
	// POUR REMPLACER LE FOR Y'A MOY D'UTILISER LA STD
	// #include <algorithm>
	//std::transform(_data, _data * _size, v2._data, result._data, std::plus<double>());
	return v3;
}






// On surcharge l'opérateur = pour qu'il comprenne


VectorD &VectorD::operator=(const VectorD &v)
{
	if (&v==this) return *this;
	if (v.m_size != m_size) {
		std::cerr <<"error : VectorD::operator= : Les deux opérandes ne sont de la meme taille" << std::endl;
		return *this;
	}
	std::copy(v.m_data,m_data+v.m_size,m_data);
	return *this;
}



// Enregistrer un vecteur dans un fichier
int VectorD::saveFile()
{
	 	std::ofstream fichier("test.txt", std::ios::out );  //déclaration du flux et ouverture du fichier
        
        if(fichier)  // si l'ouverture a réussi
        {
            // instructions
	            for(size_t i=0; i<m_size; i++)
					{
						fichier << m_data[i] << " ";
					}	

				fichier << std::endl;

                fichier.close();  // on referme le fichier
        }
        else  // sinon
                std::cerr << "Erreur à l'ouverture !" << std::endl;
 
        return 0;
}


// A TESTER - PAS FINIR
int VectorD::VecFromFile()
{
	std::ifstream fichier("test.txt", std::ios::in);  // on ouvre en lecture


    if(fichier)  // si l'ouverture a fonctionné
    {

		for(size_t i=0; i<m_size; i++)
			{
				fichier >> m_data[i];
			}	


	        fichier.close();
    }
    else
            std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;

    return 0;
}