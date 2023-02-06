#include <iostream>

using namespace std;

int main() {
	bool primerapasada{ true }, jugador1{ true }, jugador2{ false }, tmp{ }, F1L{false}, F2L{ false }, F3L{ false }, 
		F4L{ false }, F5L{ false }, F6L{ false }, F7L{ false }, F8L{ false }, F9L{ false }, Reset{ false };
	int ubi{ 0 }, i{ 0 };
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
				if (F1L==false)
				{
					F1 = x;
					F1L = true;
					Reset = false;
				}
				else
				{
					cout << "Reingrese una ubicación: \n";
					i = i - 1;
					Reset = true;
				}
			}
			else if (ubi == 2)
			{
				if (F2L==false)
				{
					F2 = x;
					F2L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 3)
			{
				if (F3L==false)
				{
					F3 = x;
					F3L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 4)
			{
				if (F4L==false)
				{
					F4 = x;
					F4L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 5)
			{
				if (F5L==false)
				{
					F5 = x;
					F5L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 6)
			{
				if (F6L==false)
				{
					F6 = x;
					F6L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 7)
			{
				if (F7L==false)
				{
					F7 = x;
					F7L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 8)
			{
				if (F8L==false)
				{
					F8 = x;
					F6L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 9)
			{
				if (F9L==false)
				{
					F9 = x;
					F9L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
		}
		//JUGADOR 2
		if (jugador2)
		{
			if (ubi == 1)
			{
				if (F1L == false)
				{
					F1 = o;
					F1L = true;
					Reset = false;
				}
				else
				{
					cout << "Reingrese una ubicación: \n";
					i = i - 1;
					Reset = true;
				}
			}
			else if (ubi == 2)
			{
				if (F2L == false)
				{
					F2 = o;
					F2L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 3)
			{
				if (F3L == false)
				{
					F3 = o;
					F3L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 4)
			{
				if (F4L == false)
				{
					F4 = o;
					F4L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 5)
			{
				if (F5L == false)
				{
					F5 = o;
					F5L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 6)
			{
				if (F6L == false)
				{
					F6 = o;
					F6L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 7)
			{
				if (F7L == false)
				{
					F7 = o;
					F7L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 8)
			{
				if (F8L == false)
				{
					F8 = o;
					F6L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
			}
			else if (ubi == 9)
			{
				if (F9L == false)
				{
					F9 = o;
					F9L = true;
					Reset = false;
				}
				else
				{
					i = i - 1;
					cout << "Reingrese una ubicación: \n";
					Reset = true;
				}
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
