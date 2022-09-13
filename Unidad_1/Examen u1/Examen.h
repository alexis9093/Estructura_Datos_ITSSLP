#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Examen{
	private:
		int *A1;
		int n, i;
	public:
		Examen(int num){n=num; A1=new int[num];}
		void setA1();
		void buscarP();
		void buscarI();
		void BuscarM3();
		void Liberar();	
};

void Examen::setA1(){
	cout<<"Captura los "<<n<<" datos;"<<endl;
	for(int i=0; i<n; i++){
		cin>>A1[i];
	}
}
void Examen::buscarP(){
	cout<<"Los numeros pares son:"<<endl;
	for(int i=0; i<n; i++){
		if(A1[i]%2==0){	
		cout<<A1[i]<<endl;
		}
	}
}
void Examen::buscarI(){
	cout<<"Los numeros pares son:"<<endl;
	for(int i=0; i<n; i++){
		if(A1[i]%2!=0){
		cout<<A1[i]<<endl;	
		}
	}
}
void Examen::BuscarM3(){
	cout<<"Los numeros que son multilos de 3"<<endl;
	for(int i=0; i<n; i++){
		if(A1[i]%3==0){
			cout<<A1[i]<<endl;
		}
	}
}
