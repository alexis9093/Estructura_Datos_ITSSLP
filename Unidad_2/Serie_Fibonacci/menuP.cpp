#include "Potencia.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	Potencia P;
	int b, e, opc, opc2;
	do{
	cout<<"Programa para calcular la potencia de un numero"<<endl;
	cout<<"Ingresa la base"<<endl;
	cin>>b;
	cout<<"Ingresa el exponente"<<endl;
	cin>>e;
	cout<<"con que metodo deseas hacer la operacion"<<endl;
	cout<<"1.Recursiva"<<endl;
	cout<<"2.Iterativa"<<endl;
	cin>>opc;
	switch(opc){
		case 1:cout<<"++Recurva++"<<endl;
		P.potenciaRecursiva(b,e);
	    P.visualizar();
	    break;
	    case 2:cout<<"++Iterativa++"<<endl;
	    P.potenciaIterativa(b,e);
    	P.visualizar();
    	break;
	}
	cout<<"Presione 1 si quiere ir al inicio: ";
	cin>>opc2;
	system("cls");
	}while(opc2==1);
	
 getchar();
 system("pause");
 return 0;
}