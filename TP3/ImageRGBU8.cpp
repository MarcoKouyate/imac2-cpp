
#include "ImageRGBU8.hpp"
#include <cstdio>
#include <iostream>
#include <vector>



ImageRGBU8::ImageRGBU8(const unsigned int width, const unsigned int height) :
_width(width),_height(height), _data(width*height*3)
{
	std::fill(_data.begin(), _data.end(), 255);
}

ImageRGBU8::ImageRGBU8():
_width(0),_height(0),_data()
{

}


ImageRGBU8::~ImageRGBU8(){
	//delete[] _data;
};
