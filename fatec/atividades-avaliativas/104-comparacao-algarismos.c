/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao
Atividade -------- Atividade avaliativa
Descricao -------- Programa para verificacao de que um numero b esta, ou nao, contido no final do numero a
Data de criacao -- 17/04/2024
*/

#include <stdio.h>

main()
{
	int a, b, termina = 1;
	
	printf("\n Insira o primeiro numero: ");
	scanf("%d", &a);
	
	printf("\n Insira o segundo numero: ");
	scanf("%d", &b);
	
	printf("\n Verificando se o numero %d termina com os mesmos algarismos do numero %d... \n", a, b);
	
	if (a > b)
	{
		while (b > 0)
		{
			if ( (a % 10) == (b % 10) )
			{
				a /= 10;
				b /= 10;
				termina = 1;
			}
			else
			{
				termina = 0;
				break;
			}
		}
	}
	
	if (termina == 1)
	{
		printf("\n Termina");
	}
	else
	{
		printf("\n Nao termina");
	}
}
