#include <cstdlib>
#include <iostream>
using namespace std;

class Fibonacci{
	private:
		int c,y,z;
	public:
		Fibonacci(){c=0;y=1;z=1;}
		int fiboR(int x);
		int fiboI(int x);
		
};
int Fibonacci::fiboR(int x){
	if(x==1 ||x==2){
		return 1;
	}
	return fiboR(x-1)+fiboR(x-2);
}
int Fibonacci::fiboI(int x){
	
	for(int i;i<x;i++){
		cout<<z<<" ";
		z=c+y;
		c=y;
		y=z;
	}
	return z;
}