/*
	Name: ConversorBinario.cpp
	Author: Livia Pinheiro
	Date: 27/05/25 11:35
	Description: Programa para ler um número inteiro positivo e convertê-lo para o seu equivalente binário
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int vet[30]; 
	int i = 0;
	int num, resto, quoc;
	num = resto = quoc = 0;
	
	printf("Digite um número para convertê-lo em binário: ");
	scanf("%d", &num);
	
	do
	{
			quoc = num / 2;
			resto = num - (quoc * 2);
			vet[i] = resto;
			num = quoc;
			printf("%d ", num);
			i++;
	}while(num >= 2);
	vet[i] = num;
	
	//impressão do vetor na ordem original
	puts("\n----Vetor Original----\n");
	for(i = 5; i >= 0; i--) // != significa diferente 
		printf("%d|", vet[i]);
	
}//fim
