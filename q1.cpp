#include<stdio.h>
#include<stdlib.h>

void proc2006(int *alfa, bool *beta)
{
	*alfa = 1900;
	*beta = true;
}
int main ()
{
	int nr, saida;
	bool vf;
	
	nr = 2000;
	vf = false;
	proc2006 (&nr,&vf);
	if (vf)
		saida = 2007;
	else
		saida = 2008;
	
	printf("\n %d %d %d \n",nr,vf,saida);
	system("pause");
	
	return 0;
}
