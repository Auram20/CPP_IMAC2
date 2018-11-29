// ================================
// POO C++ - IMAC 2
// TP 5 
// ANIK Myriam
// ================================

#include <iostream>
#include <cstdlib>
#include <string>
#include "ImageRGBU8.hpp"
#include "ioPPM.hpp"
#include "Filter.hpp"
#include "Filters.hpp"
#include "RemoveChannel.hpp"
#include "Threshold.hpp"

int main(int argc, char **argv) {

	if(argc != 2){
		std::cerr << "usage: " << argv[0] << "image.ppm" << std::endl;
		return EXIT_FAILURE;
	}

		//On charge l'image
		ImageRGBu8 image;
		readPPM(argv[1], image);
		
		// TESTS 
		Filters filters(1);
		Threshold t1(100);
		// Threshold t1(200);
		// Threshold t1(20);
		filters.addFilter(t1);
		filters.applyFilters(image);
	
		// Nouvelle image
		writePPM("test.ppm", image);

	return(EXIT_SUCCESS);
}
