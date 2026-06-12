/*
	Name: FibonacciRecursivo.cpp
	Author: Livia Pinheiro
	Date: 20/10/25 18:53
	Description: Programa que calcula a sequência de Fibonacci usando funções recursivas
*/
#include <stdio.h>

//Prototipação
void fibonacci(int, int, int);

main()
{
	int qtd = 0;
	printf("Qtd de digitos da sequencia: "); scanf("%d", &qtd);
	
	printf("Sequencia de Fibonacci com %d elementos:\n", qtd);
	fibonacci(qtd, 0, 1);
}

void fibonacci(int termos_qfalta, int a, int b)
{
	if(termos_qfalta <= 0)
		return;
	
	printf("%d|", a);
	termos_qfalta--;
	fibonacci(termos_qfalta, b, a + b);
}
