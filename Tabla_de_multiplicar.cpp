#include<iostream>
int main(){
    //Este programa escribe la tabla de multiplicar que nos digan
    int numero;//Definicion de variables
    int i;
    char salir;
    std::cout<<"Que tabla desea hacer (1-10):"; //Salida
    std::cin>>numero; //Entrada 
    for(i=1;i<=10;i++){
        std::cout<< i;
        std::cout<< " X ";
        std::cout<< numero;
        std::cout<< " = ";
        std::cout<<i*numero;
        std::cout<< "\n";    
        }

    std::cout<<"Toca cualquier tecla para salir:";//instruccion de salida
    std::cin>>salir;//instruccion de entrada
    return 0;
}
    
