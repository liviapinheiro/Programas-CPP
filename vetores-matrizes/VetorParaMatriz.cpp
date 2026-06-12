/*
	Name: VetorParaMatriz.cpp
	Author: Livia Pinheiro
	Date: 24/11/25 08:50
	Description: Programa que carrega vetor e passa conteúdo para matriz quadrada
*/
#include <stdio.h>

void imprimirV(int []);
void imprimirM(int [][3]);

int main()
{ 
	int cont = 0;
	int vet[9];
	int mat[3][3];
	
	for(int i = 0; i < 9; i++)
	{
		printf("Digite o %d° numero do seu vetor: ", i + 1);
		scanf("%d", &vet[i]);
	}
	puts("Vetor Carregado!");
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			mat[i][j] = vet[cont];
			cont++;
		}
	}
	
	imprimirV(vet);
	imprimirM(mat);
}

void imprimirV(int *vet)
{
	puts("Conteudo do vetor:\n");
	for(int i = 0; i < 9; i++)
	{
		printf("%d|", vet[i]);
	}
}

void imprimirM(int mat[][3])
{
	puts("\n\nConteudo da matriz:\n");
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d|", mat[i][j]);
		}
	}
}
