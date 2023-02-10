#include <iostream>
#include "cGusano.h"

class cTablero
{
private:
	cGusano nGusano;
	char** ptrMatriz;
	int nFilas;
	int nColumnas;

public:
	cTablero()
	{
		ptrMatriz = nullptr;
		nFilas = 0;
		nColumnas = 0;
	}

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
				for (int c{ 0 };c < nColumnas;++c)
				{
					ptrMatriz[f][c] = '*';
				}
			}
		}
	}

	void imprimirTablero()
	{
		for (int f{ 0 }; f < nFilas;++f)
		{
			std::cout << "\n";
			for (int c{ 0 }; c < nColumnas; ++c)
			{
				std::cout << ptrMatriz[f][c] << " ";
			}
		}
		std::cout << "\n";
	}

	int getFilas()
	{
		return nFilas;
	}

	void setFilas(int inFilas)
	{
		nFilas = inFilas;
	}

	void iniciar_pos_gusano(int nX, int nY)
	{
		nGusano.iniciar_posicion_gusano(nX, nY);
		ptrMatriz[nGusano.x_gus][nGusano.y_gus] = nGusano.caracterGus;
	}



};