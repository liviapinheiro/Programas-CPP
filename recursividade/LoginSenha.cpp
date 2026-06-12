/*
	Name: LoginSenha.cpp
	Author: Livia Pinheiro
	Date: 03/11/25 08:51
	Description: Programa para demonstrar a utilização de Recursividade Direta
*/

//Importação de Bibliotecas
#include <stdio.h>
#include <string.h>

//Prototipação
void verlogin();
void versenha();

//Variáveis Globais
char login[] = "livia";
char pwd = 123;
int conts = 1;
int contl = 1;

int main()
{
	verlogin();
}

//Funcao p verificar se o login tá correto
void verlogin()
{
	char usuario[10];
	printf("(%d) Nome de usuário: ", contl); gets(usuario);
	
	if(strcmp(usuario,login) == 0)
		versenha();
	else if(contl < 5)
	{
		contl++;
		verlogin();
	}
	else if(contl >= 5)
	{
		printf("Login incorreto! Acesso bloqueado.");
	}
}
//Função para verificar se a senha tá correta
void versenha()
{
	int senha = 0;
	printf("(contador = %d) Senha: ", conts); scanf("%d", &senha);
	
	if(senha == pwd)
	{
		puts("Login efetuado com sucesso!");
		return;
	}
	else if(conts < 3)
	{
		conts++;
		versenha();
	}
	else if(conts >= 3)
	{
		puts("\nVoce errou a senha 3 vezes!! \n");
		contl = 1; conts = 1;
		verlogin();
	}
		
}

