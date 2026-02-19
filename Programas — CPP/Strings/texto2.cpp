/*
	Name: texto2.cpp
	Author: Livia Pinheiro
	Date: 01/09/25 08:20
	Description: Programa para manipular strings 2
*/

#include <stdio.h>
#include <locale.h>
/*
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20];
	
	printf("Nome: ");
	scanf(" %s", &nome);
	
	printf("\nSeu nome: %s", nome);
} //Esse aqui funciona para casos onde o usuario digita apenas uma palavra
*/

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[20];
	int tam = 0;
	
	printf("Nome: ");
	gets(nome);
	
	tam = sizeof(nome);
	
	printf("Tamanho da variável: %d", tam);
	printf("\nSeu nome: %s", nome);
	
	int i;
	puts("\n\nConteúdo do vetor nome: ");
	for(i = 0; nome[i] != '\0'; i++)
		printf("%c|", nome[i]);
	
} // Esse aqui funciona para mais de uma palavra



