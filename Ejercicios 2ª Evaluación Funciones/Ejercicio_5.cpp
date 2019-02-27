#include<stdio.h>
#include<iostream>
using namespace std;
char newline = '\n';
int main(){
	int mes;
	int dia;
	int ano;
    printf("Escribe un numero entre 1-31: ");
	cin>> dia;
    cout<< "El dia que has introducido es: " << dia << "\n";

	printf("Escribe un numero entre 1-12: ");scanf("%i",&mes);
	
	switch(mes){
		case 1: printf("El mes que has introducido es Enero");break;;
		case 2:printf("El mes que has introducido es Febrero");break;
		case 3:printf("El mes que has introducido es Marzo");break;
		case 4:printf("El mes que has introducido es Abril");break;
		case 5:printf("El mes que has introducido es Mayo");break;
		case 6:printf("El mes que has introducido es Junio");break;
		case 7:printf("El mes que has introducido es Julio");break;
		case 8:printf("El mes que has introducido es Agosto");break;
		case 9:printf("El mes que has introducido es Septiembre");break;
		case 10:printf("El mes que has introducido es Octubre");break;
		case 11:printf("El mes que has introducido es Noviembre");break;
		case 12:printf("El mes que has introducido es Diciembre");break;	
		default: printf("Numero no valido para mes");	
		
	}
     
	printf("Escribe cualquier numero: ");
	cin>> ano;
    cout<< "El ano que has introducido es: " << ano << "\n";
    cout<< "La fecha que has introducido es el " << dia;
	cout<< "de " << mes << "\n";
	cout<< "del ano " << ano; 
	
	return 0;
}

