/*
	Name: Lacos.cpp
	Author: Livia Pinheiro e Raylla Nascimento
	Date: 01/04/25 09:46
	Description: Programa para demonstrar a utilização dos três tipos de laços de repetição
*/

//escopo: dentro do main

#include <stdio.h>
#include <locale.h>

main( )
{
	
	int num = 0; 
	int cont;
	printf("Digite um valor: ");
	scanf("%d", &num);
	

	//Repita ... até (Usado para quando preciso fazer pelo menos uma vez)
	cont = 0; //Inicializando o contador
	do
	{
		printf("Fatec Só Para Baixinhos | "); // pipe (|)
		cont = cont + 1; //Este é o incremento
	}while (cont < num);
	

	
	
	//Enquanto ... faça (Usado para um número indefinido de vezes)3
	cont = 0; //Inicializando o contador
	while (cont < num)
	{
		printf("\nFazendinhar");
		cont++; //é igual a cont = cont + 1 | Este é o incremento
		
	}
	
	puts(""); // Para pular linha :)
	//Para ... faça (Usado para uma quantidade exata de vezes)
	for(cont = 0; cont < num;cont++) 
	{
		puts("POR FAVOOOORRRR CADE O AR CONDICIONADO #HELP");
	}
	
	
}//fim do programa
