#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numEmployees,dayMonth;
float const igss = 0.0483;
float desIgss, desIsr;
float isr;

void getPrincipal();
float pedirDS(int employee, int days); //pedir datos de salarios y dias que trabajaron
float showDS(float sueldos[], int days[],int); // mostrar datos de salario y dias con faltas
void countEmployees(); //mostrar cuantos empleados hay
float showLiquid(float sueldos[],int); // mostrar el sueldo descontando isr e igss

main(){
	system("cls");
	system("color 0F");
	
	getPrincipal();
	
	getch();
}

void getPrincipal(){
	cout<<"Digite el numero de empleados: ";
	cin>>numEmployees;
	cout<<"Digite el total de dias del mes que se tienen que trabajar: ";
	cin>>dayMonth;
	pedirDS(numEmployees,dayMonth);
}
float pedirDS(int employee, int days){
	float sueldos[employee];
	int dayWork[employee];
	
	system("cls");
	
	for(int i = 0; i < employee; i++){
		cout<<"Digite el sueldo nominal del empleado "<<i+1<<": ";
		cin>>sueldos[i];
		cout<<"Digite los dias trabajados del mes del empleado "<<i+1<<": ";
		cin>>dayWork[i];
		
		while(dayWork[i] > days){
			
			cout<<"Error, los dias laborados no pueden ser mayores a los dias del mes..."<<endl;
			getch();	
			system("cls");
			cout<<"Digite los dias trabajados del mes del empleado "<<i+1<<": ";
			cin>>dayWork[i];
		}
		
		fflush(stdin);
		system("cls");
	}
	showDS(sueldos,dayWork,employee);
}
float showDS(float sueldos[], int days[],int size){
	cout<<"Diferencia de dias trabajados y totales: "<<endl;
	
	for(int i = 0; i < numEmployees; i++){
		days[i] = dayMonth - days[i];
		cout<<"Faltas: "<<days[i]<<"\t Sueldo: "<<sueldos[i]<<endl;
	}
	
	countEmployees();
	showLiquid(sueldos,size);
}
void countEmployees(){
	cout<<"\nEMPLEADOS REGISTRADOS: "<<numEmployees<<endl;
	cout<<"Enter para continuar...";
	getch();
	system("cls");
}
float showLiquid(float sueldos[],int size){
	cout<<"SUELDOS LIQUIDOS"<<endl;
	for(int i = 0; i < numEmployees; i++){
		desIgss = (sueldos[i]*igss);
		if(sueldos[i] > 30000){
			isr = 0.07;
			desIsr = sueldos[i]*isr;
			sueldos[i] = sueldos[i]-desIgss-desIsr;
			cout<<"Sueldo liquido empleado "<<i+1<<": "<<sueldos[i]<<endl;
		}else{
			isr = 0.05;
			desIsr = sueldos[i]*isr;
			sueldos[i] = sueldos[i]-desIgss-desIsr;
			cout<<"Sueldo liquido empleado "<<i+1<<": "<<sueldos[i]<<endl;
		}
		
	}
}
