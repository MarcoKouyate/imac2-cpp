#pragma once

template<typename Type>

class Point3D {
	private: 
		Type m_x;
		Type m_y;
		Type m_z;

	public:
		Point3D() : m_x(0), m_y(0), m_z(0){}

		Point3D(const Type &x, const Type &y, const Type &z) 
			: m_x(x), m_y(y), m_z(z)
		{}

		Point3D(const Point3D &point) 
			: m_x(point.getX()), m_y(point.getY()), m_z(point.getZ())
		{}

		Point3D operator+(const Point3D &add){
			return pointSum(m_x+add.getX(), m_y+add.getY(), m_z+add.getZ());
		}

		Type getX() const {
			return m_x;
		}

		Type getY() const {
			return m_y;
		}

		Type getZ() const {
			return m_z;
		}

		Type getInfos() const {
			std::cout << "["<< m_x <<","<<m_y<<","<<m_z<<"]"<<std::endl;  
		}

		void setX(const Type &x){
			m_x = x;
		}

		void setY(const Type &y){
			m_y = y;
		}

		void setZ(const Type &z){
			m_z = z;
		}




};
