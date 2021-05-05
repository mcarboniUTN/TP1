#include <iostream>
using namespace std;

int main() {
	
	float mx1,mx2,n1,n2,mau,nau,x,y;
	
	cout<<"Ingrese la pendiente de la primer recta: ";
	cin>>mx1;
	cout<<"Ingrese la ordenada al origen de la primer recta: ";
	cin>>n1;
	cout<<"Ingrese la pendiente de la segunda recta: ";
	cin>>mx2;
	cout<<"Ingrese la ordenada al origen de la segunda recta: ";
	cin>>n2;
	
	//Misma pendiente//
if(mx1==mx2&&n1!=n2){

cout<<"No hay interseccion, son paralelas.";
}
	
	//Todo igual//
else if(mx1==mx2&&n1==n2){
	
	cout<<"Las dos rectas son iguales, tienen infinitos puntos de interseccion.";
}
	//Todo diferente//
else{
	mau=mx1-mx2;
	nau=n2-n1;
	x=nau/mau;
	y=(mx1*x)+n1;
		
	cout<<"La recta intersecta en X="<<x<<" "<<"Y="<<y;
	
	
}

	
	return 0;
}
