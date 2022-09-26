// numeros aleatorios entre 75 y 150
// Por cada fila se deben ordenar de menor a mayor
#include <iostream>
#include <stdlib.h> // srand y rand()
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>   //setw()

using namespace std;
int row, column, r, c, random, suma, aux;
int matriz[20][20];

void generarNumeros();
void showMatriz();
void ordenar();

main(){
	system("cls");
	system("color 0F");
	
	generarNumeros();
	cout<<"------------------------- MOSTRANDO MATRIZ DESORDENADA -------------------------"<<endl<<endl;
	showMatriz();
	
	cout<<"\nOrdenando filas de menor a mayor"<<endl;
	cout<<"Espere..."<<endl;
	Sleep(1500);
	
	ordenar();
	cout<<"------------------------ MOSTRANDO MATRIZ ORDENADA POR FILAS (HORIZONTALES) -------------------------"<<endl<<endl;
	showMatriz();
	cout<<"\nLa suma de los numeros de la matriz es: "<<suma;
	
	getch();
}

void generarNumeros(){
	srand (time(NULL));
	for(row = 0; row < 20; row++){
		for(column = 0; column < 20; column++){
			random = 75+rand() % (150-75);
			matriz[row][column] = random;
			suma += matriz[row][column];
		}
	}
}

void ordenar(){
	for(row = 0; row < 20; row++){
		for(column = 0; column < 20; column++){
			for(c = 0; c < column; c++){
				if(matriz[row][c] > matriz[row][column]){
					aux = matriz[row][column];
					matriz[row][column] = matriz[row][c];
					matriz[row][c] = aux;
				}
			}
		}
	}
}

void showMatriz(){
	for(row = 0; row < 20; row++){
		for(column = 0; column < 20; column++){
			cout<<matriz[row][column]<<setw(5);
		}
		cout<<endl;
	}
}
