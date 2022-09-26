#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

main(){
	int matriz[3][3];
	system("color 0F");
	
	cout<<"Matriz 3x3"<<endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Posicion: "<<"["<<i<<"]"<<"["<<j<<"]"<<": ";
			cin>>matriz[i][j];
		}
	}
	
	system("cls");
	
	cout<<"Mostrando la matriz cuadrada"<<endl<<endl;
	for(int i = 0; i < 3; i++){
		cout<<"\t";
		for(int j = 0; j < 3; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
}
