#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[5][4], valor, contagem_par, contagem_impar, vetor_par[12], vetor_impar[8];
	int i, j;
	contagem_par = 0;
	contagem_impar = 0;
	
	while(true) {
		if(contagem_par == 12 && contagem_impar == 8) {
			break;
		}
		
		printf("Insira um valor:");
		scanf("%i",&valor);
		if (valor%2 == 0) {
			if (contagem_par >= 12) {
				printf("N�o podem ser inseridos mais que 12 valores pares! Insira um valor �mpar.\n");
			}
			else {
				vetor_par[contagem_par] = valor;
				contagem_par = contagem_par + 1;
			}
		} 
		else {
			if (contagem_impar >= 8) {
				printf("N�o podem ser inseridos mais que 08 valores �mpares! Insira um valor par.\n");
			}
			else {
				vetor_impar[contagem_impar] = valor;
				contagem_impar = contagem_impar + 1;
			}
		}
	}
	
	for(i=0; i<5; i++) {
		for(j=0; j<4; j++) {
			if(i%2 == 0) {
				contagem_par = contagem_par - 1;
				matriz[i][j] = vetor_par[contagem_par];
			}
			else {
				contagem_impar = contagem_impar - 1;
				matriz[i][j] = vetor_impar[contagem_impar];
			}
		}
	}
	
	for(i=0; i<5; i++) {
		for(j=0; j<4; j++)
		{
			printf("[%i] ", matriz[i][j]);
		}
		printf("\n");
	}
}
