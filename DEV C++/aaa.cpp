
#include<stdio.h>

#include<stdlib.h>

int* alocar(){

return malloc(200);

}

int main(){

int *memoria;

memoria = alocar();

if(memoria != NULL){

printf("Endere�o de mem�ria alocada = %x",memoria);

}

else{

printf("Mem�ria n�o alocada");

}

return 0;

}
