/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de horas, minutos e segundos a partir de um intervalo de tempo em segundos
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	int tempo_segundos, horas, minutos, segundos;
	
	printf("\n Insira um intervalo de tempo em segundos: ");
	scanf("%d", &tempo_segundos);
	
	segundos = tempo_segundos % 60;
	minutos = (tempo_segundos / 60) % 60;
	horas = tempo_segundos / 3600;
	

	printf("\n O intervalo de %d s e equivalente a %d horas, %d minutos, %d segundos", tempo_segundos, horas, minutos, segundos);
}
