#include "iostream"
#include "cmath"
#include "string"

using namespace std;

int main()
{
    int x1,x2,answer;
    string txtanswer;

    cout<<endl;
    cout <<"UN NUMERO X DIVISIBLE ENTRE OTRO NUMERO X" << endl << endl;
    
    cout <<"Digite los dos valores\nPrimer valor: "<<endl;
    cin >> x1;

    cout <<"Segundo valor: "<<endl;
    cin >> x2;

    
    txtanswer = (x1 % x2 ==0) ? " Es divisible " : " No es divisible "; // string = (formula)? si : no; 
    cout << x1 << txtanswer <<"entre: " <<x2<<endl;
    cout << endl;

    return 0;
} 