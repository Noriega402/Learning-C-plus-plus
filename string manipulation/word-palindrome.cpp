// REalizar programa que detecte si una palabra es palindromo o no
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
	char cadena[20];
	char invertido[20];
	
	cout<<"Digite la palabra: ";
	cin>>cadena;
	
	strcpy(invertido,cadena); //copiar cadena
	strrev(invertido); //invertir cadena

	if(strcmp(cadena,invertido) == 0) // strcmp compara dos cadena de caracteres
		cout<<"Es un palindromo"<<endl;
	else
		cout<<"No es un palindromo"<<endl;
	
	getch();
}
