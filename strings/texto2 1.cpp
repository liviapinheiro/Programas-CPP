/*
	Name: texto2.cpp
	Author: Livia Pinheiro
	Date: 08/09/25 10:40
	Description: Programa demonstrar o uso de ponteiros com tratamento de strings
*/

#include <stdio.h>
#include <string.h>

main()
{
	char *nome; int tam = 0;
	
	printf("Nome: ");
	fgets(nome);
	
	tam = sizeof(nome) / sizeof(char);
	printf("Tamanho do vetor %d", tam);
	printf("Nome digitado: %s", nome);
	
}//fim do programa
