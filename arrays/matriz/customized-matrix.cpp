#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

main(){
	system("cls");
	system("color 0F");
	int rows,columns;
	
	cout<<"Ingrese el numero de filas: ";
	cin>>rows;
	cout<<"Ingrese el numero de columnas: ";
	cin>>columns;
	
	int matriz[rows][columns];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < columns; j++){
			cout<<"Posicion: "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
			cin>>matriz[i][j];
		}
	}
	
	system("cls");
	
	cout<<"Resultado de la matriz personalizada"<<endl<<endl;
	for(int i = 0; i < rows; i++){
		cout<<"\t";
		for(int j = 0; j < columns; j++){
			cout<<matriz[i][j]<<" \t";
		}
		cout<<"\n\n";
	}
	
	getch();
}
