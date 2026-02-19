/*
	Name: QuadradoMagico.cpp
	Author: Livia Pinheiro
	Date: 29/09/25 08:35
	Description: Programa para verificar se a matriz digitada pelo usuário é um quadrado mágico 
*/
#include <stdio.h>

void imprimirMatriz(int [][3], int);
int verificarQM(int [][3], int);

int main()
{
	int i, j;
	int mat[3][3];
	
	puts("Digite os nove elementos da matriz:");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		scanf("%d", &mat[i][j]);
	}
	puts("Elementos carregados com sucesso.");
	
	if (verificarQM(mat, 3) == 1)
		printf("NAO EH");
		else printf("EH!!!!");
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

int verificarQM(int m[][3], int ordem)
{
	int i, j, soma, verif;
	soma = verif = 0;
	
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
		{
			soma = soma + m[i][j];		
		}
		if (soma != 15)
		verif = 1;
		else soma = 0;
	} //verifica linha
	
	for(j = 0; j < ordem; j++)
	{
		for(i = 0; i < ordem; i++)
		{
			soma = soma + m[i][j];		
		}
		if (soma != 15)
		verif = 1;
		else soma = 0;
	} //verifica coluna
	
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
		{
			if(i == j)
			{
				soma = soma + m[i][j];
			}
				if (soma != 15)
		verif = 1;
		else soma = 0;
		}	
	} // verifica diagonal principal
	
	for(i = 0; i < ordem; i++)
	{
		for(j = 0; j < ordem; j++)
		{
			if(i + j == ordem + 1)
			{
				soma = soma + m[i][j];
			}
				if (soma != 15)
		verif = 1;
		else soma = 0;
		}	
	}
	
	//diagonal secundaria eh i +  = ordem + 1
	return verif;
}
