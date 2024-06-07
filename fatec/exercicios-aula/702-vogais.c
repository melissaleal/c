/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Strings
Atividade -------- Exercicio de aula
Descricao -------- Programa para calculo da quantidade de vogais em uma palavra de entrada
Data de criacao -- 24/05/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
	char palavra[20];
	int qtdVogais = 0, i;
	
	printf("\nCONTADOR DE VOGAIS\nDigite uma palavra: ");
	fflush(stdin);
	gets(palavra);
	
	strupr(palavra);
	
	for(i = 0; i< strlen(palavra); i++){
		if (palavra[i] == 'A' || palavra[i] == 'E' || palavra[i] == 'I' || palavra[i] == 'O' || palavra[i] == 'U'){
			qtdVogais += 1;
		}
	}
	printf("\nA quantidade de vogais na palavra %s e igual a %d", palavra, qtdVogais);
	
	return 0;
}
