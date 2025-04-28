#include <iostream>
using namespace std;

int main(){

    //Declarar variable
    int Numero;

    //Pedir datos al usuario
    cout << "Ingrese un numero" << endl; 
    cin >> Numero;

    //Condion if para validar si es positivo negativo o cero
    if (Numero >= 1)
    {
        cout << "Su numero es positivo" << endl;
    } else if(Numero <= -1){
        cout << "Su numero es negativo" << endl;
    } else if(Numero == 0){
        cout << "Su numero es cero" << endl;
    } 
    return 0;
}