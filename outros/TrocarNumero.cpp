/*
	Name: TrocarNumero.cpp
	Author: Livia Pinheiro
	Date: 26/03/25 17:42
	Description: Programa para inserir dois números, e trocá-los de lugar.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num1, num2, troca;
	num1 = 0; num2 = 0; troca = 0;
	
	printf("Insira o primeiro número (x): "); scanf("%i", num1);
	printf("Insira o segundo número (y): "); 
	scanf("%i", num2);
	printf("x: %i", num1, "y: %i", num2);
	troca = num1; 
	num1 = num2;
	num2 = troca;
	puts("Números após a troca: " );
	printf("x: %i", num1, "y: %i", num2);
}
