/*
	Name: MaiorMenor.cpp
	Author: Livia Pinheiro
	Date: 18/03/25 11:24
	Description: Programa para ler dois numeros inteiros e apontar qual deles é o maior.
*/

#include <stdio.h> //STanDard Input Output (biblioteca)
#include <locale.h> //biblioteca de localização de idioma (permite o uso dos acentos)
main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	a = b = 0;
	
	puts("Programa para determinar o maior número lido");
	
	printf("Digite o primeiro número: "); scanf("%d", &a);
	printf("Digite o segundo número: "); scanf("%i", &b);
	
	if(a > b)
		printf("O maior numero lido é: %d", a);
	else if(b > a)
		printf("O maior numero lido é: %i", b);
		else
		puts("Os números digitados são iguais.");
}//Fim do programa
