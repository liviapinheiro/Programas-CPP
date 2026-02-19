/*
	Name: SwitchPizza.cpp
	Author: Livia Pinheiro 
	Date: 10/06/25 17:26
	Description: Programa onde o usuario escolhe entre 10 sabores de pizza e o pizzaiolo é informado
*/

// IDEIA: Salvar todos os sabores que a pessoa escolheu em um vetor, e mostrar no final quais os sabores que ela pediu.
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	int i, opcao;
	i = opcao = 0;
	
	printf("Quantos sabores de pizza você deseja pedir?"); scanf("%d", &i);
	
	int vet[i];
	
	while (i > 0)
	{
		opcao = 0;
		system("cls");
		printf("---Menu de Opções---\n");
		printf("------------------------------\n");
		printf("1 - Queijo\n2 - Calabresa\n3 - Pepperoni\n4 - Frango\n");
		printf("5 - Portuguesa\n6 - Vegetariana\n7 - Brócolis\n8 - Chocolate\n 9 - Morango\n 10 - Doce de leite\n99 - Sair");
		printf("------------------------------\n");
		puts("");
		
		printf("Sabor: "); scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1: vet[i] = ""
		}
	}
}//programa
