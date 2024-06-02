/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | For
Atividade -------- Exercicio de aula
Descricao -------- Programa para classificacao de numeros quanto a sua natureza de primo
Data de criacao -- 12/04/2024
*/

#include <stdio.h>

main()
{
	int i, num, total_divisores = 2;
	
	printf("\n Insira um numero inteiro para classificarmos o numero em primo ou nao primo: ");
	scanf("%d", &num);
	
	for (i = 2; i <= (num/2); i++)
	{
		if (num % i == 0)
		{
			total_divisores++;
			break;
		}
	}
	
	if (total_divisores == 2)
	{
		printf("\n O numero e primo");
	}
	else
	{
		printf("\n O numero nao e primo");
	}
}
