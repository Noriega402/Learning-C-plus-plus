// Ejemplo de estructuras
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//creando una estructura
struct Persona{
	char nombre[20];
	int edad;
} persona1 = {"Daniel",20}, persona2 = {"Melany",20}; // creadno variables del struct

main(){
	
	//mostrando datos de la persona
	cout<<"Nombre: "<<persona1.nombre<<"\tEdad: "<<persona1.edad<<endl;
	cout<<"Nombre: "<<persona2.nombre<<"\tEdad: "<<persona2.edad<<endl;
	
	getch();
}
