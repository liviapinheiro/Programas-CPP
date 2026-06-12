/*
	Name: Somar100.cpp
	Author: Livia Pinheiro
	Date: 24/11/25 08:26
	Description: Programa que le um numero, soma ele até dar 100 e informa quantas vezes ele somou
*/
#include <stdio.h>

int somar(int);

//Variáveis Globais
int soma = 0; int i = 0;

int main()
{
	int num = 0; int result = 0;
	printf("Digite um número: "); scanf("%d", &num);
	
	result = somar(num);
	printf("\n\nNumero de vezes que foi somado: %d", result);
}

int somar(int num)
{
	if(soma >= 100)
		return i;
	soma = soma + num;
	i++;
	somar(soma);
}
