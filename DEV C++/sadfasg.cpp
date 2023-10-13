#include <stdio.h>
int main ()
   {
   	float matriz[5][5];
   	printf("informe os numeros:\n");
   	
   	for(int i=0;i<5;i++)
	   {
   		for(int j=0;j<5;j++)
		   {
   			printf("POSICAO [%d][%d]:", i+1, j+1);
   			scanf("%f", &matriz[i][j]);
   			
   			if(i%2== 0 && j%2== 0){ 
   			printf("%f,matriz[i][j]");
			   }
		   }
	   }
   	
   }
	
	

	
	


	

	
	
