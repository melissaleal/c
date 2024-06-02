/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para alternancia de valores entre variaveis
Data de criacao -- 29/02/2024
*/

#include <stdio.h>

main()
{
	int a, b, auxiliar;
	
	printf("\n Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("\n Digite o segundo valor: ");
	scanf("%d", &b);
	
	auxiliar = a;
	a = b;
	b = auxiliar;
	
	printf("\n O primeiro valor estava armazenado em a, mas passou a ser armazenado em b. b equivale a %d. \n O segundo valor estava armazenado em b, mas passou a ser armazenado em a. a equivale a %d.", b, a);
}
