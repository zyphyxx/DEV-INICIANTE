#include <stdio.h>

int main ()
{ float orcamento;
     printf ("DIGITE O VALOR DO ORCAMENTO PARA VIAGEM \n");
     scanf ("%f" , &orcamento);
  if (orcamento>=10000)
  {
  	printf ("VOCE POSSUI ORCAMENTO PARA UMA VIAGEM INTERNACIONAL \n");
  	
	 }   
else 
{
	printf ("VOCE POSSUI ORCAMENTO PARA UMA VIAGEM NACIONAL \n");
}
  return 0;
}

