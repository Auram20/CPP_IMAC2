#include <iostream>
#include <cstdlib>
#include <string>

#include "ImageRGBu8.hpp"
#include "ioPPM.hpp"
#include "Filter.hpp"
#include "Filters.hpp"
#include "Threshold.hpp"

int main(int argc, char **argv) {

	// load arguments
	if(argc != 2){
		std::cerr << "usage: " << argv[0] << "image.ppm" << std::endl;
		return EXIT_FAILURE;
	}

		//load image
		ImageRGBu8 image1;
		readPPM(argv[1], image1);
		// apply filters
		Filters filters(2);
		Threshold t1(150);
		Threshold t2(100);
		filters.addFilter(t1);
		filters.addFilter(t2);
		filters.applyFilters(image1);
		// save image
		writePPM("test_ex3.ppm", image1);

	return(EXIT_SUCCESS);
}
