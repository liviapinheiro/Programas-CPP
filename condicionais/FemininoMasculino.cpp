/*
	Name: FemininoMasculino.cpp
	Author: Livia Pinheiro
	Date: 18/03/25 11:55
	Description: Programa para identificar o sexo do usuário a partir de sua resposta.
*/

#include <stdio.h>

main()
{
	char sexo; //variavel para armazenar uma unica letra ou um caracter qualquer
	sexo = ' ';
	
	printf("Digite o seu sexo (M/F):  "); scanf("%c", &sexo);
	if (sexo == 'M' || sexo == 'm')  // a condicional OU é representada na linguagem C através do sinal | 
		puts("Voce eh do sexo masculino.");
	else 
		puts("Voce eh do sexo feminino!");
	
}//Fim do programa
