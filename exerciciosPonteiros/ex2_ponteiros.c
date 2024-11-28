
/*
Vitória Marca Santa Lucia - Exercícios sobre Ponteiros, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e exiba o maior endereco.*/

#include <stdio.h>

int main(){
    
    int a,b;

    if (&a > &b) {printf("endereco de A: %p\n", &a);}
    else printf("Endereco de B: %p\n", &b);

    //apenas para comparar 
    printf("endereco de A: %p\n", &a);
    printf("Endereco de B: %p\n", &b);

}