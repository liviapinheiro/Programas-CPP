/*
	Name: SomarPositivosNegativos.cpp
	Author: Livia Pinheiro
	Date: 05/04/25 22:24
	Description: Programa para somar números inteiros, negativos ou positivos
*/

#include <stdio.h>

main()
{
	int num, cont, neg, pos, somapos, somaneg;
	
	num = cont = neg = pos = somapos = somaneg = 0;
	
	while(cont <= 12)
	{
		printf("Insira um numero: "); scanf("%d", &num);
		if (num = 0)
			pos++; somapos = somapos + num;
			else neg ++; somaneg = somaneg + num;
		cont ++;
	}
printf("Quantidade de positivos: ", pos);	
printf("Quantidade de negativos: ", neg);
printf("Soma de positivos: ", somapos);
printf("Soma de negativos: ", somaneg);
}//Fim.
