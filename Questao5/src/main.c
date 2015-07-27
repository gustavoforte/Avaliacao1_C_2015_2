/*
Gustavo Forte
Questao 5
Avaliacao - Curso de C Phoebus 2015.2
27/07/2015
*/

#include <stdio.h>
#include "turma.h"

int main()
{
	int qtd_alunos = 0;
	char nomes[][MAX_NOME] = {0};
	float notas[] = {0};

	qtd_alunos = quantidade();
	pede_nomes(nomes, qtd_alunos, notas);

	return 0;
}
