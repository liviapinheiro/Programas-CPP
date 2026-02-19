/*
	Name: MultiplaEscolha.cpp
	Author: Livia Pinheiro
	Date: 10/06/25 11:37
	Description: Programa que apresenta uma estrutura de "multipla escolha" para o usuário.
				 Normalmente é utilizada para montagem de menus de opção.
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h> // pra usar a função system

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	while(1) //laço de repetição infinito - 1 significa true :D e 0 significa false D: 
	{
		opcao = 0;
		system("cls"); //cls - clear screen
		printf("Menu de opções:\n");
		printf("------------------------\n");
		printf("1 - Aparecerá o UM\n2 - Aparecerá o DOIS\n3 - Aparecerá o TRÊS\n24 - Sair");
		printf("------------------------\n");
		printf("Digite uma opção: "); scanf("%d", &opcao); puts(" ");
		
		//Estrutura de múltipla escolha com switch...case (switch = suite)
		switch(opcao)
		{
			case 1: puts("Tu escolheu o número 1 mano");
					puts("");
					break;
			case 2: puts("Você digitou o 2 vei");
					puts("");
					break;
			case 3: puts("Sua escolha foi a terceira mlk");
					puts("");
					break;
			case 24:puts("TCHAUUUUUU");
					break;
			default:puts("burro demais mano escolhe certo >:|");
					puts("");	
		}//switch
		
		if(opcao == 24)
			exit(0);
			else system("pause");
		
	}//while
		
}//programa
