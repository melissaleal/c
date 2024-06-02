/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de desconto de 10% sobre o valor de um produto lido pelo teclado
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	float preco_ini, desconto, preco_fim;
	
	printf("\n Insira o valor inicial do produto: ");
	scanf("%f", &preco_ini);
	
	desconto = preco_ini * 0.1;
	preco_fim = preco_ini - desconto;
	
	printf("\n Com um desconto de 10%%, equivalente a R$%.2f, o valor final do produto e de R$%.2f.", desconto, preco_fim);
}
