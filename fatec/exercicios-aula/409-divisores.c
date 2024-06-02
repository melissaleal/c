/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | For
Atividade -------- Exercicio de aula
Descricao -------- Programa para impressao dos divisores de um numero inteiro lido pelo teclado
Data de criacao -- 12/04/2024
*/ 

#include <stdio.h>

main()
{
	int i, num;
	
	printf("\n Insira um numero inteiro para calcularmos seus divisores: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("\n %d", i);
		}
	}
}
