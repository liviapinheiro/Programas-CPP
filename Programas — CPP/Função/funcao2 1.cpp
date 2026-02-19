/*
	Name: funcao2.cpp
	Author: Livia Pinheiro
	Date: 18/08/25 10:09
	Description: Programa para demonstrar as diversas formas de invocar uma função
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

//Sessão de Prototipação
int somar(int, int);
int multiplicar(int, int);
int lerNum();
float dividir(int, int);
int subtrair(int, int);
int potencializar(int, int);

main()
{ 
	setlocale(LC_ALL, "Portuguese");
	
	/*int a, b, result;
	a = b = result = 0;
	
	a = lerNum();
	b = lerNum();
	
	result = somar(a,b); //Passagem de parâmetro por cópia (copia o valor das variáveis do main (a,b) nas variáveis da função somar (x,y)
	
	result = somar(lerNum(), lerNum());
	printf("A soma é: %d\n", result);

	
	printf("A multiplicação de %d x %d = %d\n", a, b, multiplicar(a,b));
	printf("A multiplicação de %d x %d = %d\n", lerNum(), lerNum(), multiplicar(lerNum(), lerNum()));
	*/
	
	/*
	printf("A soma é: %d\n", lerNum() + lerNum());
	printf("A multiplicação é: %d\n", multiplicar(lerNum(), lerNum()));
	printf("A subtração é: %d\n", lerNum() - lerNum());
	printf("A divisão é: %.2f\n", dividir(lerNum(),lerNum()));
	
	
	printf("Digite a base: "); scanf("%d", &base);
	printf("Digite o expoente: "); scanf("%d", &expoente);
	printf("A potencia é: %d\n", potencializar (base, expoente));
	 */
 
 	int base, expoente, resultado, raiz;
	base = expoente = resultado = 0;
	
	printf("A potencialização é: %d\n", potencializar(lerNum(), lerNum()));
	printf("A potencialização é: %2.f\n", pow(lerNum(), lerNum())); //função nativa do C
	raiz = lerNum();
	printf("A raiz é: %.f", sqrt(raiz));

}//main

//----------Funções-------------

int somar(int x, int y)
{
	return x + y;
}

int multiplicar(int w, int z)
{
	return w * z;
}

float dividir(int x, int y)
{
	return (float) y / x;
}

int subtrair(int x, int y)
{
	return x - y;
}

int lerNum()
{
	int num = 0;
	printf("Digite o número: ");
	scanf("%d", &num);
	return num;
}

int potencializar(int base, int exp)
{
	int result = 1;
	for(int i = 0; i < base; i++)
	{
		result = result * exp;
		
	}//for 
	return result;
}




