/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao
Atividade -------- Exercicio de aula
Descricao -------- Programa para verificacao do tipo de triangulo a partir das medidas dos lados lidas pelo teclado
Data de criacao -- 15/03/2024
*/

#include <stdio.h>

main()
{
	float a, b, c;
	
	printf("\n Insira a medida do lado a: ");
	scanf("%f", &a);
	
	printf("\n Insira a medida do lado b: ");
	scanf("%f", &b);
	
	printf("\n Insira a medida do lado c: ");
	scanf("%f", &c);
	
	if ( (a < b + c) && (b < a + c) && (c < a + b) )
	{
		printf("\n O triangulo tem as seguintes medidas: a = %.1f, b = %.1f e c = %.1f", a, b, c);
		if ( (a == b) && (b == c) ) // se a = b e b = c entao a = c
		{ 
			printf("\n O triangulo e equilatero, pois todos os lados tem medidas equivalentes");
		}
		else if ( (a == b) || (b == c) || (a == c) )
		{
			printf("\n O seu triangulo e isosceles, pois dois de seus lados tem medidas equivalentes");	
		}
		else
		{
			printf("\n O seu triangulo e escaleno, pois nenhum dos lados possui lados com medidas equivalentes");
		}
	}
	else
	{
		printf("\n Nao e possivel criar um triangulo, pois um dos lados e menor do que a soma dos outros dois");
	}
}
