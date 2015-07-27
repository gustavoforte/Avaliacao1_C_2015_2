/*# INSTRUÇÕES PARA A PROVA

1- !!!LEIA ATENTAMENTE AS INSTRUÇÕES ABAIXO!!!
2- A PROVA ESTÁ COMPACTADA EM UM ZIP PROTEGIDO COM SENHA;
3- ESCREVA UM PROGRAMA EM C PARA DESCOBRIR A SENHA. SALVE O PROGRAMA NA MESMA ESTRUTURA DE PROJETO UTILIZADA NOS EXERCÍCIOS RESOLVIDOS EM SALA;
4- CADA QUESTÃO DEVERÁ SER SALVA NA MESMA ESTRUTURA DE PROJETO UTILIZADA NOS EXERCÍCIOS RESOLVIDOS EM SALA;
5- OS DIRETÓRIOS DOS PROJETOS DEVEM SER ADICIONADOS A UM RESPOSITÓRIO NO SEU GITHUB A SER CRIADO COM O SEGUINTE NOME: Avaliacao1_C_2015_2
6- É PERMITIDA A CONSULTA A MATERIAIS IMPRESSOS E DISPONÍVEIS NA INTERNET;
7- NÃO SERÁ PERMITIDA CONSULTA AOS DEMAIS ALUNOS (SEREI BEM CRITERIOSO).

--------------------------------
 CÓDIGO UTILIZADO PARA MASCARAR
A SENHA UTILIZADA NO ARQUIVO ZIP
--------------------------------
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char key [  ] = {"MaStErSuPeRhYpErKeY"};
	char pass[32] = {0};
	char hash[64] = {0};

	int idx, ckey;

	printf("Password: ");
	scanf("%s", pass);

	for (idx = 0; idx < strlen(pass); 
		ckey = idx % strlen(key),
		hash[idx*2]   = (key[ckey] ^ pass[idx]) + 33,
		hash[idx*2+1] = ((key[ckey] ^ pass[idx]) & 0x0F) + 33, idx++);

	printf("Hash: %s\n", hash);

	return 0;
}

/*
--------------------------------
HASH DA SENHA GERADO A PARTIR DO
CÓDIGO ACIMA: "_/%%U%""L,7'S#y)D$!!]-!!Y)"
--------------------------------

BOA PROVA!!!
*/
