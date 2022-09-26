// Pedir productos y determinar el cambio
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <limits> //libreria para limpiar buffer

using namespace std;

string productos[3];
float precios[3];
float pago = 0;
float cambio;
float total = 0;

main(){
	//Cambiar color de la consola
	system("color 0F"); // (color color-fondo color-letra)

	for(int i = 0; i < 3; i++){
		cout<<"Ingreso de la compra de productos"<<endl;
		cout<<"Nombre producto "<<i+1<<": ";
		getline(cin,productos[i]); //Capturar espacios dentro del string
		cout<<"Precio: ";
		cin>>precios[i];
		total += precios[i];
		cin.ignore(numeric_limits<int>::max(),'\n'); //limpiar buffer para entradas despues de un salto de línea
		system("cls");
	}

	system("cls");
	
	cout<<"Detalle de los productos"<<endl;
	for(int i = 0; i < 3; i++){ //Mostrar nombre de los productos
		cout<<"Producto: "<<productos[i]<<" | Precio: "<<precios[i]<<endl;
	}
	
	cout<<"\nMonto a pagar: Q "<<total<<endl;
	cout<<"Digite la cantidad de dinero con la que pagara: ";
	cin>>pago;
	cambio = pago - total;
	cout<<"Cambio: Q "<<cambio<<endl<<endl;
	cout<<"Vuelva pronto!";
	
	getch();
}
