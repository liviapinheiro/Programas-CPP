/*
	Name: MatrizFuncao.cpp
	Author: Livia Pinheiro
	Date: 29/09/25 07:59
	Description: Programa para manipular matrizes por meio de funções
*/

#include <stdio.h>

//Prototipação
void imprimirMatriz(int [][3], int); //1º colchete vai vazio e o 2º informa a dimensão da matriz. 
void trocarZeroUm(int [][3], int);

int main()
{
	int i, j;
	int mat[3][3]; //Matriz quadrada de ordem 3
	
	puts("Digite os nove elementos da matriz:");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		scanf("%d", &mat[i][j]);
	}
	puts("Elementos carregados com sucesso.");
	
	imprimirMatriz(mat, 3);
	trocarZeroUm(mat, 3);
	imprimirMatriz(mat, 3);
	
}//main

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

void trocarZeroUm(int m[][3], int ordem)
{
	//Números > 10 = 1
	//Números < 10 = 0
	
	int i, j;
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
		{
			if(m[i][j] > 10)
				m[i][j] = 1;
				else m[i][j] = 0;
		}
	}
}

