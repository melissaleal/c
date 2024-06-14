/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao e matrizes
Atividade -------- P2
Descricao -------- Programa para construcao de uma matriz proposta pelo professor
Data de criacao -- 14/06/2024
*/

#include <stdio.h>

int main(){
	int A[5][5], linha, coluna;
	
	for (linha = 0; linha < 5; linha++){
		for (coluna = 0; coluna < 5; coluna++){
			if((linha == 0) || (linha % 2 == 0)){
				A[linha][coluna] = linha+1;
			}
			else{
				A[linha][coluna] = coluna+1;
			}
		}
	}
	
	for (linha = 0; linha < 5; linha++){
		printf("| ");
		for (coluna = 0; coluna < 5; coluna++){
			printf("%2d | ", A[linha][coluna]);
		}
		printf("\n");
	}
	return 0;
}

/*

Matriz proposta pelo professor:

| 1 | 1 | 1 | 1 | 1 |
| 1 | 2 | 3 | 4 | 5 |
| 3 | 3 | 3 | 3 | 3 |
| 1 | 2 | 3 | 4 | 5 |
| 5 | 5 | 5 | 5 | 5 |

*/
