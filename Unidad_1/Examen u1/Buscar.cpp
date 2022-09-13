#include "Examen.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc,char*arg[]){
	int c, opc,opc2;
	cout<<"Programa que muestra los numeros pares, impares y multiplos de tres"<<endl;
	cout<<"Cuantos datos deseas ingresar: "<<endl;
	cin>>c;
	
	Examen N(c);
	
	N.setA1();

	do{
		cout<<"++MENU++"<<endl;
		cout<<"1.Buscar los numeros Pares"<<endl;
		cout<<"2.Bucar los numeros impares"<<endl;
		cout<<"3.Bucar los numeros multiplos de tres"<<endl;
		cout<<"Selecciona una opcion:"<<endl;
		cin>>opc;
		switch(opc){
			case 1:cout<<"++PARES++"<<endl;
			N.buscarP();
			break;
			case 2:cout<<"++IMPARES++"<<endl;
			N.buscarI();
			break;
			case 3:cout<<"++MULTIPLOS DE 3"<<endl;
			N.BuscarM3();
			break;
		}
		cout<<"Si deseas regresar al menu presiona 1"<<endl;
		cin>>opc2;
		system("cls");
	}while(opc2==1);
 getchar();
 system("pause");
 return 0;
}