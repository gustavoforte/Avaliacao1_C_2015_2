/*
Gustavo Forte
Questao 3
Avaliacao - Curso de C Phoebus 2015.2
27/07/2015
*/

#include <stdio.h>

#define MIN_COUNT	0
#define MAX_COUNT	1000
#define NUM_1		3
#define NUM_2		7

int main(void)
{
	int idx, soma = 0;

	for (idx = MIN_COUNT; idx <= MAX_COUNT; idx++)
		if (!(idx % NUM_1) && !(idx % NUM_2))
			soma += idx;

	printf("Resultado: %d\n", soma);

	return 0;
}
