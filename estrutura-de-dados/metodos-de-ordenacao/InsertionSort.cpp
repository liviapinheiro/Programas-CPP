/*
	Name: InsertionSort.cpp
	Author: Livia Pinheiro
	Date: 07/04/26 10:58
	Description: Programa para demonstrar a implementação do método de ordenação Insertion Sort
*/

//Importação de bibliotecas
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

//Prototipação de Funções
void insertionSort(int *, int);
int buscaBinaria(int *, int, int);
int buscaSequencial(int *, int, int);

//Variáveis Globais
int trocas, comp;
clock_t inicio, fim;
double tempo;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	//int vet[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int vet[4000];
	int tam, x;
	tam = sizeof(vet)/sizeof(int);
	
	//Para randomizar os itens para ordenar
	srand(time(NULL)); //plantar uma semente baseado na hora
	for(x = 0; x < tam; x++)
		vet[x] = rand()%40000;
	
	printf("Vetor ORIGINAL: \n");
	for(x = 0; x < tam; x++)
		printf("%d|", vet[x]);
	puts("\n");
		
	insertionSort(vet, tam);
	
	printf("Vetor ORDENADO com Insertion Sort: \n");
	for(x = 0; x < tam; x++)
		printf("%d|", vet[x]);
	puts("\n");
	
	printf("Quantidade de trocas e comparações:\n");
	printf("Trocas: %d\n", trocas);
	printf("Comparações: %d", comp);
	
	puts("");
	printf("Tempo Decorrido para a ordenação: %.5f\n", tempo);
	
	
	//=============BUSCA BINÁRIA E SEQUENCIAL=============
	int elem = 0;
	printf("\n\nDigite um elemento para ser localizado: ");
	scanf("%d", &elem);
	puts("\nBUSCA BINARIA");
	buscaBinaria(vet, tam, elem);
	puts("\nBUSCA LINEAR");
	buscaSequencial(vet, tam, elem);
}

//Função para realizar a busca binária ou logaritmica
int buscaBinaria(int *vet, int tam, int elem)
{
	int inicio, fim, meio, comp;
	inicio = comp = 0;
	fim = tam - 1;
	
	while(inicio <= fim)
	{
		meio = (inicio + fim) / 2;
		comp++;
		if(vet[meio] != elem)
		{
			if(vet[meio] > elem)
				fim = meio - 1;
			else inicio = meio + 1;
		}
		else
		{
			printf("Elemento localizado, na posição %d", meio + 1);
			printf("\nForam feitas %d comparações.", comp);
			return elem;
		}	
	}
		
}

//Função para realizar a busca linear ou sequencial
int buscaSequencial(int *vet, int tam, int elem)
{
	int comp = 0;
	
	for(int i = 0; i < tam; i++)
	{
		comp++;
		if(vet[i] == elem)
		{
			printf("Elemento localizado, na posição %d", i);
			printf("\nForam feitas %d comparações.", comp);
			return elem;
		}
	}
	puts("Elemento não localizado!");
}

//Função do método Insertion Sort
void insertionSort(int *vet, int tam)
{
	int i, j, chave;
	
	inicio = clock(); //Inicio da contagem de tempo
	for(i = 1; i < tam; i++) // O i é a variável que caminha da esquerda para a direita
	{
		chave = vet[i];
		j = i - 1; // o j recebe a posição do número anterior à chave
		
		while(j >= 0 && chave < vet[j])
		{
			vet[j + 1] = vet[j];
			j--;
			trocas++;
			comp++;
		}
		vet[j + 1] = chave;
		trocas++;
	}
	fim = clock(); //Fim da contagem de tempo
	tempo = ((double)fim - inicio)/CLOCKS_PER_SEC;
	
}
