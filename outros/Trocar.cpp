/*
	Name: Troca.cpp
	Author: Livia Pinheiro
	Date: 08/09/25 08:35
	Description: Programa para realizar a troca de valores entre duas variáveis
*/
#include <stdio.h>

//Sessão de Prototipação
void trocar(int *, int *); //o asterisco significa que estamos passando uma referencia

main()
{
	int a, b;
	a = b = 0;
	
	printf("Digite o valor de A: ");	scanf("%i", &a);
	printf("Digite o valor de B: ");	scanf("%i", &b);
	
	trocar(&a, &b);
	
	printf("A: %d\n", a);
	printf("B: %d\n", b);
		
}//main

//Função para trocar os valores de duas variáveis
void trocar(int *a, int *b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
	
	/*
	int aux = 0;
	aux = *a;
	 *a = *b;
 	 *b = aux;
	*/
}
