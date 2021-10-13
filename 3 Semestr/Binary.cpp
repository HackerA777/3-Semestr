#include "Binary.h"
#include <stdio.h>

Binary_Images::Binary_Images(bool** image, const int x, const int y) : image(image), x(x), y(y) {};

/*Binary_Images::Binary_Images(int coor_x, int coor_y) {
	x = coor_x;
	y = coor_y;
}*/

/*Binary_Images::Binary_Images(const Binary_Images& info_of_image) {
	x = info_of_image.x;
	y = info_of_image.y;
	image[x][y] = info_of_image.image;
}*/

void Binary_Images::Set_by_index(const int coor_x, const int coor_y, const bool **a_image) {
	x = coor_x;
	y = coor_y;
	image[x][y] = a_image[x][y];
}

bool Binary_Images::Get_by_index(const int coor_x, const int coor_y) {
	return (image[coor_x][coor_y]);
}

void Binary_Images::Mul_img(bool **a_image) {
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			image[i][j] = image[i][j] && a_image[i][j];
		}
	}
}

void Binary_Images::Sum_img(const int a_x, const int a_y, bool** a_image) const {
	if (a_x != x)
		throw("Idi v }|{opy");
	if(a_y != y)
		throw("Idi v }|{opy");
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			image[i][j] = image[i][j] || a_image[i][j];
		}
	}
}

void Binary_Images::Mult_img(const bool a_b) {
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			image[i][j] = image[i][j] && a_b;
		}
	}
}

void Binary_Images::Summ_img(const bool a_b) const {
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			image[i][j] = image[i][j] || a_b;
		}
	}
}

void Binary_Images::Invert_img() const{
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			image[i][j] = !image[i][j];
		}
	}
}

double Binary_Images::Ratio() {
	double temp = 0, d_x = x, d_y = y;
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			if (image[i][j])
				temp++;
		}
	}
	return(temp / (d_x * d_y));
}

void Binary_Images::Print_img() const{
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			if (image[i][j])
				printf("\t1");
			else
				printf("\t.");
		}
		printf("\n");
	}
}

void Binary_Images::Clear() {
	for (int i = 0; i < x; ++i) {
		delete image[i];
	}
}

Binary_Images::~Binary_Images() {
	
}