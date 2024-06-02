/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao do maior entre tres numeros lidos pelo teclado
Data de criacao -- 08/03/2024
*/

#include <stdio.h>

main()
{
	int n1, n2, n3;
	
	printf("\n Digite o primeiro numero: ");
	scanf("%d", &n1);

	printf("\n Digite o segundo numero: ");
	scanf("%d", &n2);

	printf("\n Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3)
	{
		printf("\n O maior numero e %d", n1);
	}
	else
	{
		if (n2 > n1 && n2 > n3)
		{
			printf("O maior numero e %d", n2);
		}
		else
		{
			printf("O maior numero e %d", n3);
		}
	}
	
	/*
	caso seja necessario utilizar o maior numero posteriormente, e necessario declarar uma variavel para armazenamento e
	em cada if, a variavel 'maior' recebe o valor da variavel de maior numero
	*/
}
