#include <cstdlib>
#include <iostream>

using namespace std;

class Fecha
{
	private:
		int dia;
		int mes;
		int annio;
		int diaC;
		int mesC;
		int annioC;
	public:
		Fecha(){dia=0; mes=0; annio=0; }
		void setdia(int d);
		void setmes(int m);
		void setannio(int a);
		void setdiaC(int dc);
		void setmesC(int mc);
		void setannioC(int ac);
		void vizualizarFecha();
		void compararFecha();
};

void Fecha::setdia(int d){
	dia=d;
}
void Fecha::setmes(int m){
	mes=m;
}
void Fecha::setannio(int a){
	annio=a;
}
void Fecha::setdiaC(int dc){
	diaC=dc;
}
void Fecha::setmesC(int mc){
	mesC=mc;
}
void Fecha::setannioC(int ac){
	annioC=ac;
}
void Fecha::vizualizarFecha(){
	cout<<"Fecha: "<<dia<<"/"<<mes<<"/"<<annio<<endl;
}
void Fecha::compararFecha(){
	if(dia==diaC && mes==mesC){
		cout<<"YEIIIIII hoy es tu cumpleanos!!!!;) "<<endl;
	}else{
		cout<<"Chales no es tu cumpleanos :("<<endl;
	}
}

