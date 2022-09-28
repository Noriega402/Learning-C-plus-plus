// ------- JUEGO DE TOTITO -----
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

char matriz[3][3];
int x, y, contador, tiros, pos, validar, fin;

struct Jugador{ // estructura para pedir nombre de los jugadores
	char nombre[30];
}player[2];

void gotoxy(int x,int y); // para dar coordenadas
void registrarJugadores(); // pedir los nombres de los jugadores
void iniciarMatriz(); // matriz sin valores
void esqueleto(); // rayas del totito
void dibujarMatriz(); // imprimir matriz
void rellenar(int x, int y);
bool verificarPos(int p);
bool ganador();

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
		gotoxy(1,19); cout<<"Posicion: ";
		cin>>pos;
		system("cls");
		validar = verificarPos(pos);
		if(validar == 0){
			esqueleto();
			dibujarMatriz();
			gotoxy(1,20); cout<<"La posicion que ingresaste anteriormente ya esta ocupada...";
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
void rellenar(int x, int y){ //para saber si se pone "X" u "O"
	if(tiros % 2 == 0){
		matriz[x][y] = 'X';
		tiros++;
		esqueleto();
		dibujarMatriz();
		fin = ganador();
		if(fin == true) tiros = 10;
	}
	else{
		matriz[x][y] = 'O';
		tiros++;
		esqueleto();
		dibujarMatriz();
		fin = ganador();
		if(fin == true) tiros = 10;
	}
}
bool ganador(){ //verificar si hay ganador
	//horizontales
	//ganador de las X (primer jugador)
	if(matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz [2][0] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[0][1] == 'X' && matriz [1][1] == 'X' && matriz[2][1] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[0][2] == 'X' && matriz [1][2] == 'X' && matriz[2][2] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	
	//verticales
	if(matriz[0][0] == 'X' && matriz [0][1] == 'X' && matriz[0][2] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[1][0] == 'X' && matriz [1][1] == 'X' && matriz[1][2] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[2][0] == 'X' && matriz [2][1] == 'X' && matriz[2][2] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	
	//Diagonales
	if(matriz[0][0] == 'X' && matriz [1][1] == 'X' && matriz[2][2] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[0][2] == 'X' && matriz [1][1] == 'X' && matriz[2][0] == 'X'){
		gotoxy(35,20); cout<<"Felicidades "<<player[0].nombre<<" ganaste el juego";
		return true;
	}
	
	
	// ganador de las O
	if(matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz [2][0] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[0][1] == 'O' && matriz [1][1] == 'O' && matriz[2][1] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[0][2] == 'O' && matriz [1][2] == 'O' && matriz[2][2] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	
	//verticales
	if(matriz[0][0] == 'O' && matriz [0][1] == 'O' && matriz[0][2] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[1][0] == 'O' && matriz [1][1] == 'O' && matriz[1][2] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[2][0] == 'O' && matriz [2][1] == 'O' && matriz[2][2] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	
	//Diagonales
	if(matriz[0][0] == 'O' && matriz [1][1] == 'O' && matriz[2][2] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";
		return true;
	}
	if(matriz[0][2] == 'O' && matriz [1][1] == 'O' && matriz[2][0] == 'O'){
		gotoxy(35,20); cout<<"Felicidades "<<player[1].nombre<<" ganaste el juego";	
		return true;
	}
	else{
		return false;
	}
}
bool verificarPos(int p){
	switch(p){
		case 1:
			if(matriz[0][0] == '.'){
				rellenar(0,0);
				return true;
			}
			system("cls");
		break;
		case 2:
			if(matriz[1][0] == '.'){
				rellenar(1,0);
				return true;
			}
			system("cls");
		break;
		case 3:
			if(matriz[2][0] == '.'){
				rellenar(2,0);
				return true;
			}
			system("cls");
		break;
		case 4:
			if(matriz[0][1] == '.'){
				rellenar(0,1);
				return true;
			}
			system("cls");
		break;
		case 5:
			if(matriz[1][1] == '.'){
				rellenar(1,1);
				return true;
			}
			system("cls");
		break;
		case 6:
			if(matriz[2][1] == '.'){
				rellenar(2,1);
				return true;
			}
			system("cls");
		break;
		case 7:
			if(matriz[0][2] == '.'){
				rellenar(0,2);
				return true;
			}
			system("cls");
		break;
		case 8:
			if(matriz[1][2] == '.'){
				rellenar(1,2);
				return true;
			}
			system("cls");
		break;
		case 9:
			if(matriz[2][2] == '.'){
				rellenar(2,2);
				return true;
			}
			system("cls");
		break;
		default:
			cout<<"Opcion invalida..."<<endl;
			cout<<"Intentalo de nuevo";
			getch();
			system("cls");
			esqueleto();
			dibujarMatriz();
	}
	return false;
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
