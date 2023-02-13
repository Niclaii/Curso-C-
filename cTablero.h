#pragma once
#include <iostream>
#include <random>
#include "cGusano.h"
#include "cManzana.h"

class cTablero
{
private:
	cGusano nGusano;
	char** ptrMatriz;
	int nFilas, nColumnas, XRand, YRand;
	bool perder, selec;
	char Controlador;
	Manzana Manzanita;
	int cantidad;


public:
	cTablero()
	{
		ptrMatriz = nullptr;
		nFilas = 0;
		nColumnas = 0;
		perder = false;
		selec = false;
		Controlador = ' ';
		XRand = 0;
		YRand = 0;
		cantidad = 1;
	}
	char Control{ ' ' };

	void construirTablero()
	{
		std::cout << "Ingrese un n filas: ";
		std::cin >> nFilas;
		std::cout << "\nIngrese un n Columnas: ";
		std::cin >> nColumnas;
		if (nFilas > 0 && nColumnas > 0)
		{
			ptrMatriz = new char* [nFilas];
			for (int f{ 0 }; f < nFilas; ++f)
			{
				ptrMatriz[f] = new char[nColumnas];
				for (int c{ 0 }; c < nColumnas; ++c)
				{
					ptrMatriz[f][c] = '*';
				}
			}
		}
	}

	void imprimirTablero()
	{
		for (int f{ 0 }; f < nFilas; ++f)
		{
			std::cout << "\n";
			for (int c{ 0 }; c < nColumnas; ++c)
			{
				std::cout << ptrMatriz[f][c] << " ";
			}
		}
		std::cout << "\n";
	}
	//GETERS Y SETERS
	int getFilas()
	{
		return nFilas;
	}

	void setFilas(int inFilas)
	{
		nFilas = inFilas;
	}
	int getColumnas()
	{
		return nColumnas;
	}

	void setColumnas(int inColumnas)
	{
		nColumnas = inColumnas;
	}
	int getPerder()
	{
		return perder;
	}

	void setPerder(int inPerder)
	{
		perder = inPerder;
	}
	int getXRand()
	{
		return XRand;
	}

	void setXRand(int rand)
	{
		XRand = rand;
	}
	int getYRand()
	{
		return YRand;
	}

	void setYRand(int rand)
	{
		YRand = rand;
	}


	void iniciar_pos_gusano(int nX, int nY)
	{
		nGusano.iniciar_posicion_gusano(nX, nY);
		ptrMatriz[nGusano.x_gus][nGusano.y_gus] = nGusano.caracterGus;
	}

