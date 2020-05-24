#include "iostream"
#include "string"

using namespace std;

int main()
{
   
   string producto;
   float precio,total;
   int cantidad;
   cout<< "ingrese el nombre del producto: "<<endl;
   cin>> producto;
   cout<< "ingrese el precio"<<endl;
   cin>> precio;
   cout<< "ingrese la cantidad del prodcuto"<<endl;
   cin>> cantidad;
   total=cantidad*precio;
   cout<<"nombre del producto a pagar: "<<producto<<"\ncantidad: "<<cantidad<<endl;
   cout<< "compra realizada exitosamente por un total de: $"<<total<<" gracias por su compra. "<<endl;

}