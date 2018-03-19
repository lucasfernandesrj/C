#include<stdio.h>

void funcao2(int segs)
{
	int hora, minutos, segundos;
	
	hora = segs/3600;
	minutos = (segs%3600)/60;
	segundos = segs-(hora*3600)-(minutos*60);
	
	printf ("Resultado: %d H %d m %d s", hora, minutos, segundos);
}

int main ()

{
	int segs;
	
	printf("Informe uma quantidade de segundos: ");
	scanf ("%d", &segs);
	
	funcao2(segs);
	
	return 0;
}
