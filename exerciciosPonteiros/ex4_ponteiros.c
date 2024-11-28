
/*
Vitória Marca Santa Lucia - Exercícios sobre Ponteiros, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

4. Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B o valor de A*/

#include <stdio.h>

void Switch (int*a, int*by);

int main(){
    
    int a,b;

    printf("Digite o primeiro valor\n");
    scanf("%d", &a);
    printf("Digite o segundo valor\n");
    scanf("%d", &b);

    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    Switch(&a,&b);

    printf("APOS A TROCA:::::\n");
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

}

void Switch (int*a, int*b){
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}