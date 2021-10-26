#include <iostream>
#include "Binary.h"
using namespace std;

void Set_size(int *x, int* y) {
	do {
		std::cout << "Input width: ";
		std::cin >> *x;
	} while (*x <= 0);
	do {
		std::cout << "Input height: ";
		std::cin >> *y;
	} while (*y <= 0);
}

Binary_Images Create_Image() {
	int x = 0, y = 0, value;
	bool b;
	Set_size(&x, &y);
	Binary_Images tmp(x, y);
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			do {
				cout << "Input pixel[" << i << "][" << j << "]: ";
				cin >> value;
			} while (value != 1 && value != 0);
			if (value == 1)
				b = true;
			else
				b = false;
			tmp.operator()(i, j, b);
		}
	}
	return tmp;
}

int main() 
{	
	bool b;
	cout << "Create first image\n";
	Binary_Images BI1(Create_Image());
	cout << "Create second image\n";
	Binary_Images BI2(Create_Image());
	cout << BI1 << "\n";
	cout << !BI1 << "\n";
	cout << BI1 << "\n";
	cout << BI1 + BI2 << "\n";
	cout << BI1 * BI2 << "\n";
	cout << "Input b: ";
	cin >> b;
	cout << BI1 + b << "\n";
	cout << BI2 * b << "\n";
	cout << BI1.Ratio() << "\n";
	cout << BI1.Get_x() << "\t" << BI1.Get_y() << "\n";
	cout << "Seccsesfull";
}