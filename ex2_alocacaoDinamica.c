/*
Vitória Marca Santa Lucia - Exercícios sobre Alocação Dinâmica, Programação Descomplicada.
Algoritmos e Estrutura de Dados I

11. Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
(a) Deverao ser armazenados, para cada aluno: matrıcula, sobrenome (apenas um) e
ano de nascimento.
(b) Ao inıcio do programa, o usuario devera informar o numero de alunos que serao armazenados
(c) O programa devera alocar dinamicamente a quantidade necessaria de memoria para armazenar os registros dos alunos.
(d) O programa devera pedir ao usuario que entre com as informacoes dos alunos.
(e) Ao final, mostrar os dados armazenados e liberar a memoria alocada.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char sobrenome[100];
	int anoNascimento;
    int matricula;
} registro;

int main(){
    
    int tamanho;
    registro *alunos;


    printf("Quantos alunos serão registrados? \n");
    scanf("%d",&tamanho);

    alunos = (registro*) malloc(tamanho * sizeof(registro));
    if (alunos == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }

    for (int i=0; i<tamanho; i++){
        printf("Digite o numero de matricula ");
        scanf("%d", &alunos[i].matricula);
        printf("Digite o ano de nascimento ");
        scanf("%d", &alunos[i].anoNascimento);
        printf("Digite o sobrenome ");
        getchar();
        fgets(alunos[i].sobrenome,sizeof(alunos[i].sobrenome), stdin);

        alunos[i].sobrenome[strcspn(alunos[i].sobrenome, "\n")] = '\0'; 

        printf("\n");
    }

    for (int i=0; i<tamanho; i++){
        printf("----Informacoes do aluno %d:: ----\n", i+1);
        printf("Matricula:: %d\n", alunos[i].matricula);
        printf("Sobrenome:: %s\n", alunos[i].sobrenome);
        printf("Ano de nascimento:: %d\n", alunos[i].anoNascimento);

        printf("\n");

    }

    free(alunos);
    return 0;
}
