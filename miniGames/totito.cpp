// ------- JUEGO DE TOTITO -----
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

char matriz[3][3];
int x, y, contador, tiros;


struct Jugador{ // estructura para pedir nombre de los jugadores
	char nombre[30];
}player[2];

void gotoxy(int x,int y); // para dar coordenadas
void registrarJugadores(); // pedir los nombres de los jugadores
void iniciarMatriz(); // matriz sin valores
void esqueleto(); // rayas del totito
void dibujarMatriz(); // imprimir matriz

main(){
	system("cls");
	system("color 0F");
	tiros = 1;

	registrarJugadores();
	iniciarMatriz();
	esqueleto();
	dibujarMatriz();
	
	while(tiros <= 9){
		
		if(tiros % 2 == 0){
			gotoxy(1,18); cout<<"Turno de "<<player[0].nombre<<endl;
		}else{
			gotoxy(1,18); cout<<"Turno de "<<player[1].nombre<<endl;
		}
		gotoxy(1,19); cout<<"Columna: ";
		cin>>x;
		if(x >= 0 && x <= 2){
			gotoxy(1,20); cout<<"Fila: ";
			cin>>y;
			
			if(y >= 0 && y <= 2){
				if(tiros % 2 == 0){
					matriz[x][y] = 'X';
				}else{
					matriz[x][y] = 'O';
				}
				tiros++;
				system("cls");
				esqueleto();
				dibujarMatriz();
			}else{
				cout<<"Fila invalida"<<endl;
				cout<<"Intente de nuevo";
				getch();
				system("cls");
			}
		}else{			
			cout<<"Columna invalida"<<endl;
			cout<<"Intente de nuevo";
			getch();
			system("cls");
			esqueleto();
			dibujarMatriz();
		}
		
	}

	
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

void registrarJugadores(){
	for(int i = 0; i < 2; i++){
		cout<<"Jugador "<<i+1<<endl;
		cout<<"Dame tu nombre: ";
		cin.getline(player[i].nombre,30,'\n');
		system("cls");
	}
}

void iniciarMatriz(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			matriz[i][j] = '.';
		}
	}
}
void dibujarMatriz(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			
			gotoxy(i*10+40,j*5+3); cout<<matriz[i][j];
		}
	}
}

void esqueleto(){
	gotoxy(29,0); cout<<"Columna";
	gotoxy(29,16); cout<<"Fila";
	//posiciones numeros de filas y columnas
	for(int x = 0; x <= 2;x++){
		gotoxy(x*10+40,0); cout<<x;
	}
	for(int y = 0; y <= 2;y++){
		gotoxy(30,y*5+3); cout<<y;
	}
	
	
	//separador de X y Y
	for(int s1 = 28; s1 <= 66; s1++){
		gotoxy(s1,1); cout<<"-";
	}
	for(int s2 = 2; s2 <= 14; s2++){
		gotoxy(33,s2); cout<<"|";
	}
	
	
	// lineas verticales para totito
	for(int y1 = 3; y1<=13;y1++){
		gotoxy(45,y1); cout<<"|";
	}
	for(int y2 = 3; y2<=13;y2++){
		gotoxy(55,y2); cout<<"|";
	}
	
	// lienas horizontales para totito
	for(int x1 = 36; x1 <= 66; x1++){
		gotoxy(x1,6); cout<<"-";
	}
	for(int x1 = 36; x1 <= 66; x1++){
		gotoxy(x1,10); cout<<"-";
	}
}
