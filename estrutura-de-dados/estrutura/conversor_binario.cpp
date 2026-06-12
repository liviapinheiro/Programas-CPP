/*
	Name: conversor_binario.cpp
	Author: Livia Pinheiro
	Date: 08/03/26 18:52
	Description: Programa para converter decimais em binários usando o conceito de pilhas
*/

#include <stdio.h>
#include <locale.h>

//Sessão de Prototipação
void push(int);
int pop();
int isFull();
int isEmpty();
void show();

//Variáveis Globais
int topo = -1;
int pilha[8];
	
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int decimal = 0;
	int digito = 0;
	printf("Insira o número em decimal: ");
	scanf("%d", &decimal);
	
	while(decimal > 0)
	{
		digito = (decimal % 2);
		decimal = (decimal / 2);
		push(digito);
	}
	
	printf("\nSeu número convertido é:");
	show();
	
}

void push(int item)
{
	if(isFull() == 1)
		printf("Pilha cheia!");
	else
	{
		topo++;
		pilha[topo] = item;
		printf("\nItem incluido na pilha.");
	}
}

int pop()
{
	if(isEmpty() == 1)
		printf("Pilha vazia");
	else
	{
		topo--;
		printf("Elemento retirado da pilha.");
	}
}

int isFull()
{
	if(topo == 7)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if(topo == -1)
		return 1;
	else
		return 0;
}

void show()
{
	if(isEmpty() == 1)
		puts("Pilha vazia.");
	else
		for(int i = topo; i >= 0; i--)
		{
			printf("%d", pilha[i]);
		}
}
