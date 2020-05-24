#include "iostream"
#include "cmath"

using namespace std;

int main()
{   
    float a,b,c,x1,x2,result;
    
    cout<<"ingrese las cifras de: a,b y c para la formula cuadratica"<< endl;
    cin>>a>>b>>c;
    result=(sqrt(pow(b,2)-4*a*c));
    x1=((b+result)/(2*a));
    x2=((b-result)/(2*a));
    cout<<"las dos posibles respuestas son\n x1= " <<x1<<endl;
    cout<<" x2= "<<x2<<endl;
    
}