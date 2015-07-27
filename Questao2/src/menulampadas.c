#include <stdio.h>
#include "menulampadas.h"

void show_menu()
{
	printf("\n1. Ligar ou desligar uma lampada.\n");
	printf("2. Consultar o estado de uma lampada.\n");
	printf("0. Sair.\n");
}

int liga_desliga(int lampadas)
{
	int lamp;

	do
	{
		printf("\nAlterar qual lampada? Digite 0 para sair. ");
		scanf("%d", &lamp);
		if ((lamp > 0) && (lamp < 9))
		{
			lampadas ^= (1 << (lamp-1));
			if (lampadas & (1 << (lamp-1)))
				printf("Acendeu a lampada %d.\n", lamp);
			else
				printf("Apagou a lampada %d.\n", lamp);
		}
		else
			if (lamp)
				printf("Erro! Escolha uma lampada de 1 a 8.\n");
		
	} while (lamp);

	return lampadas;
}

void consulta(int lampadas)
{
	int lamp;
	
	do
	{
		printf("\nConsultar qual lampada? Digite 0 para sair. ");
		scanf("%d", &lamp);
		if ((lamp > 0) && (lamp < 9))
			if (lampadas & (1 << (lamp-1)))
				printf("Lampada %d acesa.\n", lamp);
			else
				printf("Lampada %d apagada.\n", lamp);
		else
			if (lamp)
				printf("Erro! Escolha uma lampada de 1 a 8.\n");
	} while (lamp);
}
