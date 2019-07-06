// Punto1PruebaTecnica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
class numero {
private:
	string String_numero;
public:
	numero(string); //constructor		
	int calcular();
};
numero::numero(string _numero) {
	String_numero = _numero;
}
int numero::calcular() {
	// convirtiendo string a entero
	int number;
	try {
		number = stoi(String_numero);
	}
	catch (invalid_argument& e) {
		cout << "Por favor inserte numero valido " << endl;
		return -1;
	}
	catch (out_of_range& e) {
		cout << "Numero fuera de rango";
		return -1;
	}
	cout << "Procesando entero... " << endl;
	//convirtiendo a binario
	string binString;
	while (number != 0) {
		binString = (number % 2 == 0 ? "0" : "1") + binString;
		number /= 2;
	}
	//contando True bits y encontrando su posición
	cout << "Posiciones de True bits... " << endl;
	int size = binString.size();
	size_t found = binString.find("1");
	cout << found + 1 << " ";
	int cont = 1;
	while (found < size) {
		found = binString.find("1", found + 1);
		if (found < size) {
			cout << found + 1 << " ";
		}
		cont = cont + 1;
	}
	cout << "\nCantidad de True bits... " << endl;
	cout << cont - 1 << endl;
	return 10;
}

int main() {
	string Numero;
inicio:
	cout << "Bienvenido, por favor escriba el numero a procesar" << endl;
	cin >> Numero;
	numero numero1(Numero);
	if (numero1.calcular() < 0) {
		goto inicio;
	}
}