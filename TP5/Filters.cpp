// ================================
// POO C++ - IMAC 2
// TP 5 
// ANIK Myriam
// ================================

#include "Filters.hpp"
#include "Filter.hpp"
#include <iostream>


Filters::Filters(const int n) {
	_size = n;
	_nbFilters = 0;
	_filters = new Filter*[n];
}

// Destructeur
Filters::~Filters() {
	delete[] _filters;
}


// Méthodes filtres

void Filters::addFilter(Filter &filter) {
	_filters[_nbFilters] = &filter;
	_nbFilters++;
}

void Filters::applyFilters(ImageRGBu8 &image) {
	for (unsigned int i = 0; i < _nbFilters; ++i)
	{	
		_filters[i]->applyFilter(image);
	}
}