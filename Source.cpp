#include <iostream>

using namespace std;

int main() {
    int a{ 0 };
    int mayor{ 5 };
    int menor{ 3 };
    int promedio{ 0 };
    int cont{ 1 };

    bool miprimerapasada {true};

    while (a != -1) 
    {
        std::cout << "ingrese un numero: ";
        std::cin >> a;

        if (miprimerapasada)
        {
            mayor = a;
            menor = a;
            miprimerapasada = false;
        }
        else
        {
            if (a > mayor)
            {
                mayor = a;

            }
            if (a < menor)
            {
                menor = a;
            }
        }

      
        
        if (promedio >= 0) {
            
            promedio = (a + promedio)/cont;
            cont++;
        }
    }
    
    cout << "el menor numero es: " << menor << endl;
    cout << "el mayor numero es: " << mayor << endl;
    cout << "el promedio es: " << promedio << endl;




    return 0;
}