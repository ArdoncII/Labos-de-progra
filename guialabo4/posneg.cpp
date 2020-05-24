#include "iostream"
#include "cmath"

using namespace std;

int main()
{
    int x1;

    cout <<endl;
    cout <<"¿EL VALOR ES POSITIVO O NEGATIVO?" << endl << endl;
    cout <<"Ingrese el valor a verificar: ";
    cin >>x1;
   
if(x1<0){
    cout <<"El numero es negativo"<< endl;
    }
else if (x1>0){
    cout <<"El numero es positivo"<< endl;
}
else{
    cout <<"El numero es cero"<< endl;
}
return 0;
}





