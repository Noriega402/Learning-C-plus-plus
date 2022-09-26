// Rellenar matriz de 10 * 10 con numeros aleatorios entre 1 y 0
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;
//matriz[filas][columnas]
int matriz[10][10];
int random;

main(){
	system("cls");
	system("color 0F");

	for(int fila = 0; fila < 10; fila++){//vuelta por cada fila
		for(int columna = 0; columna < 10; columna++){//vuelta por cada columna
			random = rand() % 2;
			matriz[fila][columna] = random;
			cout<<matriz[fila][columna]<<" ";
		}
		cout<<endl;
	}	
	getch();
}
