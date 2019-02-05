#include<iostream>
float media(float num1,float num2,float num3,float num4){
      float respuesta;
      respuesta=(num1+num2+num3+num4)/4;
      return respuesta;
}

int main(){
    int num1,num2,num3,num4;
       char salir;
       std::cout<<"Introduce un numero: ";
       std::cin>>num1;
       //Leo un numero entero
       std::cout<<"Introduce un numero: ";
       std::cin>>num2;
       //Leo otro numero entero
       std::cout<<"Introduce otro numero: ";
       std::cin>>num3;
       
       std::cout<<"Introduce otro numero: ";
       std::cin>>num4;
