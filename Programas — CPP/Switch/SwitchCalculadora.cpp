/*
	Name: SwitchCalculadora.cpp
	Author: Livia Pinheiro
	Date: 11/06/25 16:30
	Description: Programa para ler dois inteiros e fazer a operação escolhida pelo usuário
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, result;
	char operacao;

	while(1)
	{	
		num1 = num2 = result = operacao = 0;
		
		system("cls");
		
		puts("----Calculadora----");
		puts("+ (soma)\n- (subtração)\n/ (divisão)\n* (multiplicação)\n ! (sair)");
		puts("-------------------");
		printf("1º número: "); 		scanf("%d", &num1);	
		printf("Operação: "); 		scanf(" %c", &operacao); 
		printf("2º número: "); 		scanf("%d", &num2);
		
		switch(operacao)
		{
			case '+': result = num1 + num2; break;
			case '-': result = num1 - num2; break;
			case '/': result = num1 / num2; break;
			case '*': result = num1 * num2; break;
			case '!': puts("Até logo!");    break;
			default:  puts("Opção Inválida");
		}//switch
		
		printf("Resultado: %d\n", result);
		
		if(operacao == '!')
			exit(0);
			else system("pause");
	}//while
	
}//programa
