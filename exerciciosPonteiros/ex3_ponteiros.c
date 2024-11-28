
/*
Vitória Marca Santa Lucia - Exercícios sobre Ponteiros, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

3. Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco*/

#include <stdio.h>

int main(){
    
    int a,b;

    printf("Digite o primeiro valor\n");
    scanf("%d", &a);
    printf("Digite o segundo valor\n");
    scanf("%d", &b);

    if (&a > &b) {printf("o valor de A é: %d\n", a);}
    else printf("o valor de B é: %d\n", b);

    //apenas para comparar 
    printf("endereco de A: %p\n", &a);
    printf("Endereco de B: %p\n", &b);

}