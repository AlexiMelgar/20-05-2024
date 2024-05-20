#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n = 0;
    int maquina = 0;


   
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese 1 para jugar piedra, 2 para jugar papel, o 3 para jugar tijera: \n";
        cin >> n;

         cout << "maquina" << maquina<<"\n";

        maquina = 1 + rand() % 4;

        if (n == maquina)
        {
            cout << "Empate \n";
        }
        else if ((n == 1 && maquina == 3) || (n == 2 && maquina == 3) || (n == 3 && maquina == 2))
        {
            cout << "Gana usuario.\n";
        }
        else
        {
            cout << "Gana maquina.\n";
        }
    }

    return 0;
}