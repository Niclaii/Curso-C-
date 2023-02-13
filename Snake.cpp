#include <iostream>
#include <random>
#include "cTablero.h"

using namespace std;



int main() {
    cTablero miMatriz;

    miMatriz.construirTablero();
    miMatriz.iniciar_pos_gusano(4, 4);
    miMatriz.manzana();
    miMatriz.imprimirTablero();
    cout << "_______________________________________\n";

    cGusano Gusano;


    do 
    {
        miMatriz.mover_gusano();
        miMatriz.imprimirTablero();
        




    } while (miMatriz.getPerder() == false);
    
    if (miMatriz.getPerder() == true)
    {
        cout << "\nPerdiste jaja.";
    }

    return 0;
}