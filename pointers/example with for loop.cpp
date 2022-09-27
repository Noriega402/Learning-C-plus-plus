// Punteros en arrays
#include <iostream>
#include <conio.h>

using namespace std;

int arr[] = {10,20,30,40,50};
int *numeros;

main(){
	system("cls");
	system("color 0F");
	
	numeros = arr; // puntero numeros tomara la direccion de memoria donde se almacenaron los elementos
	
	// IMPRIMIENDO LA VALORES CON PUNTERO
	for(int i = 0; i < 5; i++){
		cout<<"Index ["<<i<<"]: "<<*numeros<<endl;
		/* numeros++ se coloca por esto: (numeros[i]) que es la manera correcta ya que es un array
		en caso de no colocar numeros++ solo se imprime la primera posicion del array
		que seria asi: (numeros[0]) y siempre estara imprimiendo el mismo numero y no los demas */
	}
	
	cout<<"\n";
//	IMPRIMIENDO LAS DIRECCIONES DONDE SE ESTAN ALMACENANDO
	for(int i = 0; i < 5; i++){
		cout<<"Index ["<<i<<"]: "<<numeros++<<endl;
		/* recordemos que al no colocar un (*) antes de "numeros" se obtiene la direccion de memoria donde
		se esta almacenando el array y siempre es necesario un "numeros++" sin los signos solo
		imprime la primera direccion de memoria del primer elemento */
	}
	
	getch();
}
