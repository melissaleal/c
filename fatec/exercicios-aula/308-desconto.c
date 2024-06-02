/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de desconto de acordo com o preco da compra lido pelo teclado
Data de criacao -- 08/03/2024
*/

#include <stdio.h>

main()
{
	float desconto, valor_desconto, preco_ini, preco_fim;
	
	printf("\n Insira o valor da compra e calcularemos o desconto concedido: ");
	scanf("%f", &preco_ini);
	
	if(preco_ini < 200)
	{
		desconto = 10;		
	}
	else
	{
		if(preco_ini < 500)
		{
			desconto = 15;
		}
		else
		{
			desconto = 20;
		}
	}
	
	valor_desconto = preco_ini * desconto / 100;
	preco_fim = preco_ini - valor_desconto;
	
	printf("\n O valor da sua compra foi de R$%.2f! \n Parabens!!! \n Voce conseguiu um desconto de %.0f%%, equivalente a R$%.2f!\n O valor final da compra e de R$%.2f", preco_ini, desconto, valor_desconto, preco_fim);
}
