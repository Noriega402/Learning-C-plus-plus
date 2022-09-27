#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h> // gotoXY

using namespace std;

int dia,mes,anio;
string months[] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

void gotoxy(int x,int y);
void getDate();
int showDate(int d,int m,int y);

main(){
	system("cls");
	system("color 0F");
	
	getDate(); //Pedir datos de fecha
	
	getch();
}

void gotoxy(int x,int y){  
	HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos; 
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}

void getDate(){
	cout<<"Digite la fecha (Dia/Mes/Anio): ";
	gotoxy(34,0); cout<<"/";
	gotoxy(37,0); cout<<"/";
	
	gotoxy(32,0); cin>>dia;  	
	gotoxy(35,0); cin>>mes;
	gotoxy(38,0); cin>>anio;
	
	showDate(dia,mes,anio); //mostrar en nuevo formato la fecha
}

int showDate(int d,int m,int y){
	if(d < 1 || d > 31){
		cout<<"fecha no valida (Dia)";
	}else if(m < 0 || m > 12){
		cout<<"fecha no valida (Mes)";
	}else if(d > 29 && m == 2){
		cout<<"Error febrero no tiene mas de 29 dias...";
	}else{
		cout<<"\nFecha: "<<d<<" de "<<months[m-1];
		cout<<" de "<<y;	
	}
}
