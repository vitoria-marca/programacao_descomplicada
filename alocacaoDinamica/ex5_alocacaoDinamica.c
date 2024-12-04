/*
Vitória Marca Santa Lucia - Exercícios sobre Alocação Dinâmica, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

Faca um programa que leia um numero N, crie dinamicamente e leia um vetor de inteiro de N posicoes; 
Leia um numero inteiro X e conte e mostre os multiplos desse numero que existem no vetor. >> n % x == 0
*/

#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int n);
void preencher_vetor(int* vetor, int n);
void comparar(int* vetor, int tamanho, int n);

int main(){
    int nro_posicoes, x;

    printf("Digite o número de posições do vetor ");
    scanf("%d", &nro_posicoes);

    int* vetor = criar_vetor(nro_posicoes);

    printf("Digite um numero para ver se ha multiplos dele no vetor");
    scanf("%d", &x);

    comparar(vetor, nro_posicoes, x);

    free(vetor);

    return 0;
}

void comparar(int *vetor, int tamanho, int n){
    int flag = 0;
    for (int i=0; i < tamanho; i++){
        if (vetor[i]%n == 0){
            printf("%d eh multiplo de %d -- ", vetor[i], n);
            flag = 1;
        }
    }

    if (!flag){
        printf("Nenhum numero eh multiplo de %d", n);
    }
}

int* criar_vetor(int n){

    int* vetor = (int*)malloc(n * sizeof(int));
    if (vetor == NULL){
        printf("Não foi possivel alocar memoria");
        return NULL;
    }
    preencher_vetor(vetor, n);

    return vetor;
}

void preencher_vetor(int* vetor, int n){
    for (int i = 0; i < n; i++) {
        printf("Digite um número para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}