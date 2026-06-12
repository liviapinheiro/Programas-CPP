/*
	Name: PositivosNegativos.cpp
	Author: Livia Pinheiro
	Date: 13/04/25 16:45
	Description: Programa para ler uma quantidade de números, fazer a média e tratar da quantiade de positivos e negativos.
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int qtdpos, qtdneg, i;
	float num, somaneg, somapos, mediapos, medianeg;
	
	qtdpos = qtdneg = i = 0;
	num = somapos = somaneg = mediapos = medianeg = 0.0;
	
	printf("Quantidade de números: "); scanf("%d", &i);
	while(i>0)
	{
		printf("Insira um número: "); scanf("%f", &num);
		if (num > 0){
			somapos = somapos + num;
			qtdpos++;}
		else if (num < 0){
				somaneg = somaneg + num;
				qtdneg++;}
				
	i--;
	}//fim do while
	mediapos = somapos/qtdpos;
	medianeg = somaneg/qtdneg;
	
	printf("Quantidade de positivos: %d", qtdpos);
	printf("Quantidade de negativos: %d", qtdneg);
	printf("Média dos positivos: %d", mediapos);
	printf("Média dos negativos: %d", medianeg);
	
}//fim do programa
