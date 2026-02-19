/*
	Name: PonteiroVetor.cpp
	Author: Livia Pinheiro
	Date: 10/11/25 10:22
	Description: Programa para manipular passagem de estruturas do tipo vetor para uma função
*/
#include <stdio.h>

void imprimir(int *, int *);
void rimirpmi(int *);

int main()
{
	int vet[] = {7, 33, -5, 14, 2};
	
	printf("\nEndereco do vetor: %p", vet[0]);
	printf("\nEndereco do vetor: %p", vet[1]);
	printf("\nEndereco do vetor: %p", vet[2]);
	printf("\nEndereco do vetor: %p", vet[3]);
	printf("\nEndereco do vetor: %p", vet[4]);
	
	puts("\n\nConteudo do vetor:");
	imprimir(vet, &vet[4]);
	
	puts("\n\nConteudo do vetor ao contrario:");
	rimirpmi(vet);
}

//Função para imprimir o conteúdo de um vetor
void imprimir(int *v, int *vlr)
{
	for(int i = 0; i < 5; i++)
		printf("%d|", v[i] * *vlr);
}

void rimirpmi(int *vetor)
{
	for(int i = 5; i >= 0; i--)
		printf("%d|", vetor[i]);
}



