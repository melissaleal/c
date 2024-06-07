/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Strings
Atividade -------- Exercicio de aula
Descricao -------- Programa para impressao do dominio de um email de entrada
Data de criacao -- 07/06/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
	char email[100], dominio[30];
	int i, j;
	
	printf("Insira o seu email:\n");
	fflush(stdin);
	gets(email);
	
	for (i = 0; i < strlen(email); i++){
		if (email[i] == '@'){
			break;
		}
	}
	
	// i esta na posicao do @
	j=0;
	i++; // i esta na primeira letra do dominio 
	while (i < strlen(email)){
		dominio[j++] = email[i++];
	}
	
	dominio[j] = '\0'; // encerrando o string dominio 
	
	printf("\nO dominio do email '%s' e %s\n", email, dominio);
	
	return 0;
}
