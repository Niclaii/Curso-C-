#pragma once
#include <iostream>

class cGusano
{
public:
	char caracterGus;
	int x_gus, y_gus,x_cuerpo,y_cuerpo;


	cGusano()
	{
		caracterGus = '@';
		x_gus = 0;
		y_gus = 0;
		x_cuerpo = 0;
		y_cuerpo = 0;
	}

	void iniciar_posicion_gusano(int in_x, int in_y)
	{
		x_gus = in_x;
		y_gus = in_y;
	}
	//
	int get_xGus() 
	{
		return x_gus;
	}
	void set_xGus(int x)
	{
		x_gus = x;
	}
	//
	int get_yGus()
	{
		return y_gus;
	}
	void set_yGus(int y)
	{
		y_gus = y;
	}
	//
	int get_charGus()
	{
		return caracterGus;
	}
	//
	int get_XCuerpo()
	{
		return x_cuerpo;
	}
	void set_XCuerpo(int x)
	{
		x_cuerpo = x;
	}

	int get_YCuerpo()
	{
		return y_cuerpo;
	}
	void set_YCuerpo(int y)
	{
		y_cuerpo = y;
	}


	void mover_pos(int x, int y)
	{
		x_gus = x;
		y_gus = y;
	}

	void mover_cuerpo(int x, int y)
	{
		x_cuerpo = x;
		y_cuerpo = y;
	}

};