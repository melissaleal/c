/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao dos algarismos da centena, dezena e unidade de um numero lido pelo teclado
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main ()
{
	int numero, centena, dezena, unidade;
	
	printf("\n Digite um numero qualquer de ate 3 algarismos: ");
	scanf("%d", &numero);
	
	centena = numero / 100;
	dezena = (numero % 100) / 10;
	unidade = ((numero % 100) % 10) / 1;
	
	printf("\n O numero %d apresenta %d como centena, %d como dezena e %d como unidade", numero, centena, dezena, unidade);
}
