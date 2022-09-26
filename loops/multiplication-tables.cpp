#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int numero;

main(){
	system("cls");
	system("color 0F");
	
	cout<<"IMPRIMIR TABLA DE MULTIPLICAR"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	if(numero < 11){
		for(int i = 1; i <= 10; i++){
			cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
		}
	}else{
		for(int i = 1; i <= numero; i++){
			cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
		}
	}
	
	getch();
}
