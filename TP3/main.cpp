
#include "ImageRGBU8.hpp"
#include <cstdio>
#include <iostream>
#include <vector>




int main (){

	ImageRGBU8 image1 = ImageRGBU8(200,200);

	std::cout << image1.width() << std::endl;
	return 0;
}