#include "iostream"
#include "cmath"

using namespace std;
int main()
{
    float r,perimetro,area;
    cout << "Para conocer area y perimetro de cualquier circulo\n coloque el radio: " << endl;
    cin >> r;
    perimetro=2*3.14*r;
    area=3.14*pow(r,2);
    cout << "el perimetro del circulo es: "<< perimetro<< endl;
    cout << "el area del circulo es: " << area <<endl;

}   