/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de conversao de reais em dolares a partir da cotacao informada
Data de criacao -- 29/02/2024
*/

#include <stdio.h>

main()
{
	float valor_reais, cotacao_dolar, valor_dolares;
	
	printf("\n Insira um valor em reais: R$");
	scanf("%f", &valor_reais);
	
	printf("\n Insira a cotacao do dolar: ");
	scanf("%f", &cotacao_dolar);
	
	valor_dolares = valor_reais / cotacao_dolar;
	
	printf("\n A partir da cotacao informada, o valor R$%.2f e equivalente a USD %.2f", valor_reais, valor_dolares);
}
