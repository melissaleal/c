/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Strings
Atividade -------- Exercicio de aula
Descricao -------- Programa para criptografia de uma frase de entrada
Data de criacao -- 07/06/2024
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char frase[200], cript[200];
	int i, k;
	
	srand(time(NULL));
	k = rand() % 256;

	/*
	puts("\n----------- CONFIDENCIAL -----------");
	printf("A regra de criptografia e %d\n", k);
	*/
	
	puts("\n----------- CRIPTOGRAFIA -----------");
	printf("Insira a frase a ser criptografada:\n");
	fflush(stdin);
	gets(frase);
	
	/*
	puts("\n----------- CONFIDENCIAL -----------");
	puts("Posicoes dos caracteres");
	*/
	
	for (i = 0; i < strlen(frase); i++){
		printf("%d | ", frase[i]);
		cript[i] = frase[i]+k;
	}
	
	cript[i++] = '\0';
	
	puts("\n\n------------ RESULTADO ------------");
	printf("A criptografia de %s e %s", frase, cript);
	
	return 0;
}
