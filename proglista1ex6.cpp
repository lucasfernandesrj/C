#include<stdio.h>

void moldura (int altura, int largura, char c)
{
	int i, j;
	
	for ( i = 0; i <= altura; i++ )
	{
		for ( j = 0; j <= largura; j++ )
		{	
		
			if ( i == 0 || i == altura || j == 0 || j == altura)
			{
				printf (" %c", c);
			}
			else
			{
				printf ("  ");
			}	
		}
	 printf ( "\n" );
	}
	
}

int main ()
{
	int a, b;
	char c;
	printf ("Digite um caractere: ");
	scanf ("%c", &c);
	
	printf ("Informe o tamanho da altura:");
	scanf ("%d", &a);
	
	printf ("Informe o tamanho da largura:");
	scanf ("%d", &b);
	
	moldura (a,b,c);
	
	return 0;
}

