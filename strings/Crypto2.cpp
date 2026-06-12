/*
	Name: Crypto2.cpp
	Author: Livia Pinheiro
	Date: 08/09/25 07:59
	Description: Programa para cifrar uma mensagem realizando o "merge" entre dois vetores e caracteres 
*/
 
 #include <stdio.h>
 
 //Sessão de prototipação
 void merge(char [], char []);

//Variáveis globais, que existem em todas as funções
char crypto[40]; //junção dos dois vetores
int i, j; 

int main()
{
	i = j = 0;
	char nome[20]; //nome completo
	char docs[20]; //cpf e rg
	
	printf("Digite seu nome completo: ");
	gets(nome);
	printf("Digite seu CPF e RG: ");
	gets(docs);
	
	merge(nome, docs); //Estamos passando vetores como parâmetro para a função merge
	puts("\n===Texto Cifrado===");
	for(j = 0; crypto[j] != '\0'; j++)
		printf("%c", crypto[j]);
	
}//main

//Função para realizar a mistura (merge) entre os dois vetores
void merge(char nome[], char docs[]) // Essas variáveis, embora tenham o mesmo nome, NÃO são as mesmas do main!
{
	for(i = 0; nome[i] != '\0'; i++)
	{
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j + 2;
	}
}//merge 

