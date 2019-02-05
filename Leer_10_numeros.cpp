#include<iostream>
/*Este programa sirve para saber leer 10 numeros*/
main(){
     int num[10];
     int i;
     char salir;
     for(i=0;i<=10;i++){
         std::cout<<"Dime un numero: ";
         std::cin>>num[i];
         
         }
         //Ahora voy a enseñar mis numeros
         std::cout<<"LISTA DE NUMEROS:\n";
         for(i=0;i<=10;i++){
             std::cout<< num[i];
             }
         std::cout<<"\n Toca cualquier tecla para salir";
         std::cin>>salir;
         
         return 0;
}
           
       
