
#include <iostream>
#include "template.hpp"
#include "Point3D.hpp"


int main (){
	Point3D<float> point1(2,50,9);
	Point3D<int> point2(2,3,4);
	Point3D<int> point3 = point2;

	std::cout << "int : " << getMinimum(79,93) << std::endl;
	std::cout << "float : " << getMinimum(7.9,9.3) << std::endl;
	std::cout << "char : " << getMinimum('a','z') << std::endl;

	std::cout << "float & int : " << getMinimum<float>(7.9f,67) << std::endl;

	std::cout << "a & Z : " << getMinimum('a','Z') << std::endl;

	std::cout << "point1: "; 
	point1.getInfos(); 
	std::cout << "point2 : ";
	point2.getInfos(); 
	std::cout << "point3 : ";
	point3.getInfos(); 

	//Point3D<int> point4 = point1 + point2;

	//std::cout << "point1 + point2 : " << point1 + point2 << std::endl;
	//point4.getInfos(); 

	return 0;
}