#include <iostream>

using namespace std;

int main()
{
    //Declaraciones de variable
    int numero;

    //Pedir la digitacion del numero
    cout << "Por favor digite el numero: " << endl;
    cin >> numero;

    //Dependiendo del numero mostrar el mensaje correspondiente
        if (numero <=-1  ) {
        cout << "El numero " << numero << " es negativo." << endl;
    } else if (numero > 0) {
        cout << "El numero " << numero << " es positivo." << endl;
    } else {
        cout << "El numero " << numero << " es cero." << endl;
    }

    return 0;
}
