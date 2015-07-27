/*
Gustavo Forte
Project Decrypt
Avaliacao - Curso de C Phoebus 2015.2
27/07/2015
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char key [  ] = {"MaStErSuPeRhYpErKeY"};
	char pass[32] = {0};
	char hash[64] = {0};

	int idx, ckey;

	printf("Hash: ");
	scanf("%s", hash);


	for (idx = 0; idx < strlen(hash)/2; idx++)
	{
		ckey = idx % strlen(key);
		pass[idx] = key[ckey] ^ (hash[idx*2] - 33);
	}
	printf("%s\n", pass);

	return 0;
}

/*
------- Para referencia --------
--------------------------------
HASH DA SENHA GERADO A PARTIR DO
CÓDIGO ACIMA: "_/%%U%""L,7'S#y)D$!!]-!!Y)"
--------------------------------

BOA PROVA!!!
*/
