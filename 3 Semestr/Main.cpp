#include <stdio.h>
#include "Binary.h"

void get() {
	int a = getchar();
}

void Set_size(int *x, int* y) {
	printf("Input x: ");
	scanf_s("%d", &*x);
	printf("Input y: ");
	scanf_s("%d", &*y);
}

bool** Create_image(int x, int y){
	int temp;
	bool** image = new bool* [x];
	for (int i = 0; i < x; ++i) {
		image[i] = new bool[y];
		for (int j = 0; j < y; ++j) {
			printf("Input pixel: ");
			scanf_s("%d", &temp);
			if (temp == 1) {
				image[i][j] = true;
			}
			else
			{
				image[i][j] = false;
			}
		}
	}
	return(image);
}

int main() 
{
	int x=0, y=0;
	bool b;
	Set_size(&x, &y);
	Binary_Images BI(Create_image(x, y), x, y);
	BI.Print_img();
	BI.Invert_img(); 
	puts("Inver image");
	BI.Print_img();
	BI.Sum_img(x, y, Create_image(x, y));
	puts("Sum with new image");
	BI.Print_img();
	BI.Mul_img(Create_image(x, y));
	puts("Multipliction image");
	BI.Print_img();
	printf("Input b: ");
	scanf_s("%d", &b);
	BI.Summ_img(b);
	puts("Sum with b");
	BI.Print_img();
	printf("Input b: ");
	scanf_s("%d", &b);
	BI.Mult_img(b);
	puts("Mult with b");
	BI.Print_img();
	printf("Ratio of image: %.2lf\n", BI.Ratio());
	puts("Succassful");
}



















/*int x, y;
	printf("Input size: ");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	get();
	bool** image = new bool* [x];
	int ** img = new int*[x];
	Binary_Images(x, y);
	for (int i = 0; i < x; ++i) {
		img[i] = new int[y];
		image[i] = new bool[y];
	}
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j) {
			printf("Input element: ");
			scanf_s("%d", &img[i][j]);
			if (img[i][j] == 1) {
				
			}
			else
			{
				image[i][j] = false;
			}
		}
	}
	for (int i = 0; i < x; ++i) {
		for(int j = 0; j < y; ++j) {
			if (image[i][j])
				printf("\t1");
			else
			{
				printf("\t.");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < x; ++i) {
		delete img[i];
		delete image[i];
	}*/