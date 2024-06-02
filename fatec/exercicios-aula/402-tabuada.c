/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | While
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo da tabuada de um numero lido pelo teclado
Data de criacao -- 22/03/2024
*/

#include <stdio.h>

main()
{
	int num, resultado_tabuada, indice_tabuada = 1;
	
	printf("\n Digite um numero para calcularmos a tabuada: ");
	scanf("%d", &num);
	
	while(indice_tabuada<=10)
	{
		resultado_tabuada = num * indice_tabuada;
		printf("\n %d \* %d = %d", num, indice_tabuada, resultado_tabuada);
		indice_tabuada++;
	}
}
