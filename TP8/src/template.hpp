#pragma once

#include <cctype>

template<typename Type>

const Type &getMinimum(const Type &a, const Type &b){
	return toupper(a) < toupper(a) ? a : b;
}