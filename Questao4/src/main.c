/*
Gustavo Forte
Questao 4
Avaliacao - Curso de C Phoebus 2015.2
27/07/2015
*/

#include <stdio.h>

#define MAX_FIB	10000

int main()
{
	int temp = 0, fib_number = 1, previous = 0;
	
	printf("Sucessao de Fibonacci (ate %d):\n", MAX_FIB);
	do
	{
		printf("%d ", fib_number);
		temp = fib_number;
		fib_number += previous;
		previous = temp;
	} while(fib_number <= MAX_FIB);

return 0;
}
