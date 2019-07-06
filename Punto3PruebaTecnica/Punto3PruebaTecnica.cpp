
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
	ofstream myfile;
	int salida9 = 0;
	char caracter[220];
	memset(caracter, ' ', 220);
	int contador = 0;
    cout << "Empiece a escribir los caracteres vv"<<endl;
	string buffer;
	do{
		caracter[contador]=_getche();		
		contador = contador + 1;
		if (contador <= 20) {
			//cout << caracter << "#" << contador;
			myfile.open("salida.txt");			
			myfile << caracter;
			myfile.close();
		}
		if (contador > 20 && contador <= 40) {
			myfile.open("salida0.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 40 && contador <= 60) {
			myfile.open("salida1.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 60 && contador <= 80) {
			myfile.open("salida2.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();

		}
		if (contador > 80 && contador <= 100) {
			myfile.open("salida3.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 80 && contador <= 100) {
			myfile.open("salida3.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
		}
		
		
		if (contador > 100 && contador <= 119) {
			myfile.open("salida4.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida3.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[100], &caracter[119]);
			myfile << buffer;
			myfile.close();

		}
		
		if (contador > 120 && contador <= 140) {
			myfile.open("salida5.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida4.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida3.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[100], &caracter[119]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[120], &caracter[139]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 140 && contador <= 160) {
			myfile.open("salida6.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida5.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida4.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida3.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[100], &caracter[119]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[120], &caracter[139]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[140], &caracter[159]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 160 && contador <= 180) {
			myfile.open("salida7.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida6.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida5.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida4.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida3.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[100], &caracter[119]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[120], &caracter[139]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[140], &caracter[159]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[160], &caracter[179]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 180 && contador <= 200) {
			myfile.open("salida8.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida7.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida6.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida5.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida4.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida3.txt");
			buffer = string(&caracter[100], &caracter[119]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[120], &caracter[139]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[140], &caracter[159]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[160], &caracter[179]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[180], &caracter[199]);
			myfile << buffer;
			myfile.close();
		}
		if (contador > 200 && contador <= 220) {
			myfile.open("salida9.txt");
			buffer = string(&caracter[0], &caracter[19]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida8.txt");
			buffer = string(&caracter[20], &caracter[39]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida7.txt");
			buffer = string(&caracter[40], &caracter[59]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida6.txt");
			buffer = string(&caracter[60], &caracter[79]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida5.txt");
			buffer = string(&caracter[80], &caracter[99]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida4.txt");
			buffer = string(&caracter[100], &caracter[119]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida3.txt");
			buffer = string(&caracter[120], &caracter[139]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida2.txt");
			buffer = string(&caracter[140], &caracter[159]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida1.txt");
			buffer = string(&caracter[160], &caracter[179]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida0.txt");
			buffer = string(&caracter[180], &caracter[199]);
			myfile << buffer;
			myfile.close();
			myfile.open("salida.txt");
			buffer = string(&caracter[200], &caracter[219]);
			myfile << buffer;
			myfile.close();
		}

	} while (caracter[contador] != '\n' || contador <=220);
	 
}

