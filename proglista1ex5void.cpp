#include<stdio.h>

void potencia (int base, int expoente)
{
	int i, resultado = base;
	
	for (i=1;i<expoente;i++)
	{
		resultado = resultado*base;
	}
	printf ("O resultado da equacao eh:3 %d", resultado);

}

int main ()
{
	int base, expoente;
	
	printf("Informe a um numero: ");
	scanf("%d", &base);
	
	printf ("Informe o expoente: ");
	scanf ("%d", &expoente);
	
	potencia (base, expoente);
	
	return 0;
	
}
