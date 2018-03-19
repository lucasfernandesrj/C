#include<stdio.h>

void trianguloret (int hipo, int cat1, int cat2, int *resultado) // ponteiro = aponta para o endereço de &resultado
{
	if ( (hipo*hipo) == (cat1*cat1) + (cat2*cat2) )
	{
		*resultado = 1; // altera o valor do endereço &resultado onde o *resultado está apontando
	}
	else 
	{
		*resultado = 0; // altera o valor do endereço &resultado onde o *resultado está apontando
	}
	
}

int main ()
{
	int n1, n2, n3, resultado = 10;
	
	printf ("Informe tres valores inteiros de modo decrescente: \n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	trianguloret (n1, n2, n3, &resultado); // armazena um espaço com endereço
	
	if (resultado == 1)
	{
		printf("Verdade - As medidas caracterizam um triangulo retangulo!");
	}
	else
	{
		printf("Falso - As medidas NAO caractezizam um triangulo retangulo!");
	}
}
