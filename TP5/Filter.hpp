// ================================
// POO C++ - IMAC 2
// TP 5 
// ANIK Myriam
// ================================

#ifndef __FILTER__HPP
#define __FILTER__HPP

#include "ImageRGBU8.hpp"

class Filter
{
	public:
		Filter();
		virtual ~Filter();
		virtual void applyFilter(ImageRGBu8 &ImageRGBU8) = 0;
};

#endif