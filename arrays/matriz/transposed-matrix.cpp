#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

main(){
	system("cls");
	system("color 0F");
	int rows,columns,op;
	
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
	
	cout<<"\nDeseas ver la matriz transpuesta?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cout<<"Opcion: ";
	cin>>op;
	if(op==1){
		system("cls");
		cout<<"Resultado de la matriz transpuesta"<<endl<<endl;
		for(int i = 0; i < columns; i++){
			cout<<"\t";
			for(int j = 0; j < rows; j++){
				cout<<matriz[j][i]<<" \t";
			}
			cout<<"\n\n";
		}
	}
	
	getch();
}
