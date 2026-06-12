/*
	Name: BubbleSort.io
	Author: Livia Pinheiro
	Date: 24/03/26 11:00
	Description: Programa para demonstrar o funcionamento do método de ordenação Bubble Sort.
*/

#include <stdio.h>
#include <windows.h>
#include <time.h>

//Sessão de Prototipação
void bubbleSort(int *, int);

//Variáveis globais
int comp, trocas;


main()
{
	//int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	//int vet[] = {17, 17, 17, 17, 17, 17, 17, 17, 17, 17};
	int vet[1000];
	int tam = sizeof(vet)/sizeof(int);
	comp = trocas = 0;
	int i = 0;
	
	srand(time(NULL)); //plantar uma semente baseado na hora
	for(i = 0; i < tam; i++)
		vet[i] = rand()%100000;
	
	puts("VETOR ORIGINAL: ");
	for(i = 0; i < tam; i++)
		printf("%d|", vet[i]);
	
	bubbleSort(vet, tam);
	
	puts("\n\nVetor ordenado pelo Bubble Sort:");
	for(i = 0; i < tam; i++)
		printf("%d|", vet[i]);
		
	printf("\n\nQtd de comparacoes: %d\n", comp);
	printf("Qtd de trocas: %d\n", trocas);
}//main

void bubbleSort(int *vet, int tam)
{
	int i = 0;
	int aux = 0;
	
	do
	{
		i = 0;
		while(i < tam-1)
		{
			comp++;
			if(vet[i] > vet[i+1])
			{
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				trocas++;
			}
			i++;
		}//while
	
	tam--;		
	}while(tam > 0);
}//bubbleSort
