#include "iostream"
#include "cmath"
#include "string"

using namespace std;

int main()
{
    int x1;
    string txtanswer;

    cout <<endl;
    cout <<"¿EL VALOR ES PAR O IMPAR?" << endl << endl;
    cout <<"Ingrese el valor a verificar: ";
    cin >> x1;
    txtanswer = (x1%2 == 0)? " Es par": " Es impar";
    cout << x1 << txtanswer<< endl;

    return 0;

}