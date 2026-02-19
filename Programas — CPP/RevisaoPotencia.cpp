/*
	Name: RevisãoPotencia.cpp
	Author: Livia Pinheiro
	Date: 24/11/25 08:09
	Description: Função para calcular potência
*/
#include <stdio.h>

int calcularPotencia(int, int);

int main()
{
	int result = 0;
	int base = 0;
	int exp = 0;
	
	printf("Digite a base: ");    scanf("%d", &base);
	printf("Digite o expoente:"), scanf("%d", &exp);
	
	result = calcularPotencia(base, exp);
	printf("\n\nResultado: %d", result);
}

calcularPotencia(int base, int exp)
{
	int pot = 1;
	for(int i = 0; i < exp; i++)
	{
		pot = pot * base;
	}
	return pot;
}
