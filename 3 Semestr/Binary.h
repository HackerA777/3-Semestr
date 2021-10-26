#pragma once
#include <iostream>
using namespace std;
class Binary_Images {
private:
	bool** image;
	int x, y;
public:
	Binary_Images();
	Binary_Images(const int x, const int y); //width, height
	Binary_Images(const Binary_Images& copy);
	bool& operator()(const int coor_x, const int coor_y, const bool b); //write
	const bool& operator()(const int coor_x, const int coor_y) const; //read
	Binary_Images operator *(const Binary_Images &a_image);
	Binary_Images operator +(const Binary_Images &a_image);
	Binary_Images operator *(const bool b);
	Binary_Images operator +(const bool b);
	Binary_Images operator !();
	friend ostream& operator <<(ostream& os, const Binary_Images& img);
	double Ratio();
	int Get_x();
	int Get_y();
	~Binary_Images();
};