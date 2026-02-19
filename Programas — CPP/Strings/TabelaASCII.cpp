/*
	Name: TabelaASCII.cpp
	Author: Livia Pinheiro
	Date: 22/09/25 07:59
	Description: Programa para gerar a tabela ASCII de caracteres internacionais
*/

#include <stdio.h>

main()
{
	int caractere, i, x;
	caractere = i = x = 0;
	
	puts("=====Tabela ASCII:=====");
	puts("----Maiusculo:----");
	for(i = 65; i < 91; i++)
	{
		x++;
		printf("%c - %d\t", i, i);
		if(x > 5)
		{
			puts(" ");
			x = 0;	
		}	//só pra pular linha
	}
	
	puts("\n\n----Minusculo:----");
	for(i = 97; i < 123; i++)
	{
		x++;
		printf("%c - %d\t", i, i);
		if(x > 5)
		{
			puts(" ");
			x = 0;	
		}	//só pra pular linha
	}
	
	
	
}//main
