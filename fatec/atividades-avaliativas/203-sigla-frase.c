/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao, vetores e strings
Atividade -------- P2
Descricao -------- Programa para construcao da sigla para uma frase inserida pelo usuario
Data de criacao -- 14/06/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
	char frase[100], sigla[100], i, j = 1;
	
	printf("Insira uma frase: ");
	fflush(stdin);
	gets(frase);
	
	printf("%s", frase);
	
	sigla[0] = frase[0];
	
	for(i = 0; i < strlen(frase); i++){
		if(frase[i] == ' '){
			sigla[j++] = frase[i+1];
		}
	}

	printf("\n%s", sigla);
	
	return 0;
}
