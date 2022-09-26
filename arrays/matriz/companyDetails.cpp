#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

using namespace std;

main(){
	system("cls");
	system("color 0F");
	system("mode 650");
	
	// 3 filas, 3 columnas
	string datos[3][3];
	string name, mail,direcction;
	
	for(int i = 0; i < 3; i++){
		cout<<"Empresa: ";
		getline(cin,name);
		cout<<"Email: ";
		getline(cin,mail);
		cout<<"Direccion: ";
		getline(cin,direcction);
		datos[i][0] = name;
		datos[i][1] = mail;
		datos[i][2] = direcction;
		fflush(stdin);
		system("cls");
	}
	
	cout<<"Espere...";
	Sleep(1500);
	system("cls");
	
	cout<<"------------------ MOSTRANDO DATOS REGISTRADOS ------------------------"<<endl;
	for(int i = 0; i < 3; i++){
		for(int  j = 0; j < 3; j++){
			cout<<datos[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	getch();
}

