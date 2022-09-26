#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int numeros[5];
int azar, promedio,suma,contador;

main(){
	system("cls");
	system("color 0F");
	
	contador = 0;
	suma = 0;
	
		for(int i = 0; i < 5; i++){
			azar = rand() % 9999;
			if(azar % 2 != 0){
				numeros[i] = azar;
				suma += numeros[i];
			}else{
				numeros[i] = azar+1;
				suma += numeros[i];
			}
		}
	
	contador = sizeof(numeros)/sizeof(numeros[0]); //calcular el numero de elementos que tiene un array
	promedio = suma/contador;
	cout<<"El promedio es: "<<promedio;
	
	
	
	getch();
}
