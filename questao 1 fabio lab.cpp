#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	FILE *arq_cliente;
	char var_sexo, var_arquivo_aux,nomecli[50];
	int cd_cli, vl_idade, indice = 0;
	float vl_limite_credito;
	arq_cliente = fopen("CLIENTE.TXT", "r");
	
	FILE *salvo_cliente;
	salvo_cliente = fopen("SALVOCLIENTE.TXT", "w");
	
	if (arq_cliente == NULL)
	{
		printf("\nArquivo CLIENTE.TXT nao pode ser aberto!");
		printf ("\nOcorreu um Erro Grave! Use alguma tecla para finalizar!");
		getch();
	}	
	else
	{
		var_arquivo_aux = fscanf(arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);
		
		while (var_arquivo_aux !=EOF)
		{
			indice = indice +1;
			printf("\n Dados do %d Cliente: \n", indice);
			printf("\n Codigo do Cliente: %d --- Sexo: %c", cd_cli, var_sexo);
			printf("\n Nome do Cliente: %s", nomecli);
			printf("\n Idade: %d --- Credito: %0.2f", vl_idade, vl_limite_credito);
			printf("\n\n -------- [ TECLE ALGO ] -------- ");
			
			fprintf(salvo_cliente, "Codigo do Cliente: %d --- Credito: %0.2f \n", cd_cli, vl_limite_credito);
			getch();
			
			
			
			
			
			var_arquivo_aux = fscanf (arq_cliente, "%d %c %s %d %f", &cd_cli, &var_sexo, &nomecli, &vl_idade, &vl_limite_credito);
				
		}
	fclose (arq_cliente);
	fclose (salvo_cliente);
	
	printf("\n * * * FIM : [Tecle algo] ! * * * ");
	getch();
	return 0;	
	}
	
}
