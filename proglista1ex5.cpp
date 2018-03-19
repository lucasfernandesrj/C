#include<stdio.h>

int potencia (int base, int expoente)
{
	int i, resultado = base;
	
	for (i=1;i<expoente;i++)
	{
		resultado = resultado*base;
	}
	
	return resultado;
}

int main ()
{
	int base, expoente, resultado;
	
	printf("Informe a um numero: ");
	scanf("%d", &base);
	
	printf ("Informe o expoente: ");
	scanf ("%d", &expoente);
	
	resultado = potencia (base, expoente);
	
	printf ("O resultado da equacao eh %d", resultado);
	
	return 0;
	
}
