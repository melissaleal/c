/*
Autora ----------- Melissa Leal (https://github.com/melissaleal)
Instituicao ------ FATEC Marilia
Curso ------------ Desenvolvimento de Software Multiplataforma 
Materia ---------- Algoritmos e Logica de Programacao
Conteudo --------- Estruturas de selecao e de repeticao
Atividade -------- Atividade avaliativa
Descricao -------- Programa para verificacao de jogos da megasena, quina e quadra
Data de criacao -- 06/06/2024
*/

#include <Stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mega[6], aposta[6], i, j, aux, acertos, jaSorteado = 0, numSorteado;
	
	srand(time(NULL));
	
	// sorteando os numeros da megasena sem repeticao
	for (i=0; i<6;){
	   numSorteado = rand() % 60; // a variavel auxiliar recebe um numero randomico de 1 a 60
	   
	   for (j=0; j < i; j++){ // laço de repeticao para verificar se o numero armazenado em mega[j] e igual ao numero sorteado
			if (mega[j] == numSorteado){
				jaSorteado = 1; // se sim, a variavel auxiliar jaSorteado recebe o valor 1, que equivale a SIM
			}
	   }
	      
	   if (!jaSorteado){ // se jaSorteado e NAO, entao mega[i] recebe o numero sorteado
	   		mega[i] = numSorteado;
			i++;
		 }
    }
	
	// ordenando os numeros da megasena
	for (i = 0; i < 6; i++){
		for (j = i+1; j < 6; j++){
			if (mega[i] > mega[j]){
				aux = mega[i];
				mega[i] = mega[j];
				mega[j] = aux;
			}	
		}
	}
	
	 /* imprimindo os numeros sorteados para testar as possibilidades :)
	for (i = 0; i < 6; i++){
		printf("%d | ", mega[i]);
	}
	*/
	
	// recebendo a aposta do jogador
	puts("\n INSIRA OS NUMEROS DA SUA APOSTA:");
	for (i = 0; i < 6; i++){
		scanf("%d", &aposta[i]);	
	}
	
	for (i = 0; i < 6; i++){
		for (j = 0; j < 6; j++){
			if (mega[i] == aposta[j]){
				acertos += 1;
			}
		}
	}
	
	if (acertos == 4){
		printf("\nVoce fez a quadra!");
	}
	else if (acertos == 5){
		printf("\nVoce fez a quina!");
	}
	else if (acertos == 6){
		printf("\nVoce fez a Megasena!");
	}
	else{
		printf("\nVoce perdeu o jogo!");
	}
		
	return 0;
}
