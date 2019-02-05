#include<iostream>
int mayor(int num1,int num2,int num3){
    int respuesta;
    if(num1>num2 && num1>num3){
       respuesta=num1;
    }
    if(num2>num3 && num2>num1){
       respuesta=num2;
    }
    if(num3>num1 && num3>num2){
       respuesta=num3;
    }
    return respuesta;
}
main(){
       int num1,num2,num3;
       char salir;
       std::cout<<"Introduce un numero: ";
       std::cin>>num1;
       //Leo un numero entero
       std::cout<<"Introduce un numero: ";
       std::cin>>num2;
       //Leo otro numero entero
       std::cout<<"Introduce otro numero: ";
       std::cin>>num3;
       //Lo envio a una funcion que los compara
       
       std::cout<<"El mayor es: "<<mayor(num1,num2,num3);
       std::cout<<"\nToca cualquier tecla para salir: ";
       std::cin>>salir;
       return 0;
       
}
