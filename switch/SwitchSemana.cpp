/*
	Name: SwitchSemana.cpp
	Author: Livia Pinheiro
	Date: 10/06/25 16:51
	Description: Programa para ler um número e mostrar o dia da semana correspondente
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	while(1)
	{
		opcao = 0;
		system("cls");
		printf("---Menu de Opções---\n");
		printf("------------------------------\n");
		printf("1 - Domingo\n2 - Segunda-Feira\n3 - Terça-Feira\n4 - Quarta-Feira\n");
		printf("5 - Quinta-Feira\n6 - Sexta-Feira\n7 - Sábado\n8 - Sair");
		printf("------------------------------");
		puts("");
		printf("Digite o número desejado: "); scanf("%d", &opcao);
		puts("");
		
		switch(opcao)
		{
			case 1: puts("Domingo");        break;
			case 2: puts("Segunda");        break;
			case 3: puts("Terça");          break;
			case 4: puts("Quarta");         break;
			case 5: puts("Quinta");         break;
			case 6: puts("Sexta");          break;
			case 7: puts("Sábado");         break;
			case 8: puts("Até a próxima!"); break;
			default:puts("Por favor, selecione um valor válido.");
		}//switch
		
		if(opcao == 8)
			exit(0);
			else system("pause");
	}//while 
	
	
}//programa
