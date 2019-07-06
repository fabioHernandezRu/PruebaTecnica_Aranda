// Punto2PruebaTecnica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <curl/curl.h>
#include <curl/easy.h>
#include <fstream>
#include "include/cpr/cpr.h" // Make sure this header is available in your include path
// JSON parser
#include "include/json.hpp"
using json = nlohmann::json;
using namespace std;
class consulta {
private:
	string topico;
public:
	consulta(std::string); //constructor		
	int consultar();
};
consulta::consulta(std::string _topico) {
	topico = _topico;
}
int consulta::consultar() {
	json j;
	string url = "https://en.wikipedia.org/w/api.php?action=parse&section=0&prop=text&format=json&page=" + topico;	
	auto r = cpr::Get(cpr::Url{ url});
	ofstream myfile;
	myfile.open("receive.json");
	myfile << r.text;
	myfile.close();
	std::ifstream ifs("receive.json");
	j = json::parse(ifs);
	string title;
	title = j["parse"]["title"];
	cout <<"\n el titulo de el topico consultado es: " << title << endl;
	int pageid;
	pageid= j["parse"]["pageid"];
	cout <<"\n el pageID del topico consuldato es: " <<pageid << endl;
	string volcadoHTML;
	volcadoHTML = j["parse"]["text"]["*"];
	cout <<"\n El volcado HTML es: " <<volcadoHTML << endl;
	return 10;
}

int main() {
	string Topico;
inicio:
	cout << "Bienvenido, por favor el topico a consultar" << endl;
	cin >> Topico;
	consulta consulta1(Topico);
	if (consulta1.consultar() < 0) {
		goto inicio;
	}

}