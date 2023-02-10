#include <iostream>

class cGusano
{
public:
	char caracterGus;
	int x_gus, y_gus;


	cGusano()
	{
		caracterGus = '@';
		x_gus = 0;
		y_gus = 0;
	}

	void iniciar_posicion_gusano(int in_x, int in_y)
	{
		x_gus = in_x;
		y_gus = in_y;
	}


};
