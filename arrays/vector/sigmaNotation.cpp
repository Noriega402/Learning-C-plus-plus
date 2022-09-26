#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

void getNum();
void process(int n);
void showResult(float resNum, float resDeno);

main(){
	system("cls");
	system("color 0F");
	
	cout<<"------------ NOTACION SIGMA ------------"<<endl;
	getNum();
	
	getch();
}

void getNum(){
	int n;
	cout<<"Dame el numero \"n\": ";
	cin>>n;
	
	process(n);
}
void process(int n){
	int i, deno;
	int num[i];
	float resNum,resDeno;
	
	deno= 1;
	resNum = 0;
	resDeno = 0;
	
	for(i = 1; i <= n; i++){ 
		num[i] = pow(n,i); // num[tam] = n^1, n^2, n^3...
		deno = deno*i; // deno = 1*2*3*4...*n
		resNum += num[i]; // resNum = suma de las potencias
		resDeno = deno; // resDeno = resultado de las multiplicaciones (factoriales)
	}
	showResult(resNum,resDeno);
}
void showResult(float resNum, float resDeno){
	float total;
	total = resNum/resDeno;
	cout<<"Resultado: "<<total;
}
