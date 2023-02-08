// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int** miMatriz;
    int columnas{ 0 }, filas{ 0 }, x{ 0 };


    cout << "ingrese la cantidad de columnas: ";
    cin >> columnas;

    cout << "ingrese la cantidad de filas: ";
    cin >> filas;

    miMatriz = new int* [filas];

    for (int i = 0; i < filas; ++i)
    {
        miMatriz[i] = new int[columnas];
    }
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            cout << "ingrese un numero:";
            cin >> x;

            miMatriz[i][j] = x;
        }
    }
    /*miMatriz[0][0]=10;
    miMatriz[0][1]=11;
    miMatriz[1][0]=20;
    miMatriz[1][1]=21;
    miMatriz[2][0]=30;
    miMatriz[2][1]=31;
    */

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Mi matriz = " << miMatriz[i][j] << endl;
        }
    }

    for (int i{ 0 }; i < filas; ++i)
    {

        delete[]miMatriz[i];

    }
    delete[]miMatriz;

    if (miMatriz == nullptr)
    {
        cout << "\nse elimino correctamente" << endl;
    }
    else
    {
        miMatriz = nullptr;
        cout << "\nse elimino correctamente" << endl;
    }
    return 0;
}