/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao de numero par ou impar
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	int num;
	
	printf("\n Digite um numero: ");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("\n O numero %d e par!", num);
	}
	else
	{
		printf("\n O numero %d e impar!", num);
	}
}
