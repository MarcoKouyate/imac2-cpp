#include "VectorD.hpp"
#include <cstdio>

VectorD::VectorD(const size_t size) :
	m_size(size)
{
	m_data = new double[size];
};

VectorD::~VectorD(){
	delete[] m_data;
};

void VectorD::normalize(){
	double norm = 0.0;
	for (size_t i=0; i < m_size;i++){
		norm+=m_data[i]*m_data[i];
	}
	if (fabs(norm)< 1.0e-10){
		return;
	}
};

VectorD VectorD::operator+(const VectorD &v2)const {
	if (m_size != v2.m_size){
		std::cerr << "ERROR : Vectord :: operator + : L'addition entre deux vecteurs de taille différente est impossible" << std::endl;
		return *this;
	}

	VectorD v3(m_size);
	for (size_t i=0; i < m_size;i++) {
		v3.m_data[i]=m_data[i]+v2.m_data[i];
	}

	return v3;
};

