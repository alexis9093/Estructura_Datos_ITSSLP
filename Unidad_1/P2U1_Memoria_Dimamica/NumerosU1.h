#include <cstdlib>
#include <iostream>
#include <new>
using namespace std;

class Numeros{
	private:
		int *A1;
		int n,i,n2;
	public:
		Numeros(int num) {n=num; A1=new int[num];}
		void setA1();
		void buscarNumero();
		void Liberar();
};

void Numeros::setA1(){
	cout<<"Captura los "<<n<<" datos: "<<endl;
	for(int i=0; i<n;i++){
	cin>>A1[i];
	}
}
void Numeros::buscarNumero(){
	bool encontro=false;
	int pos=0;
	cout<<"Ingresa el numero que deseas buscar"<<endl;
	cin>>n2;
	for(int i=0;i<n;i++){
		if(n2==A1[i]){
			encontro=true;
			pos=i;
			break;
	    } 
	}
	
	if(encontro==true)
	{
	cout<<"El numero "<<n2<< " esta en la posicion "<<pos<<endl;	
	}else{
	    	cout<<"no se encontro"<<endl;
		} 
	   
}
void Numeros::Liberar(){
	delete [] A1;
}
