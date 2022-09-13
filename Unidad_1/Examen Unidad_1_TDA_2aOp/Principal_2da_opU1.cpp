#include "ExamenU1.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
	Fecha F;
	int d, m, a, dc, mc, ac;
	cout<<"Fecha"<<endl;
	cout<<"Ingresa la fecha"<<endl;
	cout<<"Dia: ";
	cin>>d;
	cout<<"Mes: ";
	cin>>m;
	cout<<"Ano: ";
	cin>>a;
	if(d<=31 && m<=12 && a<=9999){
		F.setdia(d);
		F.setmes(m);
		F.setannio(a);
		F.vizualizarFecha();
	    cout<<"Ingresa la fecha de cumpleanos"<<endl;
	    cout<<"Dia: ";
	    cin>> dc;
	    cout<<"Mes: ";
	    cin>>mc;
	    cout<<"Ano: ";
	    cin>>ac;
	if(dc<=31 && mc<=12 && ac<=9999){
	    F.setdiaC(dc);
	    F.setmesC(mc);
	    F.setannioC(ac);
	    F.compararFecha();
    }else{
    	cout<<"No esxiste esa fecha"<<endl;
	}
	}else {
		cout<<"No esxiste esa fecha"<<endl;
	}
	
 getchar();
 system("pause");
 return 0;
}