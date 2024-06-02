/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para comparacao entre dois numeros a fim de verificar se sao iguais um ou maior do que o outro
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	int n1, n2, maior;
	
	printf("\n Insira o primeiro numero: ");
	scanf("%d", &n1);

	printf("\n Insira o segundo numero: ");
	scanf("%d", &n2);
	
	if(n1 > n2)
	{
		maior = n1;
	}
	else
	{
		maior = n2;
	}
	
	if(n1 == n2)
	{
		printf("\n O primeiro numero, %d, e o segundo numero, %d, sao iguais", n1, n2);
	}
	else
	{
		printf("\n O primeiro numero, %d, e o segundo numero, %d, sao diferentes e %d e o maior entre os dois", n1, n2, maior);
	}
}
