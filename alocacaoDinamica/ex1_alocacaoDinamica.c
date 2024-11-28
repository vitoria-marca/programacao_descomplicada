/*
Vitória Marca Santa Lucia - Exercícios sobre Alocação Dinâmica, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

1.Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, 
(b) Peca para o usuario digitar os 5 numeros no espaco alocado, 
(c) Mostre na tela os 5 numeros, 
(d) Libere a memoria alocada. */

#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int *vetor;

    vetor = (int *) malloc(5 * sizeof(int));
    if (vetor == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }

    for (int i=0; i<5; i++){
        printf("Digite o numero %d ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores do vetor alocado dinamicamente::: \n");
    for (int i=0; i<5; i++){
        printf("Vetor [%d]:: %d ", i+1, vetor[i]);
    }

    free(vetor);
    return 0;
}
