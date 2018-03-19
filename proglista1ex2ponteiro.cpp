#include<stdio.h>

void funcao2(int segs, int *minutos, int *hora, int *novosegs)
{
	*hora = segs/3600;
	*minutos = (segs%3600)/60;
	*novosegs = segs-(*hora*3600)-(*minutos*60);

}

int main ()

{
	int segs, *min = 0, *hor = 0, novosegs = 0;
	
	printf("Informe uma quantidade de segundos: ");
	scanf ("%d", &segs);
	
	funcao2(segs, &min, &hor, &novosegs);
	
	printf ("Resultado: %d H %d m %d s", hor, min, novosegs);
	
	return 0;
}
