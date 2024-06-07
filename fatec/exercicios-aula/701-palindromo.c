/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Strings
Atividade -------- Exercicio de aula
Descricao -------- Programa para definicao de uma palavra de entrada como plaindromo ou nao
Data de criacao -- 24/05/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
	char palavra[20], palavraCopia[20];
	
	printf("\nVERIFICADOR DE PALINDROMOS\nDigite uma palavra: ");
	fflush(stdin);
	gets(palavra);
	strcpy(palavraCopia, palavra);
	
	if (strcmp(strupr(palavra), strupr(strrev(palavraCopia)))==0){
		printf("\nA palavra %s e um palindromo.", palavra);
	}
	else{
		printf("\nA palavra %s nao e um palindromo.", palavra);
	}
	
	return 0;
}
