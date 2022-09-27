//contar cuantos elementos hay en un array
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

main(){
	
  	string nombres[] = {"Daniel","Oscar","Manuel","Alexander","Belen","Mami","Mijo"};
  	int numeros[] = {1,2,3,4,5,6,19,20,40};
  	char letras[] = {'d','a','n','i','e','l','e','n'};
  	
//  	cout<<"Total de bytes con cadenas: "<<sizeof(nombres)<<endl;
//  	cout<<"total de bytes con enteros: "<<sizeof(numeros)<<endl;
//  	cout<<"Total de bytes con caracteres: "<<sizeof(letras)<<endl<<endl;
  	
  	cout<<"Total de elementos en array de strings: "<<sizeof(nombres)/sizeof(nombres[0])<<endl;
  	cout<<"Total de elementos en array de enteros: "<<sizeof(numeros)/sizeof(numeros[0])<<endl;
  	cout<<"Total de elementos en array de caracteres: "<<sizeof(letras)/sizeof(letras[0])<<endl;
}
