/*
	Name: VetorFuncoes.cpp 
	Author: Livia Pinheiro
	Date: 15/09/25 07:52
	Description: Programa para fazer a carga e operações em vetores por meio de funções
*/
//Sessão de importação de bibliotecas
#include <stdio.h>

//Sessão de Prototipação
int lerNum();
void imprimirVetor(int *, int);
void imprimirVetorAoContrario(int *, int);

int main()
{
	int vet[8]; int tam = 0;
	tam = sizeof(vet) / sizeof(int); //Como cada variavel tem 4 bytes, nós dividimos o valor total, que é multiplicado por 4, pelo valor de um inteiro, que é 4 bytes

	//Faz a carga no vetor
	for(int i = 0; i < tam; i++)
	{
		vet[i] = lerNum();
	}
	
	//Invoke da função para imprimir o vetor
	imprimirVetor(vet, tam);
	imprimirVetorAoContrario(vet, tam);
	
}//main

int lerNum()
{
	int num;
	printf("Digite um numero: "); scanf("%d", &num);
	
	return num;
}//lerNum

void imprimirVetor(int *v, int tam)
{
	puts("Vetor:");
	for(int i = 0; i < tam; i++)
		printf("%d|", v[i]);
	puts("\n");
}

void imprimirVetorAoContrario(int *v, int tam)
{
	puts("Vetor ao contrario");
	for(int i = tam - 1; i >= 0; i--)
		printf("%d|", v[i]);
}