	void manzana()
	{
		do
		{
			setXRand(rand() % getFilas());
			setYRand(rand() % getColumnas());
			Manzanita.posicion(getXRand(), getYRand());
			if (ptrMatriz[getXRand()][getYRand()] != '*')
			{
				selec = true;
			}
			else
			{
				selec = false;
				ptrMatriz[getXRand()][getYRand()] = Manzanita.get_charApple();
			}

		} while (selec == true);
	}
	void crecer()
	{

	}
	void mover_cuerpo()
	{

		if (Control == 'w' || Control == 'W')
		{
			if (cantidad > 1)
			{
				ptrMatriz[nGusano.get_XCuerpo()][nGusano.get_YCuerpo()] == ptrMatriz[nGusano.get_xGus() + 1][nGusano.get_yGus()];
				nGusano.mover_cuerpo(nGusano.get_XCuerpo(), nGusano.get_YCuerpo());
				ptrMatriz[nGusano.get_XCuerpo() + 1][nGusano.get_YCuerpo()] == nGusano.caracterGus;
				ptrMatriz[nGusano.get_xGus() + 2][nGusano.get_yGus()] = '*';
			}
		}
		if (Control == 'a' || Control == 'A')
		{
			if (cantidad > 1)
			{
				ptrMatriz[nGusano.get_XCuerpo()][nGusano.get_YCuerpo()] == ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus()-1];
				nGusano.mover_cuerpo(nGusano.get_XCuerpo(), nGusano.get_YCuerpo());
				ptrMatriz[nGusano.get_XCuerpo()][nGusano.get_YCuerpo()+1] == nGusano.caracterGus;
				ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus()+2] = '*';
			}
		}
		if (Control == 's' || Control == 'S')
		{
			if (cantidad > 1)
			{
				ptrMatriz[nGusano.get_XCuerpo()][nGusano.get_YCuerpo()] == ptrMatriz[nGusano.get_xGus()+1][nGusano.get_yGus()];
				nGusano.mover_cuerpo(nGusano.get_XCuerpo(), nGusano.get_YCuerpo());
				ptrMatriz[nGusano.get_XCuerpo()-1][nGusano.get_YCuerpo()] == nGusano.caracterGus;
				ptrMatriz[nGusano.get_xGus()-2][nGusano.get_yGus()] = '*';
			}
		}
		if (Control == 'd' || Control == 'D')
		{
			if (cantidad > 1)
			{
				ptrMatriz[nGusano.get_XCuerpo()][nGusano.get_YCuerpo()] == ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() + 1];
				nGusano.mover_cuerpo(nGusano.get_XCuerpo(), nGusano.get_YCuerpo());
				ptrMatriz[nGusano.get_XCuerpo()][nGusano.get_YCuerpo() - 1] == nGusano.caracterGus;
				ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() - 2] = '*';
			}
		}
	}

	void mover_gusano()
	{
		std::cout << "escribe una indicacion(W,A,S,D): ";
		std::cin >> Control;

		if (Control == 'w' || Control == 'W')
		{
			if (nGusano.get_xGus() - 1 == -1 || ptrMatriz[nGusano.get_xGus() - 1][nGusano.get_yGus()] == nGusano.caracterGus)
			{
				setPerder(true);
			}
			else if (ptrMatriz[nGusano.get_xGus() - 1][nGusano.get_yGus()] == Manzanita.get_charApple())
			{
				manzana();
				ptrMatriz[nGusano.get_xGus() - 1][nGusano.get_yGus()] = nGusano.get_charGus();
				nGusano.mover_pos(nGusano.get_xGus() - 1, nGusano.get_yGus());
				cantidad++;
			
			}
			else
			{
				ptrMatriz[nGusano.get_xGus() - 1][nGusano.get_yGus()] = nGusano.caracterGus;
				nGusano.mover_pos(nGusano.get_xGus() - 1, nGusano.get_yGus());
				if (cantidad > 1)
				{
					mover_cuerpo();
				}
				else
				{
					ptrMatriz[nGusano.get_xGus() + cantidad][nGusano.get_yGus()] = '*';
				}
				
			}
		}
		if (Control == 'a' || Control == 'A')
		{
			if (nGusano.get_xGus() - 1 == -1 || ptrMatriz[nGusano.get_xGus() - 1][nGusano.get_yGus()] == nGusano.caracterGus)
			{
				setPerder(true);
			}
			else if (ptrMatriz[nGusano.get_yGus() - 1][nGusano.get_yGus()] == Manzanita.get_charApple())
			{
				manzana();
				ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus()-1] = nGusano.get_charGus();
				nGusano.mover_pos(nGusano.get_xGus(), nGusano.get_yGus()-1);
				cantidad++;

			}
			else
			{
				ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus()-1] = nGusano.caracterGus;
				nGusano.mover_pos(nGusano.get_xGus(), nGusano.get_yGus()-1);
				if (cantidad > 1)
				{
					mover_cuerpo();
				}
				else
				{
					ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus()+1] = '*';
				}

			}
		}
		if (Control == 's' || Control == 'S')
		{
			if (nGusano.get_xGus() + 1 == nFilas || ptrMatriz[nGusano.get_xGus() + 1][nGusano.get_yGus()] == nGusano.caracterGus)
			{
				setPerder(true);
			}
			else if (ptrMatriz[nGusano.get_xGus() + 1][nGusano.get_yGus()] == Manzanita.get_charApple())
			{
				manzana();
				ptrMatriz[nGusano.get_xGus() + 1][nGusano.get_yGus()] = nGusano.get_charGus();
				nGusano.mover_pos(nGusano.get_xGus() + 1, nGusano.get_yGus());
				cantidad++;
			}
			else
			{
				ptrMatriz[nGusano.get_xGus() + 1][nGusano.get_yGus()] = nGusano.caracterGus;
				nGusano.mover_pos(nGusano.get_xGus() + 1, nGusano.get_yGus());
				if (cantidad > 1)
				{
					mover_cuerpo();
				}
				else
				{
					ptrMatriz[nGusano.get_xGus() - 1][nGusano.get_yGus()] = '*';
				}
				
			}
		}
		if (Control == 'd' || Control == 'D')
		{
			if (nGusano.get_yGus() + 1 == nColumnas || ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() + 1] == nGusano.caracterGus)
			{
				setPerder(true);
			}
			else if (ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() + 1] == Manzanita.get_charApple())
			{
				manzana();
				ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() + 1] = nGusano.get_charGus();
				nGusano.mover_pos(nGusano.get_xGus(), nGusano.get_yGus() + 1);
				cantidad++;
			}
			else
			{
				ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() + 1] = nGusano.caracterGus;
				nGusano.mover_pos(nGusano.get_xGus(), nGusano.get_yGus() + 1);
				if (cantidad > 1)
				{
					mover_cuerpo();
				}
				else
				{
					ptrMatriz[nGusano.get_xGus()][nGusano.get_yGus() - 1] = '*';
				}
				
			}
		}
	}
};
