#include "iostream"
#include "cmath"
#include "string"

using namespace std;

int main()
{
    int longitud;
    string palabra,txtanswer1,txtanswer2;

    cout<<endl;
    cout <<"¿DE CUANTAS LETRAS ES EL STRING?" << endl << endl;
    
    cout <<"Digite una palabra: "<<endl;
    cin >> palabra;
    
    cout<< "la palabra "<<palabra <<" tiene: " <<palabra.length()<<" letras"<<endl;
    txtanswer1 = (palabra.length()%2 ==0)?" Es un numero par":" Es un numero impar";
    cout << "la longitud de la palabra"<<txtanswer1<< endl;
    txtanswer2 =palabra.length()<=10 ==0?" tiene mas de 10 letras": " tiene menos de 10 letras";
    cout << "y la palabra ingresada"<<txtanswer2<< endl;
    return 0;

}