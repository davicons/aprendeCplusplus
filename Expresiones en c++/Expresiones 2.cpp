/*

Ejercicio 2:

Escribe la siguiente expresión
matemática como expresión en C++:
b)(a+b)/(c+d)

*/
#include <iostream>

using namespace std;

int main(){
	
	
	float a,b,c,d,resultado=0;

	cout<<"digite el valor de a: ";
	cin>>a;
	cout<<"digite el valor de b: ";
	cin>>b;
	cout<<"digite el valor de c: ";
	cin>>c;
	cout<<"digite el valor de d: ";
	cin>>d;
	
	if((c + d) != 0){
		cout.precision(2);
		resultado = (a + b)/( c + d);
		cout<<"\n el resultado es: "<<resultado<<endl;
	} else{
		cout<<"\n Error: no se puede dividir entre cero"<<endl;
	}
	
	
	
	
	
	return 0;
}