/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo do peso ideal a partir da altura e do sexo biologico lidos pelo teclado
Data de criacao -- 08/03/2024
*/

#include <stdio.h>

main()
{
	float altura, peso_ideal;
	char sexo;
	
	printf("\n Insira a sua altura: ");
	scanf("%f", &altura);
	
	printf("\n Insira o seu sexo biologico. (F) para feminino e (M) para masculino: ");
	fflush(stdin);
	// limpa o buffer do teclado
	scanf("%c", &sexo);
	
	if (sexo == 'F' || sexo == 'f')
	{
		peso_ideal = (62.1 * altura) - 44.7;
		printf("\n Seu peso ideal e %.1f", peso_ideal);
	}
	else
	{
		if (sexo == 'M' || sexo == 'm')
		{
			peso_ideal = (72.7 * altura) - 58;
			printf("\n Seu peso ideal e %.1f", peso_ideal);
		}
		else
		{	
			printf("\n Caractere invalido!");
		}
	}
}
