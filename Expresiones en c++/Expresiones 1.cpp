//1. Escribe la siguiente expresion como expresion en c++ exmaple a/b +1

#include<iostream>

using namespace std;


int main(){
	
	
	float a,b,resultado=0;
	
	cout<<"digite el valor de a: ";cin>>a;
	cout <<"digite el valor de b: ";cin>>b;
	
	resultado = (a/b)+1;
	cout.precision(2);
	cout<<"\n el resultado es: "<<resultado<<endl;
	
	return 0;
}