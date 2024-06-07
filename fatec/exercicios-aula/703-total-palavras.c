/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Strings
Atividade -------- Exercicio de aula
Descricao -------- Programa para retorno da quantidade de palavras contidas em uma frase de entrada
Data de criacao -- 07/06/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
	char frase[200];
	int totalpalavras, i;
	
	printf("Digite uma frase:\n");
	fflush(stdin);
	gets(frase);
	
	totalpalavras = 1;
	for (i =0; i < strlen(frase); i++){
		if(frase[i] == ' '){
			totalpalavras++;
		}
	}
	
	printf("\nA frase '%s' tem %d palavras\n", frase, totalpalavras);
	
	return 0;
}
