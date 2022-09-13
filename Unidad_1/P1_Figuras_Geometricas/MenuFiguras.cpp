#include "Figuras.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{
	Figuras F;
	int opc=0,opc2=0;
	float l1, l2, l3, nl, area, perimetro, altura;
	do{
		cout<<"++Menu++"<<endl;
		cout<<"1.Rectangulo"<<endl;
		cout<<"2.Triangulo"<<endl;
		cout<<"3.Poligono"<<endl;
		cout<<"4.Circulo"<<endl;
		cout<<"5.Cuadrado"<<endl;
		cout<<"Seleccione una opcion"<<endl;
		cin>>opc;
		system("cls");
		switch(opc)
		{
			case 1:cout<<"++Rectangulo++"<<endl;
			cout<<"Deme la base "<<endl;
			cin>>l1;
			cout<<"Dame la altura"<<endl;
			cin>>l2;
			if(l1>0 && l2>0){
				F.setlado1(l1);
			F.setlado2(l2);
			F.calcularAR();
			F.calcularPR();
			F.visualizar();
			}else{
				cout<<"Debes ingresar numeros mayores a cero"<<endl;
			}
			
			break;
			case 2:cout<<"++Triangulo++"<<endl;
			cout<<"Dame la base"<<endl;
			cin>>l1;
			cout<<"Dame el lado a1"<<endl;
			cin>>l2;
			cout<<"Dame el lado a2"<<endl,
			cin>>l3;
			if(l1>0 && l2>0 && l3>0){
			F.setlado1(l1);
			F.setlado2(l2);
			F.setlado3(l3);
			F.calcularHt();
			F.calcularAt();
			F.calcularPt();
			F.visualizart();	
			}
			break;
			case 3:cout<<"++Poligono++"<<endl;
			cout<<"Dame el numero de lados "<<endl;
			cin>>nl;
			cout<<"Dame el lado"<<endl;
			cin>>l1;
			if(nl>=3 && l1>0){
			F.setlado1(l1);
			F.setnumeroL(nl);
			F.calcularAn();
			F.calcularap();
			F.calcularAp();
			F.calcularPp();
			F.visualizarp();	
			}else{
				cout<<"No se pueden ingresar numeros negativo o un numero menor a 3"<<endl;
			}
			break;
			case 4:cout<<"++Circulo++"<<endl;
			cout<<"Dame el radio"<<endl;
			cin>>l1;
			if(l1>0){
			F.setlado1(l1);
			F.calcularAc();
			F.calcularPc();
			F.visualizarc();	
			}else{
				cout<<"No se pueden ingresar numeros negativo"<<endl;
			}	
			break;
			case 5: cout<<"++Cuadrado++"<<endl;
			cout<<"Dame el lado:"<<endl;
			cin>>l1;
			if(l1>0){
			F.setlado1(l1);
			F.calcularAcu();
			F.calcularPcu();
			F.visualizaruc();	
			}else{
				cout<<"No se pueden ingresar numeros negativo"<<endl;
			}
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
 