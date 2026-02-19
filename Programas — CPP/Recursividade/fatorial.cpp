/*
	Name: fatorial.cpp
	Author: Livia Pinheiro
	Date: 20/10/25 09:52
	Description: Programa para exibir o fatorial de um número por meio de uma função recursiva >direta<
*/
#include<stdio.h>

//Prototipação
int fatorial(int); //função p calcular o fatorial de um número

main()
{
	int num, fat;
	num = fat = 0;
	
	printf("Digite o numero para calcular seu fatorial: ");
	scanf("%d", &num);
	
	printf(" Fatorial de %d! = ", num);
	
	fat = fatorial(num);
	
	printf(" = %d", fat);

}

int fatorial(int fat)
{
	if(fat == 1)
	{
		printf("1");
		return fat;
	}
	
	printf("%d x ", fat);	
	return fat * fatorial(fat - 1);
}
