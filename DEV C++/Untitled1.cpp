#include <stdio.h>
#include <string.h>
int main(){
	char log[10];
	int key=1;
	char l[10];
	int k=1;
	char name[10];
	
	printf("DIGITE SEU NOME:\n");
	scanf("%s",&name);
	printf("CRIE SEU LOGIN:\n");
	scanf("%s",&log);
	
	printf("CRIE SUA SENHA: \n");
	scanf("%d",&key);
	
	printf("ENTRE COM SEU LOGIN E SENHA:\n");
	printf("DIGITE SEU LOGIN:\n");
	scanf("%s",&l);
	printf("DIGITE SUA SENHA:\n");
    scanf("%d",&k);
    
    if (strcmp(log, l) == 0 && key == k) {
    	printf("SENHA ESTA CORRETA:\n");
    	printf("%s BEM VINDO",name);
	
		}
	else{
	printf("SENHA INCORRETA, TENTE NOVAMENTE");
	}

		
return 0;	
	
	
	
}

        
        
        
		
	
	
	
	

 

