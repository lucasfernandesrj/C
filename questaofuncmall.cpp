#include<stdio.h>

struct funcionario
{
	char nome[50];
	float salario;
};

void imprime(struct funcionario*v,int tam)
{
		int i;
		for (i=0;i<tam;i++)
		{
			printf("Nome: %s", v[i].nome);
			printf("\n Salario: %d", v[i].salario);
		};
};

float maiorsal (struct funcionario*v, int tam)
{
	float maior =-1;
	int i;
	
	for (i=0;i<tam;i++)
	{
		if (v*[i].salario > maior)
		{
			maior = v*[i].salario;
		}
	}
	
	return maior;
};

int main ()
{
	int tam;
	printf("Informe o tamanho do vetor");
	scanf("%d",&tam );
	
	struct funcionario *lstfuncionario = (struct funcionario*)malloc (tam*sizeof(struct funcionario));
	
	imprime(&lstfuncionario, tam);
	
	for (i=0;i<tam;i++)
	{
		printf("Informe o nome");
		gets(lstfuncionario[i].nome);
		
		prinf("Informe o salario");
		scanf("%f", &lstfuncionario[i].salario);
	};
	float montante = maiorsal (&lstfuncionario, tam);
};


