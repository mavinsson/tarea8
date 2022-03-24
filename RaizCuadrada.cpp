#include<iostream>
#include <math.h>

using namespace std;

void RaizCuadrada()
{
	float opcion = 0; 
	float resultado = 0;
	
	cout<<"raiz cuadrada"<<endl;
	
	cout<<"Ingrese el numero: "<<endl;
	cin>>opcion;
	
	resultado = sqrt(opcion);
	
	cout<<"el resultado es: "<<resultado<<endl;
	system("pause");
}
