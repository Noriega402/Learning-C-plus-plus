// Rellenar un vector con numeros, pero ignorar los repetidos
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int arr[] = {};

bool revision(int num, int i);

main(){
	system("cls");
	system("color 0F");
	int i, size, num;
	
	cout<<"Digite el numero del arreglo: ";
	cin>>size;
	for(i = 0; i < size; i++){
		cout<<"Ingrese un numero: ";
		cin>>num;
		
		while(revision(num,i)){
			cout<<"El numero ya esta dentro del array"<<endl;
			cout<<"Digite otro numero: ";
			cin>>num;
		}
		arr[i] = num;
	}
	
	system("cls");
	cout<<"Numeros dentro del array"<<endl;
	for(i = 0; i < size; i++){
		cout<<arr[i]<<endl;
	}
	
	getch();
}

bool revision(int num, int i){
	for(int x = 0; x < i; x++){
		if(num == arr[x]){
			return true;
		}
	}
	return false;
}
