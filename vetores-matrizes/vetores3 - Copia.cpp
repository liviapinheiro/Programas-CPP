/*
	Name: vetores3.cpp
	Author: Livia Pinheiro
	Date: 12/05/25 14:11
	Description: Programa para ler a altura de 7 pessoas e mostrar a média aritmética delas.
*/
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float alt[7], somalt, media;
	int i;
	
	i = 0;
	somalt = media = 0.0;
	
	do
	{
		printf("Insira a altura: ");
		scanf("%f", &alt[i]);
		somalt = somalt + alt[i];
		i++;
	}while(i < 7);
	
	puts("Vetor carregado!");
	media = (somalt / i);
	printf("Média aritmética: %f", media);
	
	
	
		
}//fim
