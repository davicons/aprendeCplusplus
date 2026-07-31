/*


Bloque 2. Expresiones
Ejercicio 4:
Escribe la siguiente expresión como expresión en C++:
d) a +(b/(c-d))

*/

#include <iostream>
using namespace std;

int main(){
	
	float a, b, c, d, resultado=0;
	
	cout<<"digite el valor de a: ";
	cin>>a;
	cout<<"digite el valor de b: ";
	cin>>b;
	cout<<"digite el valor de c: ";
	cin>>c;
	cout<<"digite el valor de d: ";
	cin>>d;
	
	resultado = a + ( b/(c-d));
	cout.precision(2);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	return 0;
}