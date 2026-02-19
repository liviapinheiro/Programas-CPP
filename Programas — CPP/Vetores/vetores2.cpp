/*
	Name: vetores2.cpp
	Author: Livia Pinheiro
	Date: 09/05/25 17:44
	Description: Programa para ler sexo, idade e altura de 10 pessoas e mostrar os dados agrupados.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float altura[3];
	char sexo[3];
	int idade[3], i;
	i = 0;
	while(i < 3)
	{
		printf("Insira a %iª altura: ", i+1); scanf("%f", &altura[i]);
		printf("Insira a %iª idade: ", i+1); scanf("%d", &idade[i]);
		printf("Insira o %iº sexo (f/m): ", i+1); scanf(" %c", &sexo[i]);

		puts("Pessoa cadastrada com sucesso.");
		i++;
	}//while
	puts("Dados preenchidos com sucesso!");
	
	i=0;
	while(i<=3)
	{
		printf("%dª pessoa: \n", i+1);
		printf("%f", altura[i]);
		printf("%d", idade[i]);
		printf(" %c", sexo[i]);
		i++;
	}//while
	
}//fim
