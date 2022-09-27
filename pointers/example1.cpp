// Punteros -  Declaracion de punteros
// &n = la direccion de n (direccion donde esta la variable)
// *n = la variable que va a almacenar la direccion donde almacenada en n

#include <iostream>
#include <conio.h>

using namespace std;


main(){
	system("cls");
	system("color 0F");
	
	int numero;
	int *direccionPuntero; //creando un puntero (va a guardar la direccion de memoria de una variable

	numero = 20;
	direccionPuntero = &numero; //guardando la direccion de memoria de una variable (&, en donde esta almacenada)
	
//	IMPRIMIENDO VALORES SIN PUNTERO
	cout<<"Numero: "<<numero<<endl;
	cout<<"Direccion de memoria: "<<&numero<<endl; // mostrando donde se esta guardando la variable
	
// IMPRIMIENDO VALORES CON PUNTERO
	cout<<"\nNumero: "<<*direccionPuntero<<endl; // mostrando el o los valores que tiene un puntero (*)
	cout<<"Direccion de memoria: "<<direccionPuntero<<endl; // mostrando donde se esta guardando la variable
	
	getch();
}
