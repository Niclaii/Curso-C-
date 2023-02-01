#include <iostream>

using namespace std;

int main()
{
    char SN{ ' ' };
    int inicial{ 0 };
    bool a{ true };
    int n{ 0 };
    int i{ 0 };
    cout << "Elija una opcion:\n" << "1.while\n" << "2.for\n" << "3.do while\n";
    cin >> inicial;
    if (inicial == 1)
    {
        do
        {
            cout << "Escribe un numero:";
            cin >> n;
            while (i <= 12)
            {
                if (a)
                {
                    cout << i << " * " << n << " = " << i * n << endl;
                    i++;
                }
            }
            cout << "desea continuar? ";
            cin >> SN;
        } while (SN == 'S' || SN == 's');
    }
    if (inicial == 2)
    {
        do
        {
            cout << "Escribe un numero:";
            cin >> n;
            for (int i{ 0 }; i <= 12; i++)
            {
                if (a)
                {
                    cout << i << " * " << n << " = " << i * n << endl;
                }
            }
            cout << "desea continuar? ";
            cin >> SN;
        } while (SN == 'S' || SN == 's');
    }
    if (inicial == 3)
    {
        cout << "Escribe un numero:";
        cin >> n;
        do {
            do
            {

                if (i <= 12)
                {
                    cout << i << " * " << n << " = " << i * n << endl;
                    i++;
                }
                else
                {
                    a = false;
                }

            } while (a);
            cout << "desea continuar? ";
            cin >> SN;
        } while (SN == 'S' || SN == 's');
    }

}