// comprobar si un numero es par o impar por medio de punteros, Ademas señalar la posicion de memoria donde estan
// almacenados los mismos. 
#include <iostream>
#include <conio.h>

using namespace std;
int num;
int *puntero;

int calcular(int &num);

main(){
	system("cls");
	system("color 0F");
	
	cout<<"Dame un numero: ";
	cin>>num;
	
	calcular(num);

	getch();
}

int calcular(int &num){

	puntero = &num;
	
	if(*puntero % 2 == 0){
		cout<<"Es par"<<endl;
		cout<<"La posicion del puntero es: "<<puntero<<endl;
		cout<<"El numero almacenado dentro del puntero es: "<<*puntero<<endl;
	}else{
		cout<<"Es impar"<<endl;
		cout<<"La posicion del puntero es: "<<puntero<<endl;
		cout<<"El numero almacenado dentro del puntero es: "<<*puntero<<endl;
	}
}
