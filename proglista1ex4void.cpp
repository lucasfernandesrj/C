#include<stdio.h>

void trianguloret (int hipo, int cat1, int cat2)
{
	if ( (hipo*hipo) == (cat1*cat1) + (cat2*cat2) )
	{
		printf("Verdade - As medidas caracterizam um triangulo retangulo!");
	}
	else
	{
		printf("Falso - As medidas NAO caractezizam um triangulo retangulo!");
	}
}

int main ()
{
	int n1, n2, n3;
	
	printf ("Informe tres valores inteiros de modo decrescente: \n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	trianguloret (n1, n2, n3);
	
	return 0;
}
