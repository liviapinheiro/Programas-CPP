/*
	Name: ImprimirNome.cpp 
	Author: Livia Pinheiro
	Date: 15/09/25 07:52
	Description: Programa que lê nome, armazena em vetor, passa para função e imprime ao contrario
*/
//Sessão de importação de bibliotecas
#include <stdio.h>

//Sessão de Prototipação
void imprimirNome(char*, int);

int main()
{
	int tam, i;
	char nome[30];
	tam = i = 0;
	
	printf("Digite seu nome: "); gets(nome);
	
	while(nome[tam] != '\0')
	{
		tam++;
	}
	
	printf("\n\nTAMANHO DO VETOR: %d\n\n", tam);
	
	imprimirNome(nome, tam);
	
}//main

void imprimirNome(char *nome, int tam)
{
	for(int i = tam - 1; i >= 0; i--)
		printf("%c|", nome[i]);
}



