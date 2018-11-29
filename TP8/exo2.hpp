
// ================================
// POO C++ - IMAC 2
// TP 8 - Exercice 2 
// ANIK Myriam
// ================================

#ifndef EXO2_HPP__
#define EXO2_HPP__



template <typename T>

class Point3D{
 
 public: 
// Méthodes 
 	// Constructeur par défaut 
	Point3D():m_x(0),m_y(0),m_z(0){}; 
	// Constructeur liste d'initialisation
	Point3D(const T &x, const T &y, const T &z): m_x(x), m_y(y),m_z(z){}; // Constructeur liste d'init
	// Constructeur par copie 
	Point3D(const Point3D &p):m_x(p.m_x),m_y(p.m_y),m_z(p.m_z){};
	// Constructeur à parir d'un Point3d d'un autre type
	template<typename U>
	Point3D(const Point3D <U>&p):m_x(p.m_x),m_y(p.m_y),m_z(p.m_z){};



	// Opérateur affectation 
	Point3D & operator=(const Point3D &p) 
		{
		 m_x = p.m_x; 
		 m_y = p.m_y;
		 m_z = p.m_z;
		 return *this;
		}

	// Opérateur + avec un scalaire
	Point3D & operator+(const T scalaire) 
		{
		 m_x = m_x+scalaire; 
		 m_y = m_y+scalaire;
		 m_z = m_z+scalaire;
		 return *this;
		}

	Point3D & operator+(const Point3D &p) 
		{
		 m_x = m_x+p.m_x; 
		 m_y = m_y+p.m_y;
		 m_z = m_z+p.m_z;
		 return *this;
		}	

	friend std::ostream & operator<<(std::ostream &os, const Point3D &p) 
		{
		 os << "X : " << p.m_x << "\n" ; 
		 os << "Y : " << p.m_y << "\n"; 
		 os << "Z : " << p.m_z << "\n"; 
		 return os;
		}	





// Attributs
	private:
	   T m_x;
	   T m_y;
	   T m_z;
};




#endif