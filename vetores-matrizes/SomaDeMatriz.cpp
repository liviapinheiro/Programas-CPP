/*
	Name: SomaDeMatriz.cpp
	Author: Livia Pinheiro
	Date: 24/11/25 09:56
	Description: Programa que realiza a soma entre matrizes quadradas
*/
#include <stdio.h>

int somarM(int [][3]);

int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int s1, s2; 
	s1 = s2 = 0;
	
	for(int i = 0; i < 3; i++)
	{ 
		for(int j = 0; j < 3; j++)
		{
			printf("Digite um numero: "); scanf("%d", &mat1[i][j]);
		}
	}
	
	puts("\nMatriz Carregada!\n");
	
	for(int i = 0; i < 3; i++)
	{ 
		for(int j = 0; j < 3; j++)
		{
			printf("Digite um numero: "); scanf("%d", &mat2[i][j]);
		}
	}
	
	puts("\nMatriz Carregada!\n");
	
	s1 = somarM(mat1);
	s2 = somarM(mat2);
	
	printf("Soma de M1: %d\n", s1);
	printf("Soma de M2: %d\n", s2);
	
	printf("Soma de M1 e M2: %d\n", s1 + s2);
	
}

int somarM(int mat[][3])
{
	int soma = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			soma = soma + mat[i][j];
		}	
	}
	
	return soma;
}

