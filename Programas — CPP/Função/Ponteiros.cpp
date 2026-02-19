/*
	Name: Ponteiros.cpp
	Author: Livia Pinheiro
	Date: 08/09/25 09:55
	Description: Programa para demonstrar o conceito e uso dos PONTEIROS.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	char respS, respN;
	a = b = c = 5;
	respS = 'S';
	respN = 'N';
	int vet1[7], vet2[4];
	
	printf("Conteúdo de A: %d\n", a);
	printf("Conteúdo de B: %d\n", b);
	printf("Conteúdo de C: %d\n", c);
	printf("Conteúdo de respS: %c\n", respS);
	printf("Conteúdo de respN: %c\n", respN);
	
	printf("\nEndereço da variável A: %p", &a); // %p = ponteiro
	printf("\nEndereço da variável B: %p", &b);
	printf("\nEndereço da variável C: %p", &c);
	printf("\nEndereço da variável respS: %p", &respS);
	printf("\nEndereço da variável respN: %p", &respN);
	printf("\nEndereço do vetor vet1: %p", &vet1);
	printf("\nEndereço do vetor vet2: %p", &vet2);
	printf("\nUltimo endereço do vetor vet1: %p", &vet1[6]);
}
