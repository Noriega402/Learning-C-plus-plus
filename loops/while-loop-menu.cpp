#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

main(){
	int op;
	float x,y,exp,res;
	
	while(op != 6){
		system("cls");
		cout<<"---------Menu de opciones----------"<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Multiplicacion"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. Potencia"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Digite el numero de opcion: ";
		cin>>op;
		switch(op){
			case 1:
				system("cls");
				cout<<"Ingrese primer numero: ";
				cin>>x;
				cout<<"Ingrese segundo numero: ";
				cin>>y;
				cout<<"El resultado es: "<<x+y;
				getch();
			break;
			case 2:
				system("cls");
				cout<<"Ingrese primer numero: ";
				cin>>x;
				cout<<"Ingrese segundo numero: ";
				cin>>y;
				cout<<"El resultado es: "<<x-y;
				getch();
			break;
			case 3:
				system("cls");
				cout<<"Ingrese primer numero: ";
				cin>>x;
				cout<<"Ingrese segundo numero: ";
				cin>>y;
				cout<<"El resultado es: "<<x*y;
				getch();
			break;
			case 4:
				system("cls");
				cout<<"Ingrese primer numero: ";
				cin>>x;
				cout<<"Ingrese segundo numero: ";
				cin>>y;
				cout<<"El resultado es: "<<x/y;
				getch();
			break;
			case 5:
				system("cls");
				cout<<"Ingrese la base: ";
				cin>>x;
				cout<<"Ingrese el exponente: ";
				cin>>exp;
				cout<<"El resultado es: "<<pow(x,exp);
				getch();
			break;
			case 6:
				cout<<"Saliendo del sistema...";
				getch();
			break;
			default: 
				cout<<"\nLa opcion que ingresaste no es valida...";
				getch();
		}
	}
	
	
	getch();
}
