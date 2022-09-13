#include "Numeros.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc,char*arg[]){
	int c;
	cout<<"Programa que muestra la posicion de un numero"<<endl;
	cout<<"Cuantos datos deseas ingresar: "<<endl;
	cin>>c;
	
	Numeros Bus(c);
	
	Bus.setA1();
	Bus.buscarNumero();

	getchar();
    system("pause");
    return 0;
}