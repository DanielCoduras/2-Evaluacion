#include<iostream>
#include<cstdlib>
#include<ctime>
#define TAMANO 10
#include<string>
main(){
char matriz[TAMANO][TAMANO];
       int fil,col;
       int longitud;
       int posx,posy;
       char palabra[TAMANO];
       char salir;
       int semillita; 
       semillita=time(0);
       srand(semillita);
       for(fil=0;fil<TAMANO;fil++){
           for(col=0;col<TAMANO;col++){
               matriz[fil][col]=rand()%25+65;
               std::cout<<matriz[fil][col];        
           }
           std::cout<<"\n";
       }
       posx=rand()%TAMANO;
       posy=rand()%TAMANO;
       matriz[posx][posy]='*';
       std::cout<<"\n NUEVA MATRIZ\n\n";
       for(fil=0;fil<TAMANO;fil++){
           for(col=0;col<TAMANO;col++){
               std::cout<<matriz[fil][col];        
           }
           std::cout<<"\n";
       }
       
       std::cout<<"Introduce una palabra: ";
       std::cin>>palabra;
       longitud=strlen(palabra);
       for(col=posy;col<posy+longitud;col++){
           matriz[posx][col]=palabra[col-posy];
       }
       std::cout<<"La palabra mide: "<<longitud;
       std::cout<<"\nToca cualquier tecla para salir: ";
       std::cin>>salir;
       return 0;
                        
}

