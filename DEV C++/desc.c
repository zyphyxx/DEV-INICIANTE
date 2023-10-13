#include <stdio.h>
 
 int main ()
 {
 	char x; 
 	float valor, desc, total;
 	
 	printf ("\n DIGITE O VALOR DA COMPRA: \n");
 	scanf ("%f" , &valor);
 	printf ("DIGITE A LETRA QUE REPRESENTA O SEU DESCONTO DE ACORDO COM A COR: \n");
 	printf("a. AZUL \n");
 	printf ("v. VERMELHO \n");
 	printf ("b. BRANCO \n");
 	printf ("DIGITE SUA OPCAO:\n");
 	scanf ("%s", &x );
 	
 	switch (x)
{ 
   case 'a':
   	
    printf("VOCE ESCOLHEU AZUL, SEU DESCONTO SERA DE 30 POR CENTO \n");
    desc=valor*0.20;
		total=valor-desc;
		printf("O valor da sua compra e %.2f\n", total);
    break;
	
	case 'v':
		
		printf ("VOCE ESCOLHEU VERMELHO, SEU DESCONTO SERA DE 2O PRO CENTO \n");
		desc=valor*0.20;
		total=valor-desc;
		printf ("O VALOR DA SUA COMPRA E %.2f \n", total);
		break;
	
	default:
		printf ("OPCAO INVALIDA \n");
		
	
}
 
 return 0;
 




	 }
