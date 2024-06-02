/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao do sexo biologico a partir de caracteres lidos pelo teclado
Data de criacao -- 08/03/2024
*/

#include <stdio.h>

main()
{
	char sexo_bio;
	
	printf("\n Informe o sexo biologico ( F / M ): ");
	fflush(stdin);
	scanf("%c", &sexo_bio);
	
	
	if (sexo_bio == 'F' || sexo_bio == 'f')
	{
		printf("\n Feminino");
	}
	else
	{
		if (sexo_bio == 'M' || sexo_bio == 'm')
		{
			printf("\n Masculino");
		}
		else
		{
			printf("\n Caractere invalido");
		}
		
	}
}
