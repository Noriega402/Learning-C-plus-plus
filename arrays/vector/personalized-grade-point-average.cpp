#include <iostream>
#include <conio.h>

using namespace std;

main(){
	system("cls");
	system("color 0F");
	
	int num;
	float notas[5];
	float promedio, suma;
	
	cout<<"Ingrese un numero : ";
	cin>>num;
	
	cout<<"Ingrese las 5 notas del alumno"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"Ingrese nota "<<i+1<<": ";
		cin>>notas[i];
		suma += notas[i];
	}
	
	system("cls");
	promedio = suma/5;
	
	cout<<"Promedio de alumno: "<<promedio<<endl;
	if(promedio > 60)
		cout<<"APROVADO";
	else
		cout<<"REPROBADO";

	getch();
}
