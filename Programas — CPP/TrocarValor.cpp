/*
	Name: TrocaValor.cpp
	Author: Livia Pinheiro
	Date: 10/11/25 10:10
	Description: Programa para trocar o valor entre variáveis
*/
#include <stdio.h>

void trocar(int *, int *);

int main()
{
	int a, b;
	a = 14;
	b = 2006;
	
	puts("Antes da troca:");
	printf("A: %d\n", a);
	printf("B: %d\n", b);

	trocar(&a, &b);

	puts("\nDepois da troca:");
	printf("A: %d\n", a);
	printf("B: %d\n", b);	
}

void trocar(int *a, int *b)
{
	int aux;
	
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
	puts("\nEndereco das variaveis");
	printf("A: %p\n", *a);
	printf("B: %p\n", *b);
}

