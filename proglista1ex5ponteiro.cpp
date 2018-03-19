#include<stdio.h>

void potencia (int base, int expoente, int *resultado)
{
	int i;
	
	for (i=1;i<expoente;i++)
	{
		*resultado = *resultado*base;
	}
}

int main ()
{
	int base, expoente, resultado;
	
	printf("Informe a um numero: ");
	scanf("%d", &base);
	
	printf ("Informe o expoente: ");
	scanf ("%d", &expoente);
	
	resultado = base;
	
	potencia (base, expoente, &resultado);
	
	printf ("O resultado da equacao eh %d", resultado);
	
	return 0;
	
}
