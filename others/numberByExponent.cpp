#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

void getData();
int process(int base, int expo);
void error();
void showResult(int base, int expo);


main(){
	system("cls");
	system("color 0F");
	getData();
	getch();
}

void getData(){
	int base, expo;
	cout<<"Dame numero base: ";
	cin>>base;
	cout<<"Dame el exponente: ";
	cin>>expo;
	process(base,expo);
}
int process(int base, int expo){
	if(base < 0 || expo < 0){
		error();
	}else{
		showResult(base,expo);
	}
}
void error(){
	cout<<"El numero no puede ser menor a 0...";
}
void showResult(int base, int expo){
	cout<<"\nEl resultado es: "<<pow(base,expo);
}
