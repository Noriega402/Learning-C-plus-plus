// Ejemplo de estructuras anidadas
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include <stdio.h>

using namespace std;

struct Notas{
	float punteo[5];
	float promedio;
};

//creando una estructura anidada
struct Alumno{
	char nombre[30];
	int edad;
	struct Notas punteo; //agregar estructura dentro de otra
	char grado[30];
}alumno; // creando variable del struct

main(){
	int i, limit;
	
	system("cls");
	system("color 0F");
	
//	cout<<"Tamanio de array: "<<sizeof(note)/sizeof(note[0]);
	
	// Pedir datos de la persona
	cout<<"Escribe el nombre del alumno: ";
	cin.getline(alumno.nombre,30,'\n');
	fflush(stdin); // liberar espacio de memoria
	cout<<"Digita la edad del alumno: ";
	cin>>alumno.edad;
	fflush(stdin);
	cout<<"Digita el grado del alumno: ";
	cin.getline(alumno.grado,30,'\n');
	fflush(stdin);
	
	//calcular el tamaño del array
	// da la cantidad en bytes
	limit = sizeof(alumno.punteo.punteo)/sizeof(alumno.punteo.punteo[0]);
	
	system("cls");
	
	cout<<"Ingrese las notas del alumno"<<endl;
	for(i = 0; i < limit; i++){
		cout<<"Nota "<<i+1<<": ";
		cin>>alumno.punteo.punteo[i];
		alumno.punteo.promedio += alumno.punteo.punteo[i];
	}
	
	system("cls");

	// Mostrando datos ingresados de la persona
	cout<<"--------- REGISTRO DE ALUMNO ---------"<<endl;
	cout<<"Nombre: "<<alumno.nombre<<endl;
	cout<<"Edad: "<<alumno.edad<<endl;
	cout<<"Grado: "<<alumno.grado<<endl<<endl;
	cout<<"Notas del alumno"<<endl;
	for(i = 0; i < limit; i++){
		cout<<"Nota "<<i+1<<": "<<alumno.punteo.punteo[i]<<endl;
	}
	cout<<"\nEl promedio del alumno fue de: "<<alumno.punteo.promedio/limit;
	if(alumno.punteo.promedio/limit >= 61)
		cout<<"\nAPROVADO";
	else
		cout<<"\nREPROBADO";
	
	getch();
}
