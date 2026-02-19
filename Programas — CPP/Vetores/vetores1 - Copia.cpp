/*
	Name: Vetores1.cpp
	Author: Livia Pinheiro
	Date: 09/05/25 17:12
	Description: Programa para carregar um vetor de 25 inteiros e exibir seu conteúdo na ordem normal e na inversa.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[25];
	int i;
		
	for(i=0; i<25; i+1)
	{
		printf("Insira o %dº número:", i+1); 
		scanf("%d", &vet[i]);
	}//for
	
	puts("O vetor foi carregado!\n");
	
	puts("Ordem correta:");
	for(i=0; i < 25; i++)
	{
		printf("%d |", vet[i]);	
	}//for
	
	puts("\nOrdem contrária:");

		for(i=24; i>=0; i--)
	{
		printf("%d |", vet[i]);	
	}//for
	
}//fim do programa
