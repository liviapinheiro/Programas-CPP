/*
	Name: IMC.cpp
	Author: Livia Pinheiro
	Date: 24/11/25 10:12
	Description: Programa que calcula IMC e classifica
*/
#include <stdio.h>

void classificarIMC(float);
float calcularIMC(float, float);

int main()
{
	float peso = 0.0;
	float altura = 0.0;
	
	printf("Insira peso: ");   scanf("%f", &peso);
	printf("Insira altura: "); scanf("%f", &altura);
	
	classificarIMC(calcularIMC(peso, altura));
}

void classificarIMC(float IMC)
{
	if(IMC < 18.5)
	printf("Abaixo do peso (%f)", IMC);
		else if(IMC < 24.9)
		printf("Peso normal (%f)", IMC);
			else if(IMC <29.9)
			printf("Sobrepeso (%f)", IMC);
				else if(IMC < 34.9)
					printf("Obesidade Grau I (%f)", IMC);
						else if(IMC < 39.9)
						printf("Obesidade Grau II (%f)", IMC);
							else if(IMC >= 40.0)
							printf("Obesidade Grau III (%f)", IMC);
	
}

float calcularIMC(float peso, float altura)
{
	float IMC = 0.0;
	IMC = peso / (altura * altura);
	
	return IMC;
}

