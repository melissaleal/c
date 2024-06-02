/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo do imc a partir de altura e peso lidos pelo teclado e definicao do grau de peso
Data de criacao -- 15/03/2024
*/

#include <stdio.h>

main()
{
	float altura, peso, imc;
	
	printf("\n Insira a sua altura em metros: ");
	scanf("%f", &altura);
	
	printf("\n Insira o seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	printf("IMC = %.2f \n", imc);
	
	if(imc < 18.5)
	{
		printf("Abaixo do peso");
	}
	else
	{
		if(imc < 24.9)
		{
			printf("Peso Normal");
		}
		else
		{
			if(imc < 29.9)
			{
				printf("Sobrepeso");
			}
			else
			{
				if(imc < 34.9)
				{
					printf("Obesidade (Grau I)");
				}
				else
				{
					if(imc < 39.9)
					{
						printf("Obesidade Severa (Grau II)");
					}
					else
					{
						printf("Obesidade Morbida (Grau III)");
					}
				}
			}
		}
	}
}
