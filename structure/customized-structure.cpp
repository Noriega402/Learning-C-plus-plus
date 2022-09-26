// Ejemplo No. 2 de estructuras
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//creando una estructura
struct Persona{
	char nombre[30];
	int edad;
}persona; // creando variable del struct

main(){
	
	// Pedir datos de la persona
	cout<<"Escribe tu nombre: ";
	cin.getline(persona.nombre,30,'\n');
	cout<<"Digita tu edad: ";
	cin>>persona.edad;

	system("cls");
	
	// Mostrando datos ingresados de la persona
	cout<<"--------- REGISTRO ---------"<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Edad: "<<persona.edad<<endl;
	
	getch();
}
