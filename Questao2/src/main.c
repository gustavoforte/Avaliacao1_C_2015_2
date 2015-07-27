/*
Gustavo Forte
Questao 2
Avaliacao - Curso de C Phoebus 2015.2
27/07/2015
*/

#include <stdio.h>
#include "menulampadas.h"

int main(void)
{
	int idx, opcao;
	int lampadas = 0;

	do
	{
		show_menu();
		printf("\nEscolha a opcao desejada: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1: lampadas = liga_desliga(lampadas);
					break;
			case 2: consulta(lampadas);
					break;
			case 0: printf("\nPrograma encerrado.");
					break;
			default: printf("\nErro! Entre com outra opcao.\n");
		}
	} while (opcao);

	return 0;
}
