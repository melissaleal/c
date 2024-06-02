/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | While
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo da media geral de uma turma
Data de criacao -- 22/03/2024
*/

#include <stdio.h>

main()
{
	float n1, n2, media, media_geral;
	int aluno=1, aprovados, reprovados;
	
	while(aluno<=5)
	{
		printf("\n Insira a primeira nota do aluno %d: ", aluno);
		scanf("%f", &n1);
		
		printf("\n Insira a segunda nota do aluno %d: ", aluno);
		scanf("%f", &n2);
		
		media = (n1 + n2) / 2;
		media_geral += media / 5;
		
		printf("\n A media do aluno %d e igual a %.2f", aluno, media);
		
		if (media >= 6)
		{
			printf("\n O aluno %d foi aprovado", aluno);
			aprovados += 1;
		}
		else
		{
			printf("\n O aluno %d foi reprovado", aluno);
			reprovados += 1;
		}
		
		printf(" \n \n --------------------------------------- \n");
		
		aluno++;
	}
	
	printf("\n A media geral da turma foi de %.2f. \n A quantidade de alunos aprovados foi de %d. \n A quantidade de alunos reprovados foi de %d.", media_geral, aprovados, reprovados);
}
