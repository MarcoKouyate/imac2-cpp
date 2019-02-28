#ifndef ImageRGBU8_HPP__
#define ImageRGBU8_HPP__


#include <cstdio>
#include <iostream>
#include <vector>


class ImageRGBU8 {
	private:

		const unsigned int _width;
		const unsigned int _height;
		std::vector<unsigned char> _data;

	public:
		ImageRGBU8(const unsigned int width, const unsigned int height);
		ImageRGBU8();
		~ImageRGBU8();
		
		inline unsigned width() const {
			return _width;
		};

		inline unsigned height() const {
			return _height;
		};

		inline const unsigned char & operator()(const unsigned int x, const unsigned int y, const unsigned int c) const { 
			return _data [(y*_width+x)*3+c];
		};

		inline unsigned char & operator()(const unsigned int x, const unsigned int y, const unsigned int c)
		{ 
			return _data [(y*_width+x)*3+c];
		};

};

#endif
