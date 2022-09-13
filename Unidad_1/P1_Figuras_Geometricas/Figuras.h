#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class Figuras
{
	private:
		float lado1, lado2, lado3, area, perimetro,altura, apotema, angulo, numeroL;		
	public:
	    Figuras(){ lado1=0; lado2=0; lado3=0; area=0; perimetro=0;}
	    void visualizar();
	    void visualizarp();
	    void visualizart();
	    void visualizarc();
	    void visualizaruc();
		void setlado1(float l1);
		void setlado2(float l2);
		void setlado3(float l3);
		void setnumeroL(float nl);
		void calcularHt();
		void calcularAR();
		void calcularPR();
		void calcularAt();
		void calcularPt();
		void calcularap();
		void calcularAn();
		void calcularAp();
		void calcularPp();
		void calcularAc();
		void calcularPc();
		void calcularAcu();
		void calcularPcu();		
};
void Figuras::visualizar(){
	cout<<"Base: "<< lado1<<endl;
	cout<<"Altura: "<<lado2<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
}
void Figuras::visualizart(){
	cout<<"Base: "<< lado1<<endl;
	cout<<"Lado a1: "<<lado2<<endl;
	cout<<"Lado a2: "<<lado3<<endl;
	cout<<"altura: "<<altura<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
}
void Figuras::visualizarc(){
	cout<<"Radio: "<<lado1<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
}
void Figuras::visualizarp(){
	cout<<"Lado: "<<lado1<<endl;
	cout<<"Numero de lados: "<<numeroL<<endl;
	cout<<"Angulo; "<<angulo<<endl;
	cout<<"Apotema; "<<apotema<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
}
void Figuras::visualizaruc(){
	cout<<"Lado: "<<lado1<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimetro: "<<perimetro<<endl;
}
void Figuras::setlado1(float l1){
	lado1 = l1;
}
void Figuras::setlado2(float l2){
	lado2 = l2;
}
void Figuras::setlado3(float l3){
	lado3 = l3;
}
void Figuras::setnumeroL(float nl){
	numeroL=nl;
}
void Figuras::calcularAR(){
	area= lado1*lado2;
}
void Figuras::calcularPR(){
	perimetro=2*lado1+2*lado2;
}
void Figuras::calcularHt(){
	altura=sqrt(pow(lado2,2)-(pow(lado1,2)/4));
}
void Figuras::calcularAt(){
	area=lado1*altura/2;
}
void Figuras::calcularPt(){
	perimetro=lado1+lado2+lado3;
}
void Figuras::calcularAn(){
	angulo=(360/numeroL);
}
void Figuras::calcularap(){
	apotema= (lado1/2*(std::tan(angulo)));
}
void Figuras::calcularAp(){
	area=(lado1*numeroL*apotema)/2;
}
void Figuras::calcularPp(){
	perimetro=numeroL*lado1;
}
void Figuras::calcularAc(){
	area = 3.1416*(lado1*lado1);
}
void Figuras::calcularPc(){
	perimetro=2*(3.1416)+lado1;
}
void Figuras::calcularAcu(){
	area=lado1*lado1;
}
void Figuras::calcularPcu(){
	perimetro=lado1+lado1+lado1+lado1;
}

