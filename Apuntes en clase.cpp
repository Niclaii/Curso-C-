// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

    int miArray[3]{ 40,42,44 };
    //int *ptr;


    //Imprimir miArray2
    /*
    ptr = miArray;
    ptr = &(miArray[0]);

    cout << *ptr << endl;
    ptr = ptr+1;
    cout << *(ptr) << endl;;
    */
    //Prueba puntero1
    /*
    int a{5};
    ptr = &(a);
    *(ptr) = 7;
    a = 7;
    cout << a << endl;
    *(ptr) = 7;
    cout << a << endl;
    */
    //IMPRIMIR 2 DIMENSIONES DE UN ARRAY
    for (int i; i < 3; i++)
    {
        cout << "Mi array = " << miArray[i] << endl;
    }

    int miMatriz[3][2]{ 10,11,20,21,30,31 };
    for (int i; i < 3; i++)
    {
        for (int j; j < 2; j++)
        {
            cout << "Mi matriz = " << miMatriz[i][j] << endl;
        }
    }
    int* ptr;
    ptr = &(miMatriz[0][0]);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++)
        {
            cout << *(ptr) << endl;;
            ptr = ptr + 1;
        }
    }
    return 0;
}