// ================================
// POO C++ - IMAC 2
// TP 5 
// ANIK Myriam
// ================================

#ifndef __REMOVE_CHANNEL__HPP
#define __REMOVE_CHANNEL__HPP

#include "Filter.hpp"

class RemoveChannel : public Filter
{
	private:
		unsigned int _channel; // 0: R, 1: G, 2: B

	public:
		RemoveChannel(); // Const
		RemoveChannel(const unsigned int c); // Const 
		~RemoveChannel();
		void applyFilter(ImageRGBu8 &ImageRGBU8);
};

#endif