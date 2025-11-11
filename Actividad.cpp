//Código creado por Andrés Julián Santiago Téliz (A01798235) y Juan Luis Cruz Gómez (A01805333)

#include <iostream>
#include <cmath>
using namespace std;

void cuenta20() {
    int numero, positivos = 0, negativos = 0, ceros = 0;
    for (int i = 1; i <= 20; i++) {
        cout << "Ingresa un numero: ";
        cin >> numero;
        if (numero > 0) positivos++;
        else if (numero < 0) negativos++;
        else ceros++;
    }
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl << endl;
}

void tablaMultiplicar() {
    int num;
    cout << "Ingresa un numero para su tabla de multiplicar: ";
    cin >> num;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    cout << endl;
}

int menor() {
    int cantidad, valor, minimo;
    cout << "Cuantos numeros ingresaras? ";
    cin >> cantidad;
    cout << "Ingresa el numero 1: ";
    cin >> valor;
    minimo = valor;
    for (int i = 2; i <= cantidad; i++) {
        cout << "Ingresa el numero " << i << ": ";
        cin >> valor;
        if (valor < minimo) minimo = valor;
    }
    cout << "El menor valor es: " << minimo << endl << endl;
    return minimo;
}

int multiplos3o5() {
    int suma = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            suma += i;
    }
    cout << "La suma de los multiplos de 3 o 5 menores a 1000 es: " << suma << endl << endl;
    return suma;
}

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
int primos() {
    int limite, ultimoPrimo = 0;
    cout << "Ingresa un numero limite: ";
    cin >> limite;
    cout << "Numeros primos hasta " << limite << ": ";
    for (int i = 2; i <= limite; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
            ultimoPrimo = i;
        }
    }
    cout << endl << "El ultimo numero primo encontrado es: " << ultimoPrimo << endl << endl;
    return ultimoPrimo;
}

void rectangulo() {
    int ancho, alto;
    cout << "Ingresa la anchura: ";
    cin >> ancho;
    cout << "Ingresa la altura: ";
    cin >> alto;

    int fila = 0;
    while (fila < alto) {
        int col = 0;
        while (col < ancho) {
            cout << "* ";
            col++;
        }
        cout << endl;
        fila++;
    }
    cout << endl;
}

void rectangulo2() {
    int ancho, alto;
    cout << "Ingresa la anchura: ";
    cin >> ancho;
    cout << "Ingresa la altura: ";
    cin >> alto;

    int fila = 0;
    while (fila < alto) {
        int col = 0;
        while (col < ancho) {
            if (fila == 0 || fila == alto - 1 || col == 0 || col == ancho - 1)
                cout << "* ";
            else
                cout << "  ";
            col++;
        }
        cout << endl;
        fila++;
    }
    cout << endl;
}

void rectangulo3() {
    int ancho, alto, cantidad;
    cout << "Ingresa la anchura: ";
    cin >> ancho;
    cout << "Ingresa la altura: ";
    cin >> alto;
    cout << "Cuantos rectangulos quieres dibujar? ";
    cin >> cantidad;

    int k = 0;
    while (k < cantidad) {
        int fila = 0;
        while (fila < alto) {
            int col = 0;
            while (col < ancho) {
                if (fila == 0 || fila == alto - 1 || col == 0 || col == ancho - 1)
                    cout << "* ";
                else
                    cout << "  ";
                col++;
            }
            cout << endl;
            fila++;
        }
        cout << endl;
        k++;
    }
}

void rectangulo4() {
    int ancho, alto, cantidad;
    cout << "Ingresa la anchura: ";
    cin >> ancho;
    cout << "Ingresa la altura: ";
    cin >> alto;
    cout << "Cuantos rectangulos quieres dibujar? ";
    cin >> cantidad;

    int k = 0;
    while (k < cantidad) {
        int fila = 0;
        while (fila < alto) {
            int col = 0;
            while (col < ancho) {
                if (fila == 0 || fila == alto - 1 || col == 0 || col == ancho - 1)
                    cout << "* ";
                else
                    cout << "  ";
                col++;
            }
            cout << endl;
            fila++;
        }
        k++;
    }
    cout << endl;
}

int main() {
    cuenta20();
    tablaMultiplicar();
    menor();
    multiplos3o5();
    primos();
    rectangulo();
    rectangulo2();
    rectangulo3();
    rectangulo4();
    return 0;
}