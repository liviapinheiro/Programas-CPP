/*
	Name: EscreverEmArquivoTXT.cpp
	Author: Livia Pinheiro
	Date: 22/09/25 08:21
	Description: Programa que escreve em um arquivo do tipo TXT
*/
#include <stdio.h>

main()
{
	FILE *fp; // declara um ponteiro para um tipo de arquivo 
	char ch[100]; // variavel para armazenar um caractere
	
	printf("Digite o texto: "); gets(ch);
	//Abre o arquivo ""meu_texto.txt" em modo escrita "w"
	
	fp = fopen("meu_texto.txt", "w");
	
	if(fp == NULL) //verifica se deu erro ao abrir o arquivo
	{
		printf("Erro ao abrir o arquivo para escrita :(");
		return 1;
	}
	
	//Escreve um texto no arquivo
	fprintf(fp, for(int i = 65; i < 91; i++)
	{
		x++;
		printf("%c - %d\t", i, i);
		if(x > 5)
		{
			puts(" ");
			x = 0;	
		}	//só pra pular linha
	});
	puts("Arquivo texto gerado com sucesso!");
	fclose(fp); //Fecha o arquivo após a escrita.
	
}
