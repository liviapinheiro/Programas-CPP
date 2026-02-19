/*
	Name: criptostring.cpp
	Author: Livia Pinheiro
	Date: 01/09/25 08:48
	Description: Programa que criptografa duas strings, misturando seus conteúdos
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20], docs[20], crypto[40];
	int i, j;
	
	printf("Digite seu nome: "); gets(nome);
	printf("Digite seu RG e CPF: "); gets(docs);
	
	for(i = 0; i < 40; i++)
	{ 
		crypto[j] = nome[i];
		j++;
		crypto[j] = docs[i];
		j++;
	}
	
	puts("\n\nCrypto: ");
	for(i = 0; crypto[i] != '\0'; i++)
		printf("%d", crypto[i]);
}
