#ifndef VECTORD_HPP__
#define VECTORD_HPP__

#include <cstdio>
#include <iostream>

class VectorD {
    public:
        //Constructor
        VectorD(const size_t &size = 0);
        VectorD(const VectorD &v);
        //Destructor
        ~VectorD();

        VectorD operator+(const VectorD &v2)const;
        VectorD &operator=(const VectorD &v)const;
        inline size_t size() const {return m_size;};
        void normalize();
        double *m_data;

    private:
        size_t m_size;
        //double *m_data;
};

#endif