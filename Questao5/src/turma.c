#include <stdio.h>
#include <string.h>
#include "turma.h"

int quantidade()
{
	int qtd;

	do
	{
		printf("Digite a quantidade alunos na turma: ");
		scanf("%d", &qtd);
		if (qtd < 0)
			printf("Erro! Deve ser um numero natural.\n");
	} while (qtd < 0);

	return qtd;
}

void pede_nomes(char nomes[][MAX_NOME], int qtd, float notas[])
{
	int idx;

	for (idx = 0; idx < qtd; idx++)
	{
		printf("Digite o nome do Aluno %d.\n", idx+1);
		scanf("%s", nomes[idx]);
		//printf("Digite a nota do Aluno %d.\n", idx+1);
		//scanf("%.3f", notas[idx]);
	}
}

