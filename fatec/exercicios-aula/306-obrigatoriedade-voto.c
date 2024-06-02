/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao da obrigatoriedade de voto a partir da idade lida pelo teclado
Data de criacao -- 08/03/2024
*/

#include <stdio.h>

main()
{
	int idade;
	
	printf("\n Insira a sua idade e verificaremos o status como cidadao: 1");
	scanf("%d", &idade);
	
	if(idade < 16)
	{
		printf("\n Voce ainda nao atingiu a idade minima para ser eleitor");
	}
	else
	{
		if(idade >= 18 && idade < 65)
		{
			printf("\n O seu voto e obrigatorio");
		}
		else
		{
			printf("\n O seu voto e facultativo");
		}
	}
}
