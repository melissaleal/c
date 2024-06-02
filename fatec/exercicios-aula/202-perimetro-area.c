/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Entrada e saida de dados
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo de perimetro e area de um terreno a partir de medidas de comprimento e largura lidas pelo teclado
Data de criacao -- 01/03/2024
*/

#include <stdio.h>

main()
{
	float comprimento, largura, perimetro, area;
	
	printf("\n Digite o comprimento do terreno em metros: ");
	scanf("%f", &comprimento);
	
	printf("\n Digite a largura do terreno em metros: ");
	scanf("%f", &largura);
	
	perimetro = 2 * (largura + comprimento);
	area = comprimento * largura;
	
	printf("\n O perimetro do terreno e de %.1f metros e a area e de %.1f metros quadrados", perimetro, area);
}
