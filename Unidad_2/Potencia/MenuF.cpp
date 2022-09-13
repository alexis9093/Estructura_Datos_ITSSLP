#include "Fibonacci.h"
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int n, opc;
	Fibonacci F;
	cout<<"De cuanto quieres que sea la serie: "<<endl;
	cin>>n;
	cout<<"Con que metodo quieres realizar la operacion"<<endl;
	cout<<"1.Recursivo"<<endl;
	cout<<"2.Iterativo"<<endl;
	cin>>opc;
	switch(opc){
		case 1:cout<<"++Recursivo++"<<endl;
		F.fiboR(n);
	    cout<<"La secuencia es: "<<endl;
		for(int i=1; i<=n;i++){
			cout<<F.fiboR(i)<<" ";
		}
		break;
		case 2:cout<<"++Iterativo++"<<endl;
		F.fiboI(n);
		break;
	}
	
	
}