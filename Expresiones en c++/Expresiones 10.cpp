
/*10. Escriba un programa que calcule las soluciones de una ecuación de
segundo grado de La forma ax^2 + bx + c = 0, teniendo en cuenta que: 
(-b+sqrt(pow(b,2)-4*a*c))/(2*a) y (-b-sqrt(pow(b,2)-4*a*c))/(2*a)*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a=0, b=0, c=0, resultado1=0, resultado2=0;

    cout << "Digite el valor de a:" << endl;
    cin >> a;

    cout << "Digite el valor de b:" << endl;
    cin >> b;

    cout << "Digite el valor de c:" << endl;
    cin >> c;

    resultado1 = (-b + sqrt(pow(b,2) - (4*a*c))) / (2*a);
    resultado2 = (-b - sqrt(pow(b,2) - (4*a*c))) / (2*a);

    cout << "El resultado 1: " << resultado1 << endl;
    cout << "El resultado 2: " << resultado2 << endl;

    return 0;
}
