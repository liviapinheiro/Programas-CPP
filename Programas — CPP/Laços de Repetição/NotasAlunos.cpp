/*
	Name: NotasAlunos.cpp
	Author: Livia Pinheiro 
	Date: 08/04/25 11:20
	Description: Programa para calcular média de alunos e o percentual de aprovação.
*/
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float n1, n2 ,n3, n4;
	float media, somaMedia, percAprov, percReprov, notaNesc;
	int i, aprov, reprov, exame; 
	
	n1 = n2 = n3 = n4 = 0.0;
	media = somaMedia = percAprov = percReprov = 0.0;
	i = aprov = reprov = exame = 0;
	
	while(i < 7)
	{
		printf("%dº aluno: \n", i+1);
		puts(" ");
		printf("Digite a primeira nota: "); scanf("%f", &n1);
		printf("Digite a segunda nota: "); scanf("%f", &n2);
		printf("Digite a terceira nota: "); scanf("%f", &n3);
		printf("Digite a quarta nota: "); scanf("%f", &n4);
		
		media = (n1 + n2 + n3 + n4)/4;
		if(media >= 6.0)
		{
			puts("VOCÊ FOI APROVADO CARA :D\n");
			aprov++;
		}
		else if (media >= 4.0)
		 	 {
				puts("VOCê ESTÁ DE EXAME :/");
				exame++;
				notaNesc = 12.0 - media;
				printf("Nota necessária no Exame: %2.f\n", notaNesc);
				puts(" ");
			 }
			 else
			 {
				puts("VOCê FOI REPROVADO MANO :(\n");
				reprov++;
			 }
	i++;
	} //fim do while
	percAprov = (aprov * 100) / 7;
	percReprov = (reprov * 100) / 7; 
	printf("Quantidade de aprovados: %d - %.1f%%", aprov, percAprov); // As duas porcentagens são para aparecer o simbolo de porcentagem no programa
	printf("\nQuantidade de reprovados: %d - %.1f%%", reprov, percReprov);
	printf("\nQuantidade de alunos que farão o exame: %d", exame);
	
	
}//Fim do programa!
