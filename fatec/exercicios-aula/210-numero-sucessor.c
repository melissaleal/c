/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Desafio de aula
Descricao -------- Programa para verificacao do sucessor de um numero. Se o numero foi 60, o sucessor deve ser 1 (o uso de estrutura condicional deve ser dispensado por ora)
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	int numero, sucessor;
	
	printf("\n Digite um numero de 0 a 60: ");
	scanf("%d", &numero);
	
	sucessor = (numero + 1) % 61;
	
	printf("\n O sucessor de %d e %d", numero, sucessor);
}
