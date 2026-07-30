/*

Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en metros: dato de tipo real.
 Tras leer los datos, el programa debe mostrarlos en la salida estándar.


*/


#include <iostream>


using namespace std;


int main(){

	int edad;
	float altura;
	char sexo[10];  
	cout<<"digite su edad"<<endl;
	cin>>edad;
	cout<<"digite su sexo y/o (M/F)"<<endl;
	cin>>sexo;
	cout<<"digite su altura en metros"<<endl;
	cin>>altura;
	
	
	cout<<"\n ====== DATOS INGRESADOS  ======"<<endl;
	cout<<"Edad:"<<edad<<"anios"<<endl;
	cout<<"sexo:"<<sexo<<endl;
	cout<<"Altura:"<<altura<<"metros"<<endl;
	
	
	return 0;
}