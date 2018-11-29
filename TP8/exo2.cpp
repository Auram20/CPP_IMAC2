
// ================================
// POO C++ - IMAC 2
// TP 8 - Exercice 2 
// ANIK Myriam
// ================================

#include <iostream>
#include "exo2.hpp"



int main()
{

	Point3D <int>Point1;
	Point3D <float>Point2(5.5,6.3,7.4);
	std::cout << "Point 1 \n" << Point1 <<std::endl;
	std::cout << "Point 2 \n" << Point2 <<std::endl;

	int monscalaire=3;
	Point3D <float> Point3=Point2+monscalaire;
	std::cout << "Point 3 ( Point2 + 3)  \n" << Point3 << std::endl;

	Point3D <float>Point4=Point3+Point2;
	std::cout << "Point 4 ( Point 3 + Point 2 ) \n" << Point4 << std::endl;

	return 0;

};