/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao
Atividade -------- Atividade avaliativa
Descricao -------- Programa para verificacao da natureza de uma matriz de tamanho n, visando definir se e quadrado magico ou nao
Data de criacao -- 07/06/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n, val; // declaracao de variaveis para armazenar valores
	int i, j, linha, coluna; // declaracao de variaveis iteradoras
	int somaPlanetaria = 0, somaDP = 0, somaDS = 0; // declaracao de variaveis para somas
	int existe, caraterMagico = 0; // declaracao de variaveis auxiliares
	
	printf("Informe a medida do lado do quadadro: ");
	scanf("%d", &n);
	
	int QM[n][n]; // declarando uma matriz dinamica
	/*
	for (linha = 0; linha < n; linha++){
		for (coluna = 0; coluna < n; coluna++){
			QM[linha][coluna] = -1; // atribuindo um valor para servir a verificacao posterior
		}
	}
	
	srand(time(NULL));
	
	 
		entrando em um loop que percorre a matriz
		1. verificando a existencia de um valor gerado randomicamente;
		2. atribuindo o valor ao campo, caso ele nao exista em outros campos da matriz
	
	
	for (i = 0; i < n; i++){ 
		for (j = 0; j < n;){
			existe = 0; // variavel sinalizadora
			val = (rand() % ((n)*(n)))+1; // gerando valores de 0 a 8 e soma 1, a fim de obter valores de 1 a 9.
			
			for (linha = 0; linha < n; linha++){ // entrando em um loop para verificar a existencia
				for (coluna = 0; coluna < n; coluna++){
					if (QM[linha][coluna] == val){
						existe = 1;
						break; // caso o valor exista neste campo, da um break no loop de coluna
					}
				}
				if(existe) break; // caso a variavel sinalizar a existencia do valor, da um break no loop de linha
			}
			
			/*
				caso a variavel sinalizar a NAO existencia do valor, o campo recebe o valor
				j e incrementado, e a nova coluna sera submetida a verificacao
			
			
			if (!existe){
				QM[i][j] = val;
				j++;
			}
		}
	}
	*/
	
	for (linha = 0; linha < n; linha++){ // imprimindo a matriz gerada
		for (coluna = 0; coluna < n; coluna++){
			scanf("%d", &QM[linha][coluna]);
		}
	}
	
	puts("\n");
	for (linha = 0; linha < n; linha++){ // imprimindo a matriz gerada
		printf("| ");
		for (coluna = 0; coluna < n; coluna++){
			printf("%5d | ", QM[linha][coluna]);
		}
		printf("\n");
	}
	
	for (i = 0; i < ((n)*(n)); i++){ // verificando qual a soma resultante das linhas, colunas e diagonais em um quadrado magico de lado n
			somaPlanetaria += i+1;
		}
	somaPlanetaria /= n;
		
		
	for (i = 0; i < n; i++){
		somaDP += QM[i][i];
		somaDS += QM[i][n-1-i];
	}
	
	for (linha = 0; linha < n; linha++){
		int somaLin = 0;
		for (coluna = 0; coluna < n; coluna++){
			somaLin += QM[linha][coluna];
		}
		if (somaLin != somaPlanetaria){
			caraterMagico = 1;
			break;
		}
	}
	
	for (coluna = 0; coluna < n; coluna++){
		int somaCol = 0;
		for (linha = 0; linha < n; linha++){
			somaCol += QM[linha][coluna];
		}
		if (somaCol != somaPlanetaria){
			caraterMagico = 1;
			break;
		}
	}
	
	if ((somaDP != somaPlanetaria) || (somaDS != somaPlanetaria)){
		caraterMagico = 1;
	}
	
	if (caraterMagico){
		printf("NAO e Quadrado Magico\n");
	}
	else{
		printf("E Quadrado Magico\n");
	}
	
	return 0;
}
