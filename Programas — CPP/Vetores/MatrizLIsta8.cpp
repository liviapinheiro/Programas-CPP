/*
	Name: MatrizLista8.cpp
	Author: Livia Pinheiro
	Date: 26/05/25 16:05
	Description: Programa para ler 16 números em uma matriz e imprimi-los sob certas condições
*/

#include <stdio.h>

int main()
{
	
	int mat[4][4];
	int i, j;
	
	for(i = 0; i < 4; i++)
	{
		j = 0;
		for(j = 0; j < 4; j++)
		{
		printf("Insira o numero: "); 
		scanf("%d", &mat[i][j]);
		}
	}
	
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4;j++)
		{
			if(mat[i][j] > 10)
				printf("%d", mat[i][j]);
		}
		
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4;j++)
		{
			if(mat[i][j] % 2 == 1)
				printf("%d", mat[i][j]);
		}
		
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4;j++)
		{
			if(mat[i][j] > 7)
				printf("%d", mat[i][j]);
		}
}
