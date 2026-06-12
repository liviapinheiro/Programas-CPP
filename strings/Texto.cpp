/*
	Name: texto.cpp
	Author: Livia Pinheiro
	Date: 01/09/25 07:50
	Description: Programa para manipulação de Strings
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char resp; // resposta de "S" ou "N"
	int idade;
	float altura;
	
	resp = ' ';
	idade = 0;

	printf("Digite sua altura: "); scanf("%f", &altura);
	printf("\nVocê respondeu %.2f", altura);

	
	printf("\n\nDigite 'S' ou 'N': "); scanf(" %c", &resp);
	printf("\nVocê respondeu %s", (resp == 's' || resp == 'S')?"sim":"não"); //(condição)?açãoverdadeira:açãofalso
	
	printf("\n\nDigite sua idade: "); scanf("%d", &idade);
	printf("\nSua idade é %d", idade);
}
