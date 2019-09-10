#include <stdio.h>
#include <stdlib.h>

int main() {
    int i; 
    while(i!=5){
    printf("Digite 1 para fibonacci\n");
    printf("Digite 2 para sequencia\n");
    printf("Digite 3 para operacoes aritimeticas\n");
    printf("Digite 4 para as dobrar\n");
    printf("Digite 5 para sair do programa\n");
    scanf("%d", &i);

    if(i==1){
        printf("++++++++++++++++++++++++\n");
        printf("       FIBONACCI         \n");
        printf("++++++++++++++++++++++++\n");
        int ant = 0;
        int atual = 1;
        int prox;
        int n, i;
        printf("Digite a quantidade de termos\n");
        scanf("%d", &n);
        while(n>atual){
            prox = ant + atual;
            ant = atual;
            atual = prox;
            printf("%d ",atual);
            }
            printf("Voltando para o menu\n");
            putchar('\n');
        }
    }
    return 0;
}