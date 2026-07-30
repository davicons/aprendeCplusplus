/*


Ejecute el programa del ejercicio
anterior con entradas erróneas y
observe los resultados. Por ejemplo,
introduzca un dato de tipo carácter
cuando se espera un dato de tipo
entero


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