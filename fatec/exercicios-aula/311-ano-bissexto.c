/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao de ano bissexto
Data de criacao -- 07/03/2024
*/

#include <stdio.h>

main()
{
	int ano;
	
	printf("\n Insira um ano e verificaremos se e bissexto ou nao: ");
	scanf("%d", &ano);
	
	if ( (ano % 400 == 0) || ( (ano % 4 == 0) && (ano % 100 != 0) ) )
	{
		printf("O ano %d e bissexto!", ano);	
	}
	else
	{
		printf("\n O ano %d nao e bissexto", ano);
	}
}
