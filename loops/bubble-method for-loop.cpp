#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int arr[5];
int aux,i,j;

main(){
	system("cls");
	system("color 0F");
	
	for(i = 0; i < 5; i++){
		cout<<"Ingrese el valor "<<i+1<<": ";
		cin>>arr[i];
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(arr[j] > arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
	system("cls");
	
	cout<<"Orden Ascendente: ";
	for(i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
//		cout<<"Index ["<<i<<"]: "<<arr[i]<<endl;
	}

	cout<<"\nOrden Descendente: ";
	for(i = 5; i > 0; i--){
		cout<<arr[i-1]<<" ";
//		cout<<"Index ["<<i-1<<"]: "<<arr[i]<<endl;
	}
	
	getch();	
}
