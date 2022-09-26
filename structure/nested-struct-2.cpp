// Ejemplo de estructuras anidadas
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;

//creando estructura
struct info_direccion{
	char direccion[50];
	char ciudad[30];
	char estado[30];
};

//creando una estructura anidada
struct empleado{
	char nombre[30];
	int edad;
	struct info_direccion dir_empleado; //agregar estructura dentro de otra
	float salario;
}empleados[2]; // creando variable del struct

main(){
	int i;
	
	system("cls");
	system("color 0F");
	
	// Pedir datos de la persona
	for(i = 0; i < 2; i++){
		fflush(stdin); // liberar espacio de memoria (buffer)
		cout<<"Escribe el nombre del empleado: ";
		cin.getline(empleados[i].nombre,30,'\n');
		fflush(stdin); // liberar espacio de memoria (buffer)
		cout<<"Digita la edad: ";
		cin>>empleados[i].edad;
		cout<<"Digita el salario: ";
		cin>>empleados[i].salario;
		fflush(stdin); // liberar espacio de memoria (buffer)
		cout<<"Digita la direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,50,'\n');
		cout<<"Digita la ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,30,'\n');
		cout<<"Digita el estado: ";
		cin.getline(empleados[i].dir_empleado.estado,30,'\n');
	}
	
	system("cls");
	

	// Mostrando datos ingresados de la persona
	for(i = 0; i < 2; i++){
		cout<<"--------- REGISTRO DE EMPLEADO ---------"<<endl;
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Edad: "<<empleados[i].edad<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<" ";
		cout<<empleados[i].dir_empleado.ciudad<<" "<<empleados[i].dir_empleado.estado<<endl<<endl;
	}
	
	getch();
}
