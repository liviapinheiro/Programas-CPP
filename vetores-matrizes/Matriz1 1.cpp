/*
	Name: Matriz1.cpp
	Author: Livia Pinheiro
	Date: 20/05/25 09:38
	Description: Programa para demonstrar operações com matrizes (Array bidimensional).
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3]; //3 linhas e 3 colunas. É uma matriz quadrada, pq tem a msm qtd de linhas e colunas. Neste caso, uma matriz quadrada de ordem três;
	int i, j; // indices pra linha e pra coluna;
	int ordem = 3; 
	int soma = 0;
	i = j = 0; 
	
	// Conjunto de laços de repetição para preenchimento em linha 
	// p preencher em linha, quem varia no laço mais interno é o contador da coluna (j)
	do
	{
		 do
		 {
		 	printf("Digite o número [%d][%d]: ", i, j);
		 	scanf("%d", &mat[i][j]);
		 	j++;
		 }while(j < 3);
	 j = 0; i++;
	 
	}while(i < 3);
	puts("\n\nMatriz CARREGAADAAAAAA!!!");
	
	//Diagonal Principal (DP)
	printf("\nElementos da Diagonal Principal (DP)\n");
	for(i = 0; i < 3; i++)
		for( j = 0; j < 3; j++)
			if( i == j)
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				
	// Diagonal Secundária (DS)
	printf("\nElementos da Diagonal Secundária (DS)\n");
	for(i = 0; i < 3; i++)
		for( j = 0; j < 3; j++)
			if( i + j == 3 - 1)
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				
				
	// Acima da DP 
	printf("\nElementos acima da DP\n");
	for(i = 0; i < 3; i++)
		for( j = 0; j < 3; j++)
			if( j > i)
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				
	// Abaixo da DP
	printf("\nElementos abaixo da DP\n");
	for(i = 0; i < 3; i++)
		for( j = 0; j < 3; j++)
			if( i > j)
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				
	// Acima da DS
	printf("\nElementos acima da DS\n");
	for(i = 0; i < 3; i++)
		for( j = 0; j < 3; j++)
			if( i + j < 2)
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				
	// Abaixo da DS
	printf("\nElementos da Diagonal Secundária (DS)\n");
	for(i = 0; i < 3; i++)
		for( j = 0; j < 3; j++)
			if( i + j >= 3)
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
	
	
	
	
	// WHILE / FOR - DS
	printf("\n(WHILE/FOR)Elementos da Diagonal Secundária (DS)\n");
	i = 0; soma = 0;
	while(i < 3)
	{
		for( j = 0; j < 3; j++)
			if( i + j == 3 - 1)
			{	
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				soma = soma + mat[i][j];
			}
		i++;
	}
	printf("\nSoma dos elementos: %d", soma);
	
	
	// DO WHILE / WHILE - Acima da DP 
	printf("\n(DO WHILE / WHILE) Elementos acima da DP\n");
	i = 0; soma = 0;
	do
	{
		j = 0;
		while(j < 3)
		{
			if(j > i)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				soma = soma + mat[i][j];
			}		
		j++;
		}
		i++;
	}while(i < 3);
	printf("\nSoma dos elementos: %d", soma);
	
	
	//DO WHILE / FOR - Abaixo da DP
	printf("\n(DO WHILE / FOR) Elementos abaixo da DP\n");
	i = 0; soma = 0;
	do
	{
		for( j = 0; j < 3; j++)
			if(i > j)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				soma = soma + mat[i][j];
			}
		i++;
	}while(i < 3);
	printf("\nSoma dos elementos: %d", soma);
	
	
	//FOR / DO WHILE - Acima da DS
	printf("\n(FOR / DO WHILE) Elementos acima da DS\n");
	soma = 0;
	for(i = 0; i < 3; i++)
	{
	j = 0;
		do
		{
			if( i + j < 3 - 1)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);	
				soma = soma + mat[i][j];
			}
			j++;
		}while(j < 3);
	}
	printf("\nSoma dos elementos: %d", soma);
	
		
	//FOR / WHILE - Abaixo da DS
	printf("\n(FOR / WHILE) Elementos abaixo da DS\n");
	soma = 0;
	for(i = 0; i < 3; i++)
	{
		j = 0;
		while(j < 3)
		{
			if(i + j >= 3)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
				soma = soma + mat[i][j];
			}	
			j++;
		}
	}
	printf("\nSoma dos elementos: %d", soma);	
}//fim
