#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int arr[] = {24,10,20,39,40};
int aux,i,j;

main(){
	system("cls");
	system("color 0F");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(arr[j] > arr[j+1]){
				aux = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden Ascendente:";
	for(i = 0; i < 5; i++){
		cout<<arr[i+1]<<" ";
	}

	getch();	
}
