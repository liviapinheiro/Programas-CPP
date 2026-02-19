/*
	Name: palindromo.cpp
	Author: Livia Pinheiro
	Date: 01/09/25 08:48
	Description: Programa que identifica se uma sequência de caracteres é ou não um palíndromo
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[20];
	printf("Digite uma palavra: ");
	gets(palavra);
	
	int i, j, flag;
	int tam = 0; 
	flag = 1;
	
	for(i = 0; palavra[i] != '\0'; i++)
		tam = tam + 1;
	printf("tamanho: %d", tam);
	
	j = tam - 1;
	
	for(i = 0; i < j; i++)
	{
		if(palavra[i] != palavra[j])
		{
			flag = 0; 
			break;
		}
	j--; 
	}
	
	if(flag == 1)
		printf("\nÉ um palindromo!");
		else if(flag == 0)
			printf("\nNão é palindromo");
	 
}
