// numeros aleatorios y contar las veces que se repiten (30 numeros)
#include <iostream>
#include <stdlib.h> // srand()
#include <time.h>
#include <conio.h>

using namespace std;
int arr[30];
int n, i,count, random;

void generarNumeros();
void showNumbers();
int searchNumber();
void response(int n);

main(){
	system("cls");
	system("color 0F");
	
	generarNumeros();
	showNumbers();
	response(searchNumber());
	
	getch();
}

void generarNumeros(){
	
	srand (time(NULL));

	for(i = 0; i < 30; i++){
		random = rand()% 10 + 1;
		arr[i] = random;
	}
}

void showNumbers(){
	cout<<"Numeros generados"<<endl;
	for(i = 0; i < 30; i++){
		cout<<arr[i]<<" ";
	}
}

int searchNumber(){
	cout<<"\n\nIngrese el numero a buscar en el array: ";
	cin>>n;
	return n;
}

void response(int n){
	for(i = 0; i < 30; i++){
		if(n == arr[i]) count++;
	}
	
	if(count > 0) cout<<"El numero "<<n<<" se repite "<<count<<" veces";
	else cout<<"El numero "<<n<<" no esta dentro del array";
}
