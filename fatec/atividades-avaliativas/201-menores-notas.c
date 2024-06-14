/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao e vetores
Atividade -------- P2
Descricao -------- Programa para verificacao dos dois menores numeros em um vetor de 20 elementos
Data de criacao -- 14/06/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int NOTAS[20], i, menorNota = 100, menorNota2 = 100;
	
	srand(time(NULL));
	
	for (i = 0; i < 20; i++){
		NOTAS[i] = rand() % 100;
	}
	
	for (i = 0; i < 20; i++){
		printf("%d | ", NOTAS[i]);
	}
	
	for (i = 0; i < 20; i++){
		if (NOTAS[i] < NOTAS[i+1] && NOTAS[i] < menorNota){
			menorNota = NOTAS[i];
		}
	}
	
	for (i = 0; i < 20; i++){
		if (NOTAS[i] < NOTAS[i+1] && NOTAS[i] < menorNota2 && NOTAS[i] > menorNota){
			menorNota2 = NOTAS[i];
		}
	}
	
	printf("\n\nAs duas menores notas sao: %d e %d", menorNota, menorNota2);
	
	return 0;
}
