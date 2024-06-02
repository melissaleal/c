/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | Do While
Atividade -------- Exercicio de aula
Descricao -------- Programa para leitura de notas enquanto forem validas (maiores do que 0 e menores do que 10)
Data de criacao -- 12/04/2024
*/

#include <stdio.h>

main()
{
	float nota;
	
	do
	{
		printf("\n Insira a sua nota: ");
		scanf("%d", &nota);
		
		if ( (nota<0) || (nota>10) )
		{
			printf("\n Nota invalida!");
		}
	} 
	while ( (nota<0) || (nota>10) );
}
