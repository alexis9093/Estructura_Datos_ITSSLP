#include <cstdlib>
#include <iostream>
using namespace std;

class Potencia{
	private :
		int p;
	public:
		Potencia(){p=0;}
		int potenciaRecursiva(int x, int n);
		int potenciaIterativa(int x, int n);
		void visualizar();
};
int Potencia::potenciaRecursiva(int x, int n)
{
	if(n==0)
	{
		return p=1;
	}else
	return p=x*potenciaRecursiva(x, n-1);
}
int Potencia::potenciaIterativa(int x, int n)
{
	p=1;
	for(int i=0; i<n; i++){
		p=p*x;
	}
	return p;
}
void Potencia::visualizar(){
	cout<<"La potencia es= "<<p<<endl;
}
