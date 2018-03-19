#include<stdio.h>

int funcao(int ninicial, int nfinal)
{
	int i, soma=0;
	
	for (i=ninicial+1;i<nfinal;i++)
	{
		soma+=i;	
	}
	return soma;
}




int main ()

{
	int num1, num2, resultado;
	
	printf("Informe um numero inicial: ");
	scanf ("%d", &num1);
	
	printf("Informe um numero final: ");
	scanf ("%d", &num2);
	
	resultado = funcao(num1, num2);
	
	printf("Resultado da soma dos valores entre %d e %d eh: %d", num1, num2, resultado);
	
	return 0;
}
