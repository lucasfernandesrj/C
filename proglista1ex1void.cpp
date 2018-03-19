#include<stdio.h>

void funcao(int ninicial, int nfinal)
{
	int i, soma=0;
	
	for (i=ninicial+1;i<nfinal;i++)
	{
		soma+=i;	
	}
	printf("Resultado da soma dos valores entre %d e %d eh: %d", ninicial, nfinal, soma);
}




int main ()

{
	int num1, num2, resultado;
	
	printf("Informe um numero inicial: ");
	scanf ("%d", &num1);
	
	printf("Informe um numero final: ");
	scanf ("%d", &num2);
	
	funcao(num1, num2);
	
	return 0;
}
