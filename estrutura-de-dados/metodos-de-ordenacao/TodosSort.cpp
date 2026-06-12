/*
	Name: TodosSort.cpp
	Author: Livia Pinheiro
	Date: 31/03/26 11:52
	Description: Neste programa, iremos apresentar o desempenho de todos os métodos de ordenação
*/

//Importação de bibliotecas
#include <stdio.h>
#include <windows.h>
#include <time.h>

//Seção de Prototipação
void selectionSort(int *, int);
void bubbleSort(int *, int);
void insertionSort(int *, int);


//Variáveis Globais
int comp, trocas;
clock_t inicio, fim;
double tempo;

main()
{
	int vetBubble[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int vetSelection[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int vetInsertion[] = {17, 38, 12, 2, 44, 25, 19, -4, 30, 10};
	int vetBubbleR[100000];
	int vetSelectionR[100000];
	int vetInsertionR[100000];
	int tam = sizeof(vetBubble)/sizeof(int);
	int tamR = sizeof(vetBubbleR)/sizeof(int);
	trocas = comp = 0;
	int i;
	
	// ===> Gerando números aleatórios
	srand(time(NULL));
	for(i = 0; i < tam; i++)
		vetBubbleR[i] = rand()%100000;
		
	// ===> Copiando o vetor aleatório	
	for(i = 0; i < tamR; i++)
	{
		vetSelectionR[i] = vetBubbleR[i];
		vetInsertionR[i] = vetBubbleR[i];
	}	
	
	puts("VETOR ORIGINAL: ");
	for(i = 0; i < tamR; i++)
		printf("%d|", vetBubbleR[i]);
	puts("");
	
	//=============BUBBLE SORT=====================
		//inicio = clock(); 
		bubbleSort(vetBubbleR, tam);
		//fim = clock();
		tempo = ((double)fim - inicio)/CLOCKS_PER_SEC;
	
		puts("");
		puts("======Bubble Sort======");
		printf("Qtd de comparacoes: %d\n", comp);
		printf("Qtd de trocas: %d\n", trocas);
		printf("Tempo: %.5f", tempo);
		puts("");

	comp = trocas = 0;
	
	//=============SELECTION SORT=====================
		inicio = clock();
		selectionSort(vetSelectionR, tam);
		fim = clock();
		tempo = ((double)fim - inicio)/CLOCKS_PER_SEC;
		
		puts("");
		puts("======Selection Sort======");
		printf("Qtd de comparacoes: %d\n", comp);
		printf("Qtd de trocas: %d\n", trocas);
		printf("Tempo: %lf", tempo);
		puts("");
		
	comp = trocas = 0;
		
	//=============INSERTION SORT=====================
		inicio = clock();
		insertionSort(vetInsertionR, tam);
		fim = clock();
		tempo = ((double)fim - inicio)/CLOCKS_PER_SEC;
		
		puts("");
		puts("======Insertion Sort======");
		printf("Qtd de comparacoes: %d\n", comp);
		printf("Qtd de trocas: %d\n", trocas);
		printf("Tempo: %lf", tempo);
		puts("");
	
}//main

// ===> Função com o algoritmo do Bubble Sort
void bubbleSort(int *vet, int tam)
{
	int i = 0;
	int aux = 0;
	
	inicio = clock();
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
	
	fim = clock();
	tempo = ((double)fim - inicio)/CLOCKS_PER_SEC;
}//bubbleSort

// ===> Função com o algoritmo do Selection Sort
void selectionSort(int *vet, int tam)
{
	int menor, chave;
	int i, j, aux;
	
	//Laço externo que itera do início ao fim do vetor
	for(i = 0; i < tam-1; i++)
	{
		//Assume que o menor elemento está na primeira posição do vetor
		chave = i;
		menor = i + 1;
		//Laço interno para localizar quem é o menor elemento do subconjunto
		 for(j= i + 1; j < tam; j++)
		 {
		 	comp++;
		 	if(vet[j] < vet[menor])
		 		menor = j; //Guarda o ÍNDICE do menor elemento do subconjunto
		 }//for interno
		 
		 //Troca o menor elemento encontrado com o elemento que está na chave
		 comp++;
		 if(vet[menor] < vet[chave])
		 {
		 	aux = vet[chave];
		 	vet[chave] = vet[menor];
		 	vet[menor] = aux;
		 	trocas++;
		 }
		 
	}//for externo
	
}//selectionSort

// ===> Função do método Insertion Sort
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
	
}//Insertion Sort
