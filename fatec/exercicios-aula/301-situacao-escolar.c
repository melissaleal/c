/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de media a partir de duas notas lidas pelo teclado e para verificacao da situacao do aluno
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	float n1, n2, media;
	
	printf("\n Insira a sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("\n Insira a sua segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	if(media >= 6)
	{
		printf("\n A media do aluno e %.2f, portanto o aluno foi aprovado!", media);
	}
	else
	{
		printf("\n A media do aluno e %.2f, portanto o aluno foi reprovado!", media);
	}
}
