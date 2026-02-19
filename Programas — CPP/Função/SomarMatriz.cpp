/*
	Name: SomaMatriz.cpp
	Author: Livia Pinheiro
	Date: 29/09/25 09:58
	Description: Soma matrizes numa terceira matriz 
*/
#include <stdio.h>

void somarMatriz(int [][3], int [][3], int [][3], int);
void imprimirMatriz(int [][3], int);
void carregarMatriz(int [][3], int);

int main()
{
	int mA[3][3], mB[3][3], mC[3][3]; 
	carregarMatriz(mA, 3);
	carregarMatriz(mB, 3);
	
	puts("\n\nSoma das matrizes:");
	somarMatriz(mA, mB, mC, 3);
	imprimirMatriz(mC, 3);
	
}

void carregarMatriz(int m[][3], int ordem)
{
	int i, j;
	puts("Digite os nove elementos da matriz:");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		scanf("%d", &m[i][j]);
	}
	puts("Elementos carregados com sucesso.");
}

void imprimirMatriz(int m[][3], int ordem)
{
	int i, j;
	puts("\nConteudo da Matriz:");
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
		printf("%d|", m[i][j]);
	puts("");
	}
}

void somarMatriz(int mA[][3], int mB[][3], int mC[][3], int ordem)
{
	int i, j;
	for(i = 0; i < ordem; i++)
		for(j = 0; j < ordem; j++)
		{
			mC[i][j] = mA[i][j] + mB[i][j]; 
		}
}
