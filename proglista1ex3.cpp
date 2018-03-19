#include<stdio.h>

float mediaaluno (float nota1, float nota2, char letra)
{
	float media;
	
	if (letra == 'a') // media
	{
		printf("Selecionada - Media normal \n");
		media = (nota1+nota2)/2;
		return media;
	}
	else if (letra == 'b') // media ponderada
	{
		printf("Selecionada - Media Ponderada \n");
		media = (nota1*5+nota2*3)/8;
		return media;
	}
	
}

int main ()
{
	float nota1, nota2, resultado;
	char letra;
	
	printf("Digite 'a'para media e 'b' para media ponderada: ");
	scanf ("%c", &letra);
	getchar();
	
	printf ("Informe a primeira nota: ");
	scanf ("%f",&nota1);
	
	printf ("Informe a segunda nota: ");
	scanf ("%f",&nota2);
	
	resultado = mediaaluno(nota1, nota2,letra);
	
	printf ("O resultado da media eh : %.2f", resultado);
	
	return 0;
}
