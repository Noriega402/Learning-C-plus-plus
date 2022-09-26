#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int numero,acumulador,res;

main(){
	system("cls");
	system("color 0F");
	
	acumulador = 1;
	
	cout<<"----------- FACTORIAL DE UN NUMERO -----------"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	for(int i = 2; i <= numero; i++){
		acumulador = acumulador*i;
	}
	
	cout<<"Respuesta: "<<acumulador;

	getch();
}
