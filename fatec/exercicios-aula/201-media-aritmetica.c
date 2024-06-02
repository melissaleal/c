/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de media a partir de duas notas lidas pelo teclado
Data de criacao -- 28/02/2024
*/

#include <stdio.h>

main()
{
	float n1, n2, media;
	
	printf("\n Digite a sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("\n Digite a sua segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf("\n Sua media e igual a soma das suas notas %.2f e %.2f dividida por 2, equivalente a %.2f", n1, n2, media);
}
