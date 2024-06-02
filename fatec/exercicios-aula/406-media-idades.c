/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | Do While
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo da soma das idades de um grupo de pessoas
Data de criacao -- 03/04/2024
*/

#include <stdio.h>

main()
{
	
	int contador = 0, idade;
	float soma = 0, media;
	
	do
	{
		printf("\n Digite a idade ou 0 para encerrar: ");
		scanf("%d", &idade);
		
		if (idade > 0)
		{
			soma += idade;
			contador++;
		}
	} 
	while (idade > 0);
	
	if (contador > 0)
	{
		media = soma / contador;
		printf("\n Media das idades: %.2f", media);
	}
	else
	{
		printf("\n Nao ha pessoas neste grupo.");
	}
}
