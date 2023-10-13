#include <stdio.h>
    int main () {
    	
    char nome [10] = "";
	int idade = 0;
	float altura = 0;
	
	printf ("DIGITE SEU NOME: \n");
	scanf ("%s", &nome);
	
	printf ("DIGITE SUA IDADE:\n");
	scanf ("%d", &idade);
	
	printf ("DIGITE SUA ALTURA:\n");
	scanf ("%f", &altura);	
	
	printf (" SEUS DADOS ESTAO CORRETOS ? \n");
	
	printf ("SEU NOME E: %s \n", nome);
	
	printf ("SUA IDADE E: %d \n", idade );
	
	printf ("SUA ALTURA E: %.2f \n" , altura);
    	
	}
