// validar numero primo
#include <iostream>
#include <conio.h>

using namespace std;
int num,op,i,counter;

void pedirNumero();
void calcular();

main(){
	system("cls");
	system("color 0F");
	
	while(op != 2){
		pedirNumero();
		calcular();
		if(counter > 2) cout<<"No es primo";
		else cout<<"Es primo";
		getch();
		system("cls");
		cout<<"Deseas verificar otro numero?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. No"<<endl;
		cout<<"Digite una opcion: ";
		cin>>op;
		system("cls");
	}
	
	getch();
}

void pedirNumero(){
	cout<<"Dame un numero: ";
	cin>>num;
}

void calcular(){
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			counter++;
		}
	}
}

