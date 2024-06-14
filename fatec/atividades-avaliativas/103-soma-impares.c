/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao
Atividade -------- P1
Descricao -------- Programa para calculo da soma dos numeros impares entre dois numeros a e b lidos pelo teclado
Data de criacao -- 19/04/2024
*/

#include <stdio.h>

main()
{
	int i, a, b, soma=0;
	
	printf("\n Insira o primeiro numero: ");
	scanf("%d", &a);
	
	printf("\n Insira o segundo numero: ");
	scanf("%d", &b);
	
	if (a<b)
	{
		for (i = a; i <= b; i++)
		{
			if(i % 2 != 0)
			{
				printf("\n %d", i);
				soma += i;
			}
		}
	}
	else
	{
		for (i = a; i >= b; i--)
		{
			if(i % 2 != 0)
			{
				printf("\n %d", i);
				soma += i;
			}
		}
	}
	
	printf("\n \n A soma dos numeros impares entre %d e %d e igual a %d", a, b, soma);
}
