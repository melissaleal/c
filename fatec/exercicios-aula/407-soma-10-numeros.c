/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | For
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo da soma de 10 numeros lidos pelo teclado
Data de criacao -- 03/04/2024
*/

#include <stdio.h>

main()
{
	int i, num, soma = 0;
	
	for (i = 1; i <= 10; i++)
	{
		printf("\n Digite o numero %d: ", i);
		scanf("%d", &num);
		
		soma += num;
	}
	
	printf("\n A soma dos numeros inseridos e igual a %d", soma);	
}
