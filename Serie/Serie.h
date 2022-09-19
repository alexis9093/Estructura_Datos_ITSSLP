#include <iostream>
#include <new>
using namespace std;
class Serie{
	private:
		double *A, ser;
	public:
		Serie(int n){ser=8;A=new double[n];}
		double SerieI(int n);
		double SerieR(int n);
		void visualizar(int n);
};
void Serie::visualizar(int n){
	for(int i=1;i<=n;i++){
		cout<<A[i]<<" ";
	}
}
double Serie::SerieI(int n){
	for(int i=1;i<=n;i++){;
		ser=ser-11;
		A[i]=ser;
	}
}
double Serie::SerieR(int n){

	if(n==1){
		return -3;
	}else{
	if(n>1){
	return SerieR(n-1)-11;
	}
	}
}