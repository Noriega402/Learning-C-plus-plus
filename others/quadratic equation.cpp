#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath> // pow(), sqrt()
#include <conio.h>

using namespace std;

int a,b,c;

float res1,res2;
float op1,op2,op3,op4,deno;

float dosRespuestas(float x);
float unaRespuesta(float x);

main(){
	system("cls");
	system("color 0F");
	
	cout<<"---------------- FORMULA CUADRATICA ----------------"<<endl;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	cout<<"Ingrese el valor de c: ";
	cin>>c;
	
	if(a == 0){
		cout<<"\"a\" no puede ser 0";
	}else if(a < 0 || a > 0){
		op1 = pow(b,2);
		op2 = (4*(a)*(c));
		op3 = op1-op2;
		
		if(op3 < 0){
			cout<<"No existe solucion al ejercicio...";
		}else if(op3 > 0 ){
			dosRespuestas(op3);
		}else if(op3 == 0){
			unaRespuesta(op3);
		}
	}
	
	getch();
}

float dosRespuestas(float x){
	op4 = sqrt(x);
	deno = 2*a;
	res1 = (-(b)+op4)/deno;
	res2 = (-(b)-op4)/deno;
	cout<<"El ejercicio tiene dos soluciones"<<endl;
	cout<<"Respuesta 1: "<<res1<<endl;
	cout<<"Respuesta 2: "<<res2<<endl;	
}

float unaRespuesta(float x){
	op4 = sqrt(op3);
	deno = 2*a;
	res1 = (-(b))/deno;
	cout<<"El ejercicio tiene una solucion"<<endl;
	cout<<"Respuesta: "<<res1<<endl;
}
