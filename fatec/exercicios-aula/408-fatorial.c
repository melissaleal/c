/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | For
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo do fatorial de um numero inteiro lido pelo teclado
Data de criacao -- 03/04/2024
*/

#include <stdio.h>

main()
{
	int num, fatorial = 1, i;
	
	printf("\n Digite um numero: ");
	scanf("%d", &num);
	
	for (i = num; i > 0; i--)
	{
		fatorial *= i;
	}
	
	printf("\n Fatorial = %d", fatorial);
}
