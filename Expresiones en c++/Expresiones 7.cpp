/*Ejercicio 7: La calificacion final de un estudiante es el
promedio de tres notas:

- La nota de prácticas que cuenta un 30% del total.
- La nota teórica que cuenta un 60%.
- La nota de participación que cuenta el 10% restante.

Escriba un programa que lea las tres notas del alumno y
escriba su nota final.

*/

#include<iostream>
using namespace std;


int main(){
	float practica, teorica, participacion,nota_final=0;
	
	cout<<"digite la nota de la practica"<<endl;
	cin>>practica;
	cout <<"digite la nota teorica"<<endl;
	cin>>teorica;
	cout<<"digite la nota de participacion"<<endl;
	cin>>participacion;
	
	
	practica *= 0.30; //practica = practica *0.30;
	teorica *= 0.60;//teorica = teorica * 0.60;
	participacion *= 0.10; //participacion = participacion * 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout<<"la nota final es: "<<nota_final<<endl;
	
	return 0;
}