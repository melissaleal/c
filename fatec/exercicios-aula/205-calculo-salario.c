/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de comissao (4% sobre o rendimento das vendas feitas) e de salario final (salario fixo + comissao)
Data de criacao -- 29/02/2024
*/

#include <stdio.h>

main()
{
	float salario_fixo, vendas, comissao, salario_final;
	
	printf("\n Insira o salario fixo do funcionario: ");
	scanf("%f", &salario_fixo);
	
	printf("\n Insira o rendimento das vendas do funcionario: ");
	scanf("%f", &vendas);
	
	comissao = vendas * 0.04;
	salario_final = salario_fixo + comissao;
	
	printf("\n A comissao deste funcionario e de R$%.2f e seu salario final e de R$%.2f", comissao, salario_final);
}
