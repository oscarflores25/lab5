#include <iostream>
using namespace std;

int main()
{

	// INICIALIZACION DE VARIABLES
    int num1, num2, resultado;
    int opcion;
    
    cout << "ingrese el primer numero" << endl;
    cin >> num1;
    cout << "ingrese el segundo numero" << endl;
    cin >> num2;

    cout << "ingresa la opcion (1-4)" << endl;

    cout << "1. suma " << endl;
    cout << "2. resta" << endl;
    cout << "3. divicion" << endl;
    cout << "4. multiplicacion" << endl;
    cin >> opcion;
	
	// INICIO DE SWITCH	

    switch (opcion)
    {
    case 1:
        resultado = num1 + num2;
        cout << "la suma es " << resultado << endl;
        break;
    case 2:
        resultado = num1 - num2;
        cout << "la resta es " << resultado << endl;
        break;
    case 3:
        resultado = num1 / num2;
        cout << "la division es " << resultado << endl;
        break;
    case 4:
        resultado = num1 * num2;
        cout << "la multiplicacion es " << resultado << endl;
        return 0;
    }
}
