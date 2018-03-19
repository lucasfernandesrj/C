#include<stdio.h>

void mediaaluno (float nota1, float nota2, float *novamedia, char letra) // faz de *novamedia um ponteiro que aponta para &media
{

	
	if (letra == 'a') // media
	{
		printf("Selecionada - Media normal \n");
		*novamedia = (nota1+nota2)/2;
	}
	else if (letra == 'b') // media ponderada
	{
		printf("Selecionada - Media Ponderada \n");
		*novamedia = (nota1*5+nota2*3)/8;
	}
	
}

int main (void)
{
	float nota1, nota2, media;
	char letra;
	
	printf("Digite 'a'para media e 'b' para media ponderada: ");
	scanf ("%c", &letra);
	getchar(); // limpeza do buffer
	
	printf ("Informe a primeira nota: ");
	scanf ("%f",&nota1);
	
	printf ("Informe a segunda nota: ");
	scanf ("%f",&nota2);
	
	mediaaluno(nota1, nota2, &media, letra); // &media  = envia o endereço de media
	
	printf ("O resultado da media eh : %.2f", media);
	
	return 0;
}
