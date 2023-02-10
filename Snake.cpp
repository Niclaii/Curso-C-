#include <iostream>
#include <random>


using namespace std;

int main() {
    char** miMatriz;
    int columnas{ 10 }, filas{ 10 };
    char x{'x'};
    int random = rand();
    bool perder{ false }, inicio{ true };



    /*
    cout << "ingrese la cantidad de columnas: ";
    cin >> columnas;
    cout << "\n";

    cout << "ingrese la cantidad de filas: ";
    cin >> filas;
    cout << "\n";
    */
    miMatriz = new char* [filas];

    //CREAR LA MATRIZ

    for (int i = 0; i < filas; ++i)
    {

        miMatriz[i] = new char[columnas];
    }
    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            miMatriz[i][j] = x;
        }
    }

   
   do 
   {
       //IMPRIMIR MATRIZ
       for (int i = 0; i < filas; i++)
       {
           for (int j = 0; j < columnas; j++)
           {
               if (j == columnas - 1)
               {
                   cout << miMatriz[i][j] << endl;
               }
               else
               {
                   cout << miMatriz[i][j] << " ";
               }




           }
       }
       /*if (inicio == true)
       {
           miMatriz[random][random] = '@';
           inicio = false;
       }
       */
   } while (perder==false);

    //ELIMINAR MATRIZ
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