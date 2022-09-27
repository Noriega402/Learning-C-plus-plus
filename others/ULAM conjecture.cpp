#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;
int numero;

main(){
	system("cls");
	system("color 0F");
	
	do{
		cout<<"Digite un numero para la conjetura de ULAM: ";
		cin>>numero;
		if(numero <= 0){
			cout<<"Error, el numero debe de ser positivo...";
			getch();
			system("cls");
		}
	}while(numero <= 0);
	
	cout<<"\n";
	
	do{
		if(numero % 2 == 0){
			cout<<numero<<"/2 = ";
			numero = numero/2;
			cout<<numero<<endl<<endl;
		}else{
			cout<<numero<<"x3+1 = ";
			numero = (numero*3)+1;
			cout<<numero<<endl<<endl;
			cout<<numero<<"/2 = ";
			numero = numero/2;
			cout<<numero<<endl<<endl;
			
		}
	}while(numero != 1);
	
	getch();
}
