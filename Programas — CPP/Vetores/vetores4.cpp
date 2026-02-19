/*
	Name: vetores4.cpp
	Author: Livia Pinheiro
	Date: 12/05/25 15:50
	Description: Programa para consultar um valor pré-existente dentro de um vetor 
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float vet[30];
	int i;

	vet[0] = 0; vet[1] = 1; vet[2] = 2; vet[3] = 3; vet[4] = 4; vet[5] = 5; vet[6] = 6; vet[7] = 7;
	vet[8] = 8; vet[9] = 9; vet[10] = 10; vet[11] = 11; vet[12] = 12; vet[13] = 13; vet[14] = 14; vet[15] = 15;
	vet[16] = 16; vet[17] = 17; vet[18] = 18; vet[19] = 19; vet[20] = 20; vet[21] = 22; vet[23] = 23; vet[24] = 24;
	vet[25] = 25; vet[26] = 26; vet[27] = 27; vet[28] = 28; vet[29] = 29; vet[29] = 29; vet[30] = 30;
	
	printf("Digite o código: "); scanf("%d", &i);
	printf("\nNúmero: %d", i);
}//fim
