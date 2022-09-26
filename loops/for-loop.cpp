// Practicas de ciclo "for"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int age[] = {};

main(){
	system("cls");
	system("color 0F");
	
	int i;
	int acumulador = 0;
	for(i = 0 ; i <= 100; i+=2){
		acumulador += i;
		cout<<"La suma de los numeros pares es: "<<acumulador<<endl;
	}
	
//	cout<<"La suma de los numeros pares es: "<<acumulador<<endl;
//	cout<<"\nValor acumulado en i es: "<<i;
	
	getch();
}
