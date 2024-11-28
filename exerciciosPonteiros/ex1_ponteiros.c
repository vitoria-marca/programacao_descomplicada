
/*
Vitória Marca Santa Lucia - Exercícios sobre Ponteiros, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

1.Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variaveis antes e apos a modificação. */

#include <stdio.h>

int main(){
    int numero, *pnum;
    char palavra[]="alo", *ppal;
    float real = 3.14;
    float *ptr = &real;

    numero = 235;
    pnum = &numero;
    ppal = palavra;
    printf("----Antes das modificacoes ----\n ");
    printf("Numero: %d\n ", numero);     
    printf("Palavra: %s\n ", palavra);     
    printf("Numero real: %.2f\n", *ptr);

    *pnum = 345;
    *ptr = 2.456;
    ppal[0] = 'h';
    ppal[1] = 'i';
    ppal[2] = 'i';


    printf("----Depois das modificacoes ----\n ");
    printf("Numero: %d\n ", numero);    
    printf("Palavra: %s\n ", palavra);     
    printf("Numero real: %.2f\n", *ptr);
}


