/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- P1
Descricao -------- Programa para calculo da duracao de uma partida de xadrez
Data de criacao -- 19/04/2024
*/

#include <stdio.h>

main()
{
	int hora_ini, hora_fim, duracao;
	
	printf("\n Insira o horario de inicio da partida: ");
	scanf("%d", &hora_ini);
	
	printf("\n Insira o horario de termino da partida: ");
	scanf("%d", &hora_fim);
		
	if (hora_ini < hora_fim)
	{
		duracao = hora_fim - hora_ini;
	}
	else
	{
		duracao = hora_fim + (24 - hora_ini);
	}
	
	printf("\n A partida durou %d horas", duracao);
}
