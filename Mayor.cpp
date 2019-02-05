#include<iostream>
main(){
    float num[10];
    int i;
    char salir;
    float suma=0;//inicializamos a 0 la variable acumuladora
    float n_numeros;
    float mayor,menor;
    std::cout<<"Cuantos numeros quieres introducir: ";
    std::cin>>n_numeros;
    for(i=0;i<n_numeros;i++){
        std::cout<<"Dime un numero: ";
        std::cin>>num[i];
    }
    //Ahora voy a  enseñar mis numeros
    std::cout<<"LISTA DE NUMEROS:\n";
    for(i=0;i<n_numeros;i++){
        std::cout<<num[i];
    }
    //Voy a ir comparando el mayor con cada numero
    mayor=num[0];
    for(i=0;i<n_numeros;i++){
        if(num[i]>mayor){
           mayor=num[i];
        }
    }
    std::cout<<"\nEL mayor es: "<<mayor;
    std::cout<<"\nToca cualquier tecla para salir:";//instruccion de salida 
    std::cin>>salir;
    return 0;
}
