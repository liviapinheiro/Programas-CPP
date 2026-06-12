/*
	Name: recursividade1.cpp
	Author: Livia Pinheiro
	Date: 20/10/25 09:23
	Description: Programa para demonstrar o uso das funções recursivas 
*/
#include <stdio.h>

//Prototipação
void fx(int);
void fy(char);

main()
{
	puts("Inicio das chamadas recursivas:");
	fx(0); //invoke
	puts("Fim da fx.");
	
	fy('a'); //invoke
	puts("Fim da fy.");
}

void fx(int a)
{
	if(a > 20)
		return;
	a = a + 1;
	printf("a: %d\n", a);
	fx(a); //chamada recursiva
}

void fy(char c)
{
	if(c == 'z')
		return;
	printf("%c\n", c);
	c++;
	fy(c);
}
