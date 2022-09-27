#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h> // para hacer pausas automaticas -> Sleep(tiempo en milisegundos)
#include <string.h> // para manipular cadenas de caracteres ->  strupr() y strlwr()

using namespace std;
int magico,contador,op;

struct Jugador{ // crear una estructura para lo nombres de los jugadores
	char nombre[30];
}p1,p2; // variables para los nombres de los jugadores

void datosJugadores();
void numMagico();
void adivinar();

main(){
	system("cls");
	system("color 0F");
	
	datosJugadores();
	Sleep(1000); // esperar 1 segundo y seguir con ejecucion de codigo
	system("cls");
	numMagico();
	Sleep(1000);
	system("cls");
	adivinar();

	getch();
}

void datosJugadores(){ //Obtener los nombre de los jugadores
	cout<<"Jugador 1 ingresa tu nombre: ";
	cin.getline(p1.nombre,30,'\n');
	
	cout<<"Jugador 2 ingresa tu nombre: ";
	cin.getline(p2.nombre,30,'\n');
	cout<<"Iniciando...";
}

void numMagico(){ //Jugador 1 ingresa el numero magico
	do{
		system("cls");
		cout<<"----------- "<<strupr(p1.nombre)<<" -----------"<<endl; //imprimir nombre del jugador en mayusculas
		cout<<"Numeros del 1 al 50"<<endl;
		cout<<"Digita el numero que "<<p2.nombre<<" tiene que adivinar: ";
		cin>>magico;
		
		if(magico <= 0 || magico > 50){
			cout<<"El numero no esta dentro del rango dado..."<<endl;
			cout<<"Intentalo de nuevo...";
			getch();
			system("cls");
		}
	}while(magico <= 0 || magico > 50);
}

void adivinar(){ // jugador 2 intenta adivinar el numero magico
	contador = 3;
	do{
		system("cls");
		cout<<"----------- "<<strupr(p2.nombre)<<" -----------"<<endl;
		cout<<"Adivina el numero magico de "<<strlwr(p1.nombre)<<endl; //imprimir nombre del jugador en minusculas
		cout<<"Tienes 3 oportunidades, Suerte!"<<endl;
		cout<<"Dime un numero: ";
		cin>>op;
		
		if(op <= 0 || op > 50){
			cout<<"El numero no esta dentro del rango dado..."<<endl;
			cout<<"Intentalo de nuevo...";
			getch();
		}else if(op > magico){
			cout<<"Ups... el numero que ingresaste es mas grande"<<endl;
			contador = contador - 1;
			cout<<"Te quedan "<<contador<<" oportunidades."<<endl;
			getch();
		}else if(op < magico){
			cout<<"Ups... el numero que ingresaste es mas chico"<<endl;
			contador = contador - 1;
			cout<<"Te quedan "<<contador<<" oportunidades."<<endl;
			getch();
		}
		if(op == magico){
			cout<<"\n"<<p2.nombre<<" felicidades!"<<" Ganaste el juego"<<endl;
			cout<<p1.nombre<<" lo siento por ti :(";
			getch();
			break;
		}
		if(contador == 0){
			cout<<"\nPerdiste tus oportunidades de ganar en el juego "<<strlwr(p2.nombre)<<endl;
			cout<<"Suerte para la proxima!";
			cout<<"\nEl numero era: "<<magico;
			break;
		}
		
	}while(contador != 0);
}
