/*
	Name: ASCIITXT.cpp
	Author: Livia Pinheiro
	Date: 22/09/25 08:21
	Description: Programa que escreve em um arquivo do tipo TXT
*/
#include <stdio.h>

char ascii();

main()
{
	FILE *fp; // declara um ponteiro para um tipo de arquivo 
	char ch[100]; // variavel para armazenar um caractere
	
	fp = fopen("ASCII.txt", "w");
	
	if(fp == NULL) //verifica se deu erro ao abrir o arquivo
	{
		printf("Erro ao abrir o arquivo para escrita :(");
		return 1;
	}
	
	//Escreve um texto no arquivo
	fprintf(fp, ascii);
	puts("Arquivo texto gerado com sucesso!");
	fclose(fp); //Fecha o arquivo após a escrita.
	
}

char ascii()
{
	int i = 0;
	int x = 0;
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
}
