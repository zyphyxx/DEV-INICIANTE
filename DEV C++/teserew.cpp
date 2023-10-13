#include <stdio.h>


int main (){

char nome [20] = "";	
int idade = 0;
float peso = 00 ;
float altura = 0.00;

printf ("DIGITE SEU NOME: \n");
scanf ("%s" , &nome);

printf ("DIGITE SUA IDADE: \n");
scanf ("%d", &idade);

printf ("DIGITE SEU PESO: \n");
scanf ("%f", &peso);

printf ("DIGITE SUA ALTURA: \n");
scanf ("%f", &altura);

printf ("DADOS INFORMADOS: \n");

printf ("VERIFIQUE SE SEU NOME ESTA CORRETO: %s. \n", nome);

printf ("VERIFIQUE SE SUA IDADE ESTA CORRETA: %d. \n", idade);

printf ("VERIFIQUE SE ESTE E O SEU PESO: %.2f . \n", peso);

printf ("VERIFIQUE SUA ALTURA: %.2f \n ", altura);
}
