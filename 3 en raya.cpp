#include <iostream>

using namespace std;

int main() {
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{ };
	int ubi{ 0 }, i{ 0 };
	char x{ 'X' }, o{ 'O' };
	char F1{ ' ' }, F2{ ' ' }, F3{ ' ' }, F4{ ' ' }, F5{ ' ' }, F6{ ' ' }, F7{ ' ' }, F8{ ' ' }, F9{' '};
		
	do 
	{
		//PRIMERA PASADA
		if (primerapasada) 
		{
			cout << '7' << " | " << '8' << " | " << '9' << "\n" << '4' << " | " << '5' << " | " << '6' << "\n" << '1' << " | " << '2' << " | " << '3' << "\n";
			primerapasada = false;
		}
		//TURNOS
		if(jugador1)
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
				F1 = x;
			}
			else if (ubi == 2)
			{
				F2 = x;
			}
			else if (ubi == 3)
			{
				F3 = x;
			}
			else if (ubi == 4)
			{
				F4 = x;
			}
			else if (ubi == 5)
			{
				F5 = x;
			}
			else if (ubi == 6)
			{
				F6 = x;
			}
			else if (ubi == 7)
			{
				F7 = x;
			}
			else if (ubi == 8)
			{
				F8 = x;
			}
			else if (ubi == 9)
			{
				F9 = x;
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
			if (ubi == 1)
			{
				F1 = o;
			}
			else if (ubi == 2)
			{
				F2 = o;
			}
			else if (ubi == 3)
			{
				F3 = o;
			}
			else if (ubi == 4)
			{
				F4 = o;
			}
			else if (ubi == 5)
			{
				F5 = o;
			}
			else if (ubi == 6)
			{
				F6 = o;
			}
			else if (ubi == 7)
			{
				F7 = o;
			}
			else if (ubi == 8)
			{
				F8 = o;
			}
			else if (ubi == 9)
			{
				F9 = o;
			}
		}

		cout << F7 << " | " << F8 << " | " << F9 << "\n" << F4 << " | " << F5 << " | " << F6 << "\n" << F1 << " | " << F2 << " | " << F3 << "\n";
		
		i++;
		ubi = 0;

		if(true)
		{
			tmp = jugador1;
			jugador1 = jugador2;
			jugador2 = tmp;
		}
		//FORMAS DE GANAR JUGADOR 1
		if (F1 == x && F2 == x && F3 == x) 
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F1 == x && F5 == x && F9 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F1 == x && F4 == x && F7 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F7 == x && F8 == x && F9 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F3 == x && F6 == x && F9 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F4 == x && F5 == x && F6 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		else if (F7 == x && F5 == x && F3 == x)
		{
			cout << "Jugador 1 Gana!" << endl;
			break;
		}
		
		//FORMAS DE GANAR JUGADOR 2
		else if (F1 == o && F2 == o && F3 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F1 == o && F5 == o && F9 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F1 == o && F4 == o && F7 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F7 == o && F8 == o && F9 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F3 == o && F6 == o && F9 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F4 == o && F5 == o && F6 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else if (F7 == o && F5 == o && F3 == o)
		{
			cout << "Jugador 2 Gana!" << endl;
			break;
		}
		else
		{
			cout << "nadie gana\n---------------------------\n";
		}

	} while (i < 9);

	return 0;

}