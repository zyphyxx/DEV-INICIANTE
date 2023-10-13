
#include<stdio.h>

#include<stdlib.h>

int* alocar(){

return malloc(200);

}

int main(){

int *memoria;

memoria = alocar();

if(memoria != NULL){

printf("Endereço de memória alocada = %x",memoria);

}

else{

printf("Memória não alocada");

}

return 0;

}
