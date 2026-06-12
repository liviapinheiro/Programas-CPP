/*
	Name: HeapSort.cpp
	Author: Livia Pinheiro
	Date: 05/05/26 11:30
	Description: Programa para demonstrar a implementação do método de ordenação Heap Sort.
*/
#include <stdio.h>
#include <stdlib.h>

//Seção de Prototipação
void heapfy(int *, int, int);
void heapSort(int *, int);
void swap(int *, int*);
void imprimir(int *, int);

//Variáveis Globais
int tam;

int main()
{
	int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int tam = sizeof(vet)/sizeof(int);
	
	puts("Vetor Original:");
	imprimir(vet, tam);
	
	heapSort(vet, tam);
	
	puts("Vetor ordenado pelo Heap Sort:");
	imprimir(vet, tam);
}

//Função para troca de posições (swap)
void swap(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

//Função que faz heapfy, ou seja, testa se o elem. PAI é maior que os filhos (MAX HEAP) ou se é menor que os filhos (MIN HEAP)
// e invoca o "swap()" para fazer a troca
void heapfy(int *vet, int n, int i)
{
	int maior = i; //assume que inicialmente, o maior é a raiz
	int esq = (2 * i) + 1; //indice do filho da ESQUERDA
	int dir = (2 * i) + 2;// indice do filho da DIREITA
	
	//Se o filho da esquerda é maior que o pai(variavel "maior"
	if(esq < n && vet[esq] > vet[maior])
		maior = esq;
	//Se o filho da direita é maior que o pai
	if(dir < n && vet[dir] > vet[maior])
		maior = dir;
	
	//Se o maior não for o pai
	if(maior != i)
	{
		swap(&vet[i], &vet[maior]);
		//invoca recursivamente heapfy na sub-árvore afetada
		heapfy(vet, n, maior);
	}
}

//Função principal que monta a árvore e submete a função recursiva heapfy para verificar as regras de MAX HEAP ou MIN HEAP
void heapSort(int vet[], int n)
{
	//1. constroi um Max Heap
	for(int i = (n/2) - 1; i >= 0; i--)
		heapfy(vet, n, i);
		
	//2. Troca a raiz com o ultimo elemento e reduz a árvore
	for(int i = n - 1; i > 0; i--)
	{
		//Move o elemento atual (raiz) para o fim do array.
		swap(&vet[0], &vet[i]);
		
		//invoca a função heapfy para restaurar a propriedade do heap
		heapfy(vet, i, 0);
	}
}

//Função para imprimir o vetor
void imprimir(int *vet, int tam)
{
	for(int i = 0; i < tam; i++)
		printf("%d|", vet[i]);
	puts("");
}
