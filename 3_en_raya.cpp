#include <iostream>

using namespace std;


void EscribirFigura(char& casilla, bool& F1L1, bool& reset, int X, int contador)
{

	if (F1L1 == false)
	{
		casilla = X;
		F1L1 = true;
		reset = false;
	}
	else
	{
		cout << "Reingrese una ubicación: \n";
		contador = contador - 1;
		reset = true;
	}

	return;

}


void JugadorWins(char cas1,char cas2, char cas3, char X)
{
	if (cas1 == X && cas2 == X && cas3 == X)
	{
		cout << "Jugador 1 Gana!" << endl;
		//break;
		if (false) 
		{
			cout << "nadie gano" << endl;
		}
	}

}

int main() {
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{ }, F1L{false}, F2L{ false }, F3L{ false }, 
		F4L{ false }, F5L{ false }, F6L{ false }, F7L{ false }, F8L{ false }, F9L{ false }, Reset{ false };
	int ubi{ 0 }, i{ 0 };
	char fila1[]{ ' ',' ',' ' };
	char fila2[]{ ' ',' ',' ' };
	char fila3[]{ ' ',' ',' ' };
	char x{ 'X' }, o{ 'O' };
	char F1{ ' ' }, F2{ ' ' }, F3{ ' ' }, F4{ ' ' }, F5{ ' ' }, F6{ ' ' }, F7{ ' ' }, F8{ ' ' }, F9{ ' ' };

	do
	{
		//PRIMERA PASADA
		if (primerapasada)
		{
			cout << '7' << " | " << '8' << " | " << '9' << "\n" << '4' << " | " << '5' << " | " << '6' << "\n" << '1' << " | " << '2' << " | " << '3' << "\n";
			primerapasada = false;
		}
		//TURNOS
		if (jugador1)
		{
			cout << "turno de Jugador 1\n";
		}

		if (jugador2)
		{
			cout << "turno de Jugador 2\n";
		}

		cout << "introduzca la ubicacion: ";
		cin >> ubi;

		//JUGADOR 1

		if (jugador1)
		{
			if (ubi == 1)
			{
				EscribirFigura(F1, F1L, Reset, x, i);
			}
			else if (ubi == 2)
			{
				EscribirFigura(F2, F2L, Reset, x, i);
			}
			else if (ubi == 3)
			{
				EscribirFigura(F3, F3L, Reset, x, i);
			}
			else if (ubi == 4)
			{
				EscribirFigura(F4, F4L, Reset, x, i);
			}
			else if (ubi == 5)
			{
				EscribirFigura(F5, F5L, Reset, x, i);
			}
			else if (ubi == 6)
			{
				EscribirFigura(F6, F6L, Reset, x, i);
			}
			else if (ubi == 7)
			{
				EscribirFigura(F7, F7L, Reset, x, i);
			}
			else if (ubi == 8)
			{
				EscribirFigura(F8, F8L, Reset, x, i);
			}
			else if (ubi == 9)
			{
				EscribirFigura(F9, F9L, Reset, x, i);
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
			if (ubi == 1)
			{
				EscribirFigura(F1, F1L, Reset, o, i);
			}
			else if (ubi == 2)
			{
				EscribirFigura(F2, F2L, Reset, o, i);
			}
			else if (ubi == 3)
			{
				EscribirFigura(F3, F3L, Reset, o, i);
			}
			else if (ubi == 4)
			{
				EscribirFigura(F4, F4L, Reset, o, i);
			}
			else if (ubi == 5)
			{
				EscribirFigura(F5, F5L, Reset, o, i);
			}
			else if (ubi == 6)
			{
				EscribirFigura(F6, F6L, Reset, o, i);
			}
			else if (ubi == 7)
			{
				EscribirFigura(F7, F7L, Reset, o, i);
			}
			else if (ubi == 8)
			{
				EscribirFigura(F8, F8L, Reset, o, i);
			}
			else if (ubi == 9)
			{
				EscribirFigura(F9, F9L, Reset, o, i);
			}
		}


		cout << F7 << " | " << F8 << " | " << F9 << "\n" << F4 << " | " << F5 << " | " << F6 << "\n" << F1 << " | " << F2 << " | " << F3 << "\n";

		i++;
		ubi = 0;

		if (Reset == false)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
		}

		//FORMAS DE GANAR JUGADOR 1

		JugadorWins(F1, F2, F3, x);
		JugadorWins(F1, F5, F9, x);
		JugadorWins(F1, F4, F7, x);
		JugadorWins(F7, F8, F9, x);
		JugadorWins(F3, F6, F9, x);
		JugadorWins(F4, F5, F6, x);
		JugadorWins(F7, F5, F3, x);

		//FORMAS DE GANAR JUGADOR 2
		JugadorWins(F1, F2, F3, o);
		JugadorWins(F1, F5, F9, o);
		JugadorWins(F1, F4, F7, o);
		JugadorWins(F7, F8, F9, o);
		JugadorWins(F3, F6, F9, o);
		JugadorWins(F4, F5, F6, o);
		JugadorWins(F7, F5, F3, o);

	} while (i < 9);
	
	return 0;

}
