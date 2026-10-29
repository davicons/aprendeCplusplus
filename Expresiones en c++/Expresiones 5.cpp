
/** 5. Escriba un fragmento de programa que intercambie los valores de dos variables .*/


#include <iostream>

using namespace std;
int main(){
	
	int x,y,aux;
	
	
	cout<<"digite el valor de x "; cin>>x;
	cout<<"digite el valor de y "; cin>>y;
	
	/*
		
       y=5
	   aux = 10
	   x = 5
	   y = 10	
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout <<"el nuevo valor de x es:"<<x<<endl;
	cout<<"el nuevo valor de y es:"<<y<<endl;
	
	

};
