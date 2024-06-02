/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de repeticao | While
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo da soma dos numeros impares de 1 a um numero lido pelo teclado
Data de criacao -- 22/03/2024
*/

#include <stdio.h>

main()
{
	int num, soma, impar = 1;
	
	printf("\n Digite o ultimo numero a ser utilizado na soma: ");
	scanf("%d", &num);
	
	while(impar <= num)
	{
		soma += impar;
		impar += 2;
	}
	
	printf("\n A soma  dos numeros impares menores ou igual a %d e igual a %d", num, soma);
}
