#pragma once
#include <iostream>


class Manzana
{
private:
	char caracter_manzana;
	int x_Apple, y_Apple;

public:
	Manzana()
	{
		caracter_manzana = '&';
		x_Apple = 0;
		y_Apple = 0;
	}

	int getXApple()
	{
		return x_Apple;
	}

	void setXApple(int xapple)
	{
		x_Apple = xapple;
	}

	int get_yman()
	{
		return y_Apple;
	}

	void set_yman(int yapple)
	{
		y_Apple = yapple;
	}

	char get_charApple()
	{
		return caracter_manzana;
	}

	void posicion(int inxm, int inym)
	{
		x_Apple = inxm;
		y_Apple = inym;
	}
};
