//Calculadora basica en c++

#include <iostream>
#include <cmath>
using namespace std;

int ejercicio1();
int ejercicio2();
int ejercicio3();
int ejercicio4();
int ejercicio5();
int ejercicio6();
int ejercicio7();

int MENU1(int ejercicio) {

    switch (ejercicio) {
        case 1: return ejercicio1(); break;
        case 2: return ejercicio2(); break;
        case 3: return ejercicio3(); break;
        case 4: return ejercicio4(); break;
        case 5: return ejercicio5(); break;
        case 6: return ejercicio6(); break;
        case 7: return ejercicio7(); break;
        default: cout<<"La opcion no existe"<<endl;
        return -1;
    }
}
int main () {
    int opc;
    do {
        cout<<"\t BIENVENIDO A LA CALCULADORA   "<<endl;
        cout<<"\t MENU  "<<endl;
        cout<<"\t Seleccione una opción "<<endl;
        cout<<"1. Sumar "<<endl;
        cout<<"2. Restar "<<endl;
        cout<<"3. Multiplicar "<<endl;
        cout<<"4. Dividir "<<endl;
        cout<<"5. Potencia "<<endl;
        cout<<"6. Raiz cuadrada "<<endl;
        cout<<"7. Factorial "<<endl;
        cout<<"8. Salir "<<endl;
        cin>>opc;
if (opc !=8) {
    MENU1(opc);
}

    } while (opc !=8);
    return 0;
}

int ejercicio1() {
        double num1, num2, suma;
    cout<<"Suma de dos terminos"<<endl;
        cout << "Ingrese el primer número: ";
        cin >> num1;

        cout << "Ingrese el segundo número: ";
        cin >> num2;
        suma = num1 + num2;

        cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << endl;

        return 0;
}
int ejercicio2() {

        double num1, num2, resta;
    cout<<"Resta de dos numeros"<<endl;
        cout << "Ingrese el primer número: ";
        cin >> num1;

        cout << "Ingrese el segundo número: ";
        cin >> num2;

        resta = num1 - num2;

        cout << "La resta de " << num1 << " y " << num2 << " es: " << resta <<endl;

        return 0;

}
int ejercicio3() {

    double num1, num2, producto;
    cout<<"Multiplicacion de dos terminos"<<endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    producto = num1 * num2;


    cout << "El producto de " << num1 << " y " << num2 << " es: " << producto <<endl;

    return 0;
}
int ejercicio4() {

        double num1, num2, cociente;
    cout<<"Division de dos terminos"<<endl;
        cout << "Ingrese el primer número: ";
        cin >> num1;

        cout << "Ingrese el segundo número: ";
        cin >> num2;

        if (num2 == 0) {
            cout << "Error: No se puede dividir entre cero." << endl;
        } else {
            cociente = num1 / num2;


            cout << "El cociente de " << num1 << " y " << num2 << " es: " << cociente << endl;
        }

        return 0;
}
int ejercicio5() {

    double base, exponente, resultado;
    cout<<"Determine la potencia de un numero"<<endl;
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;


    resultado = pow(base, exponente);

    cout << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}
int ejercicio6() {

        double numero, resultado;

    cout<<"Determine la raiz cuadrada de un numero"<<endl;
        cout << "Ingrese un número: ";
        cin >> numero;

        if (numero < 0) {
            cout << "Error: No se puede calcular la raíz cuadrada de un número negativo." << std::endl;
        } else {

            resultado = sqrt(numero);

            cout << "La raíz cuadrada de " << numero << " es: " << resultado << std::endl;
        }

        return 0;
}
int ejercicio7() {
    int n1;
    long long factorial = 1;

    cout<<"Determine el factorial de un numero"<<endl;
    cout << "Ingresa un numero entero no negativo: ";
    cin >> n1;


    if (n1 < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
        return 1; // Salir del programa si el número es negativo
    }


    for (int i = 1; i <= n1; i++) {
        factorial *= i;
    }


    cout << "El factorial de " << n1 << " es: " << factorial << endl;

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.