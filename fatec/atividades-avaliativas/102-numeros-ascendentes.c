/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao
Atividade -------- P1
Descricao -------- Programa para impressao de todos os numeros ascendentes entre 100 e 999
Data de criacao -- 19/04/2024
*/

#include <stdio.h>

main()
{
	int num, centena, dezena, unidade;
	
	printf("Os numeros ascendentes entre 100 e 999 sao: \n");
	
	for (num = 100; num <= 999; num++)
	{
		unidade = num % 10;
		dezena = (num / 10) % 10;
		centena = num / 100;
		
		if ( (unidade > dezena) && (dezena > centena) )
		{
			printf("\n %d", num);
		}
	}
}
