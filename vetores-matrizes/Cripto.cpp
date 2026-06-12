/*
	Name: Cripto.cpp
	Author: Livia Pinheiro
	Date: 03/06/25 09:46
	Description: Programa que simula uma criptografia utilizando vetores. 
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char nome[40], docs[24], cripto[65], rg[10], cpf[11];
	int i = 0;
	
					//string é uma sequência de caracteres delimitada por espaço em branco 
	
	puts("Programa para criptografar dados pessoais");
	printf("Nome Completo: "); gets(nome); //para dar entrada em uma string, usamos o gets. (get string)
	printf("CPF: "); gets(cpf);
	printf("RG: "); gets(rg);
	
	puts("\n");
	puts("====Conteúdo dos Vetores====");
	printf("Nome: %s", nome); //%s de string
	printf("\nCPF: %s", cpf);
	printf("\nRG: %s", rg);
	
	//imprimindo o vetor de nomes caracter por caracter 
	puts("\n");
	puts("\n====Nome dentro do Vetor====");
	puts("\n");
	for(i = 0; nome[i] != '\0'; i++) // o '/0' é sempre colocado automaticamente depois do ultimo espaço preenchido pelo usuário
		printf(" %c|", nome[i]);
	
	puts("\n");
	puts("\n====CPF dentro do Vetor====");
	puts("\n");
	for(i = 0; cpf[i] != '\0'; i++)
		printf(" %c|", cpf[i]);
	
		puts("\n");
	puts("\n====RG dentro do Vetor====");
	for(i = 0; rg[i] != '\0'; i++)
		printf(" %c|", rg[i]);
		
	int d = 0;
	for(i = 0; cpf[i] != '\0'; i++)
	{
		docs[d] = cpf[i];
		docs[d] = rg[i];
		d = d + 2;
	}
	
	puts("====Vetor Docs====");
	for( i = 0; i < 24; i++)
		printf(" %c|", docs[i]);
		
	//Fazendo o marshaling (nome e docs)
	int c = 0; 
 		for(i = 0; i < 71; i++)
	{
		cripto[c] = nome[i];
		cripto[c + 1] = docs[i];
		c = c + 2;
	}
	
	//Imprimindo o conteúdo do vetor cripto
	puts("\n");
	puts("====Conteúdo do Cripto====");
	puts("\n");
	for(i = 0; cripto[i] != '\0'; i++)
		printf(" %c|", cripto[i]);
	
}//fin.
