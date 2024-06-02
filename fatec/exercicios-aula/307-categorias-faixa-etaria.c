/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para definicao de categorias a partir da idade lida pelo teclado
Data de criacao -- 08/03/2024
*/

#include <stdio.h>

main()
{
	int idade;
	
	printf("\n Insira a sua idade e iremos definir a sua categoria: ");
	scanf("%d", &idade);
	
	if (idade <= 8)
	{
		printf("\n Categoria Infantil A");
	}
	else
	{
		if(idade < 13)
		{
			printf("\n Categoria Infantil B");
		}
		else
		{
			if(idade < 18)
			{
				printf("\n Categoria Juvenil A");
			}
			else
			{
				if(idade < 21)
				{
					printf("\n Categoria Juvenil B");
				}
				else
				{
					printf("\n Categoria Senior");
				}
			}
		}
	}
}
