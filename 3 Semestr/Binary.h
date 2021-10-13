#pragma once
class Binary_Images {
private:
	bool** image{};
	int x, y;
public:
	Binary_Images(bool** image, const int x, const int y);
	//Binary_Images(int x, int y); //width, length
	//Binary_Images(const Binary_Images& info_of_image);
	void Set_by_index(const int coor_x, const int coor_y, const bool **image);
	bool Get_by_index(const int coor_x, const int coor_y);
	void Mul_img( bool **image);
	void Sum_img(const int x, const int y, bool **image) const;
	void Mult_img(const bool b);
	void Summ_img(const bool b) const;
	void Invert_img() const;
	double Ratio();
	void Print_img() const;
	void Clear();
	~Binary_Images();
};