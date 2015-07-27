/*
Gustavo Forte
Questao 1
Avaliacao - Curso de C Phoebus 2015.2
27/07/2015
*/

#include <stdio.h>
#include <string.h>

#define MAX_INPUT	1000

int main(void)
{
	unsigned char sinput[MAX_INPUT] = {0};
	int a[4] = {131, 132, 133, 160};
	int e[4] = {130, 136, 137, 138};
	int i[4] = {139, 140, 141, 161};
	int o[4] = {147, 148, 149, 162};
	int u[4] = {129, 150, 151, 163};
	int c[4] = {135, 135, 135, 135};

	int g, j;

	printf("Digite a string:\n");
	gets(sinput);

	for (g = 0; g < strlen(sinput); g++)
	{
		for (j = 0; j < 4; j++)
		{
			if (sinput[g] == a[j])
				sinput[g] = 'a';
			if (sinput[g] == e[j])
				sinput[g] = 'e';
			if (sinput[g] == i[j])
				sinput[g] = 'i';
			if (sinput[g] == o[j])
				sinput[g] = 'o';
			if (sinput[g] == u[j])
				sinput[g] = 'u';
			if (sinput[g] == c[j])
				sinput[g] = 'c';
		}
	}
	printf("%s\n", sinput);

	return 0;
}
