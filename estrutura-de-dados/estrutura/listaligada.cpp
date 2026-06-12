/*
	Name: listaligada.cpp
	Author: Livia Pinheiro 
	Date: 10/03/26 11:18
	Description: Implementação da estrutura de dados Lista Encadeada
*/

//Sessão de Importação de Bibliotecas
#include <stdio.h>
#include <conio.h> //console input output
#include <windows.h>
#include <stdlib.h> //standart library

//Definição da estrutura de um Nó (Node):
typedef struct No //definindo o tipo da estrutura, que no caso é um NÓ
{
	char nome[20];
	int idade;
	No *prox; //esse campo aponta para o endereço de memória do próximo nó
};

//Variável Global
int tamanho; //quantos elementos tem na lista

//Sessão de Prototipação
int menu();
void tratarOpcao(No *, int);
void iniciarLista(No *);
int vazia(No *);
No *alocaMemoria(); 
void insereFim(No *);
No *retiraFim(No *);
void insereInicio(No *);
No *retiraInicio(No *);
void exibirLista(No *);

main()
{
	No *Lista = (No *) malloc(sizeof(No));
	if(!Lista)
	{
		puts("Sem mem para criar a lista");
		exit(1);
	}
	else
	{
		int opc = 0;
		do
		{
			opc = menu();
			tratarOpcao(Lista, opc);
			puts("\n\n\n");
			system("pause");
			system("cls");
		}while(opc);
	}
	exibirLista(Lista);
}

//Função para apresentar um menu ao usuário
int menu()
{
	int opc;
	puts("Escolha sua opcao: ");
	puts("========================================");
	printf("1 - Zerar a Lista\n");
	printf("2 - Exibir a Lista\n");
	printf("3 - Inserir um elemento no fim da Lista\n");
	printf("4 - Inserir elemento no inicio da Lista\n");
	printf("5 - Excluir um elemento do fim da Lista\n");
	printf("6 - Excluir elemento do inicio da Lista\n");
	printf("7 - Sair\n");
	puts("========================================");
	printf("Opcao: "); scanf("%d", &opc);
	return opc;
}

//Função para tratar a escolha da opção do menu
void tratarOpcao(No *Lista, int opc)
{
	No *tmp; 
	switch(opc)
	{
		case 1:
			iniciarLista(Lista);
			break;
		case 2:
			exibirLista(Lista);
			break;
		case 3:
			insereFim(Lista);
			break;
		case 4:
			insereInicio(Lista);
			break;
		case 5:
			retiraFim(Lista);
			break;
		case 6:
			retiraInicio(Lista);
			break;
		case 7:
			exit(0);
		default:
			puts("Opcao Invalida.");
			break;
	}//switch
}

//Função para iniciar a lista
void iniciarLista(No *Lista)
{
	Lista->prox = NULL;
	tamanho = 0;
}

//Função que testa se a lista está vazia
int vazia(No *Lista)
{
	if(Lista->prox == NULL)
		return 1; //Está vazia
	else 
		return 0; //Não está vazia
}

//Função que para alocação de memória para um nó (define quanto de espaço é necessario para receber um nó)
No *alocaMemoria()
{
	No *novo = (No *) malloc(sizeof(No)); //memory allocation
	if(!novo) //se não for possível armazenar o nó
	{
		puts("Sem memória disponível para criar um novo nó!");
		exit(1); //para finalizar o programa com algum problema no processamento
	}
	else
	{
		printf("Nome: "); scanf("%s", &novo->nome);
		printf("Idade: "); scanf("%d", &novo->idade);
		return novo;
	}
}

//Função para inserir um nó no INICIO da lista
void insereInicio(No *Lista)
{
	No *novo = alocaMemoria();
	No *head = Lista->prox;
	Lista->prox = novo;
	novo->prox = head;
	puts("No inserido no inicio da lista");
	tamanho++;
		
}

//Função para inserir um nó no fim da lista
void insereFim(No *Lista)
{
	No *novo = alocaMemoria();
	novo->prox = NULL;
	if(vazia(Lista))
		Lista->prox = novo;
	else
	{
		No *tmp = Lista->prox; //criando um nó temporário
		while(tmp->prox != NULL) //Enquanto não for o ultimo da lista
			tmp = tmp->prox;
		tmp->prox = novo;
	}
	tamanho++;
	puts("Novo elemento inserido com sucesso!"); 
}

//Função para excluir um elemento do INICIO da lista
No *retiraInicio(No *Lista)
{
	if(Lista->prox == NULL)
	{
		puts("A lista está vazia.");
		return NULL;
	}
	else
	{
		No *temp = Lista->prox;
		Lista->prox = temp->prox;
		tamanho--;
		puts("Nó ELIMINADO com sucesso.");
		return temp;
	}
}//retiraInicio

//Função para retirar um nó do fim da lista
No *retiraFim(No *Lista)
{
	if(Lista->prox == NULL)
	{
		puts("Lista está vazia.");
		return NULL;
	}
	else
	{
		No *ultimo = Lista->prox;
		No *penultimo = Lista;
		
		while(ultimo->prox != NULL)
		{
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}//while
		penultimo->prox == NULL;
		puts("NÓ ELIMINADO com sucesso");
		tamanho--;
	}//else
}

//Função para exibir todo o conteúdo da Lista
void exibirLista(No *Lista)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Pega a cor original do console (é pra mudar a cor)
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	//Salvar os atributos de cores
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes; //salva a cor original
	
	if(vazia(Lista))
		puts("\nLista vazia!!!!!");
	else
	{
		No *tmp;
		tmp = Lista->prox;
		printf("Lista: ");
		while(tmp != NULL)
		{
			printf("%s", tmp->nome);
			printf("|%d", tmp->idade);
			SetConsoleTextAttribute(hConsole, 59); //define a cor do texto
			printf(" ==> ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			tmp = tmp->prox;
		}//while
		printf("NULL");
	}//else
}//exibir lista

