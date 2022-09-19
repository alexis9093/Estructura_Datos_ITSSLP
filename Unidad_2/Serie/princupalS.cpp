#include <iostream>
#include "Serie.h"
using namespace std;

int main(){
	int num,opc;
	Serie S(num);
	cout<<"Dame el numero para calcular la serie"<<endl;
	cin>>num;
	cout<<"Como deseas calcular la serie"<<endl;
	cout<<"1.Recursivo"<<endl;
	cout<<"2.Iterativo"<<endl;
	cin>>opc;
	switch(opc){
		case 1:cout<<"Recursivo"<<endl;
		for(int i=1; i<=num;i++){
			cout<<S.SerieR(i)<<" ";
		}
	    break;
	    case 2:cout<<"Iterativo"<<endl;
	    S.SerieI(num);
	    S.visualizar(num);
	}
	
}