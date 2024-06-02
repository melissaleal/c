/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | While
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao da quantidade de algarismos de um numero lido pelo teclado
Data de criacao -- 22/03/2024
*/

#include <stdio.h>

main()
{
	int num, algarismos;
	
	printf(" \n Insira um numero inteiro: ");
	scanf("%d", &num);
	
	if (num == 0)
	{
		algarismos = 1;
	}
	else
	{
		while (num > 0)
		{
			num /= 10;
			algarismos++;
		}
	}
	
	printf("\n O numero possui %d algarismos.", algarismos);
}
