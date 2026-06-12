/*
	Name: vetores5.cpp
	Author: Livia Pinheiro
	Date: 12/05/25 18:27
	Description: Programa para fazer "marshalling"
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char vet1[5], vet2[5], vet3[10];
	int i, cont;
	cont = 0;
	
	for(i = 0; i < 5; i++){
		printf("Senha 1: "); scanf(" %c", &vet1[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("Senha 2: "); scanf(" %c", &vet2[i]);
	}
	
	for(i = 0; i < 5; i++){
		vet3[cont++] = vet1[i];
		vet3[cont++] = vet2[i];
	}
	
	//EXIBIÇÃO 
	for(i = 0; i < 5; i++){
		printf(" %c", vet1[i]);
	}
		
	for(i = 0; i < 5; i++){
		printf(" %c", vet2[i]);
	}
	
	for(i = 0; i < 10; i++){
		printf(" %c", vet3[i]);
	}
	
	
}//fim
