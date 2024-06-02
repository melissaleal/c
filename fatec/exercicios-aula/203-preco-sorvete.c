/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de preco de um sorvete a partir do preco do kg e do peso, ambos lidos pelo teclado
Data de criacao -- 29/02/2024
*/

#include <stdio.h>

main()
{
	float valor_kg, peso_kg, preco_total;
	
	printf("\n Insira o valor do kg do sorvete: ");
	scanf("%f", &valor_kg);
	
	printf("\n Insira o peso do sorvete em kg: ");
	scanf("%f", &peso_kg);
	
	preco_total = valor_kg * peso_kg;
	
	printf("\n O valor total a ser pago e de: R$%.2f.", preco_total);
}
