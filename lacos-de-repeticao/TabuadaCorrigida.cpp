/*
	Name: Tabuada.cpp
	Author: Livaylla
	Date: 01/04/25 11:20
	Description: Programa para exibir a tabuada de multiplicação do número escolhido pelo usuário (Prof ver.)
*/

#include <stdio.h>
main()
{
	int num = 0;
	int i; // é a letra geralmente utilizada para indicar o contador, significa iteração ou iterator, que significa aumentar
	
	printf("Digite um numero para exibir a tabuada: ");
	scanf("%i", &num);
	i = 1;
	do 
	{
		printf("%i x %i = %i\n", num, i, num*i);
		i++;
	}while (i <= 10);
	
	
	
}//Fim do pogramah
