#include<stdio.h>
#include<locale.h>
#include<math.h>

void programa05(int x);

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	printf("RESOLU��O DO QUINTO PROBLEMA\n");
	printf("Insira um valor inteiro:");
	scanf("%i",&valor);
	
	programa05(valor);
}

void programa05(int x)
{
	if(x>0)
	{
		printf("O valor %i � positivo!", x);
	}
	else if(x<0)
	{
		printf("O valor %i � negativo!", x);
	}
}
