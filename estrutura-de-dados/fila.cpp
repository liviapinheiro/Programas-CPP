/*
	Name:  fila.cpp 
	Author: Livia Pinheiro 
	Date: 24/02/26 10:56
	Description: Programa para implementar uma fila do tipo FIFO!
*/

#include <stdio.h>

//Variáveis globais
int itens[5]; 
int inicio = -1; //Fazemos isso para que ele fique fora do vetor.
int fim = -1; //Fazemos isso para que ele fique fora do vetor.
int tam = 5;

//Prototipação das funções

void enqueue(int); //inserir elemento
int dequeue(); //retirar elemento
int isfull(); //retorna 1 se a fila estiver CHEIA
int isempty(); // retorna 1 se a fila estiver VAZIA
void imprimir(); //imprime a fila

main()
{
	enqueue(100);
	enqueue(101);
	enqueue(102);
	enqueue(103);
	enqueue(104);
	enqueue(105);
	
	imprimir();
	dequeue();
	//enqueue(105);
	
	dequeue();
	dequeue();
	imprimir();
	dequeue();
	dequeue();
	dequeue();
	
	imprimir();
}//main

//Função para inserir um elemento na fila
void enqueue(int elem)
{
	if(isfull() == 1)
		puts("\nTa lotado mano >:(");
	else 
	{
		if(inicio == -1)
			inicio = 0;
		fim = (fim + 1) % tam;
		itens[fim] = elem;
		printf("\nBotei o elemento %d na FIFO, ta ok?", elem);
	}	
}

//Função para retirar um elemento da fila
int dequeue()
{
	int elem;
	if(isempty() == 1)
	{
		puts("\nOxe nao tem mais ninguem na fila nao");
		return -1; //significa que nn tem nada pra retirar
	}
	else
	{
		elem = itens[inicio];
		if(inicio == fim)
		{
			inicio = -1;
			fim = -1;
		}
		else
			inicio = (inicio + 1) %tam;
		printf("\n%d foi excluido da FIFO morou?", elem);
		return elem;
	}
}

//Função que verifica se a fila está cheia
int isfull()
{
	if((inicio == (fim + 1) %tam) || (inicio == 0 && fim == tam - 1))
		return 1;
	else
		return 0;
}

//Função que verifica se a fila está vazia
int isempty()
{
	if(inicio == -1)
		return 1;
	else
		return 0;
}

//Função que imprime a fila
void imprimir()
{
	int i;
	if(isempty() == 1)
		puts("\nTa vazia a fila, meu filho");
	else
	{
		puts("\nAs coisa que ta na FIFO: ");
		for(i = inicio; i != fim + 1; i = (i+1)%tam)
			printf("%d |", itens[i]);
	}
}
