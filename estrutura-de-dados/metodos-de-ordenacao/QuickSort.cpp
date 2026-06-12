/*
	Name: QuickSort.cpp
	Author: Livia Pinheiro
	Date: 12/05/26 11:40
	Description: Implementação do método de ordenação Quick Sort
*/

#include <stdio.h>

//Sessão de Prototipação
void swap(int *, int *);
int partition(int *, int, int);
void quickSort(int *, int, int);

int main()
{
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int i = 0;
	int tam = sizeof(vet)/sizeof(int);
	
	puts("VETOR ORIGINAL: ");
	for(i = 0; i < tam; i++)
		printf("%d|", vet[i]);
		puts("\n");
		
	quickSort(vet, 0, tam - 1);
		
	puts("VETOR ORDENADO PELO QUICKSORT: ");
	for(i = 0; i < tam; i++)
		printf("%d|", vet[i]);
		puts("");
		
}

//Função que realiza as partições do conjunto de dados
int partition(int *vet, int inicio, int fim)
{
	int pivot = vet[inicio]; //primeiro elemento como pivot
	int i = fim + 1;
	
	for(int j = fim; j >= inicio + 1; j--)
	{
		if(vet[j] >= pivot)
		{
			i--;
			swap(&vet[i], &vet[j]);
		}
	}
	swap(&vet[i-1], &vet[inicio]);
	return (i - 1);
}

//Função principal do Quick Sort
void quickSort(int *vet, int inicio, int fim)
{
	if(inicio < fim)
	{
		int pivot = partition(vet, inicio, fim); //esse pivot é o ENDEREÇO do pivot
		quickSort(vet, inicio, pivot - 1); //partição do lado esquerdo
		
		quickSort(vet, pivot + 1, fim); //partição do lado direito
	}
}

//Função para fazer a troca de elementos entre si
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
