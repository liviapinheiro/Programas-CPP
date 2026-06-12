/*
	Name: CompararDuasStrings.cpp 
	Author: Livia Pinheiro
	Date: 15/09/25 07:52
	Description: Programa que compara duas strings e diz qual é a maior e até onde elas são iguais
*/
//Sessão de importação de bibliotecas
#include <stdio.h>
#include <locale.h>

//Sessão de Prototipação
int calcularTam(char*);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char str1[10], str2[10], igual[10];
	
	printf("Primeira string: "); gets(str1);
	printf("Segunda string: ");  gets(str2);
	
	printf("\nTamanho 1: %d", calcularTam(str1));
	printf("\nTamanho 2: %d", calcularTam(str2));
	
	if(calcularTam(str1) > calcularTam(str2))
		printf("\nA primeira string é maior.");
		else printf("\nA segunda string é maior.");
		
	for(int i = 0; i < 10; i++)
	{
		if(str1[i] == str2[i])
			igual[i] = str1[i];
	}
	
	puts("\nAté onde é igual:");
	for(int i = 0; i < calcularTam(igual); i++)
		printf("%c", igual[i]);
}

int calcularTam(char *str)
{
	int tam = 0;
	while(str[tam] != '\0')
		tam++;
		
	return tam;
}
