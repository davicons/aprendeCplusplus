/*
Escribe un programa que lea de la
entrada estándar el precio de un
producto y muestre en la salida
estándar el precio del producto al
aplicarle el IVA.

*/


#include <iostream>

using namespace std;

int main (){
	
	float precio,igv, precioFinal;
	
	cout << "Ingrese el precio del producto: ";
	cin>>precio;
	//igv = precio*0.18;
	igv = precio*18/100;
	precioFinal = precio + igv;
	cout<<"IGV:"<<igv;
	cout<<"precio Finald: "<<precioFinal;

	
	return 0;
}