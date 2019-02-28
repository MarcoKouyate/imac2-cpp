#include "VectorD.hpp"
#include <cstdio>
#include <iostream>

int main (){
	VectorD vec(3);
	vec.m_data[0]= 12;

	std::cout << "Ceci est un test" << std::endl;
	std::cout << vec.size() << std::endl;
	return 0;
}