#include <stdio.h>
#include <math.h>

int main (){
	
	int numero;
	
	printf ("digite um numero ");
	scanf ("%d", &numero);
	
	if (((numero % 5)==0) && ((numero % 3) ==0)){
		
		printf (" O NUMERO E DIVISIVEL: %d \n", numero);
	}
	
	else {
		printf (" O NUMERO NAO E DIVISIVEL: %d \n", numero);
	}
	
	return 0;
}


    
