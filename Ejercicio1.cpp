#include <iostream>
using namespace std;
int main(){
    int entero=0;
    int factorial=1;
    cout<<"Ingrese un numero entero positivo \n";
    cin>>entero;

    if(entero<0){
        cout<<"El factorial de un numero negativo no existe.\n";
    }
    else {
        cout<<"El factorial del numero: "<<entero<<" es: ";
        while(entero>0)
        {
            factorial = factorial*entero;
            entero=entero-1;
        }
        cout<<factorial;
        

    }

return 0;
}