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
    putchar('\n');

    if(i==1){
        printf("++++++++++++++++++++++++\n");
        printf("       FIBONACCI         \n");
        printf("++++++++++++++++++++++++\n");
        int ant = 0;
        int atual = 1;
        int prox;
        int n, i;
        printf("Digite o termo\n");
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

        if(i==2){
            int n;
            printf("Digite um numero\n");
            scanf("%d", &n);
            while(n>1){
                if(n%2==0){
                    n = n/2;
                }else {
                    n = 3 * n + 1;
                }
                printf("%d ", n);
            }
            putchar('\n');
            printf("Voltando ao menu\n");
            putchar('\n');
        }

        if(i==3){
            int a,b;
            char c;
            printf("Digite no teclado a operacao matematica desejada e os dois numeros\n");
            scanf("%d %c %d",&a,&c,&b);
            if(c == '+'){
                printf("%d + %d = %d",a,b,a+b);
            }else {
                if(c == '*'){
                    printf("%d * %d = %d",a,b,a*b);
                }else{
                    if(c == '/'){
                        printf("%d / %d = %d",a,b,a/b);
                    }else{
                        if(c == '-'){
                            printf("%d - %d = %d",a,b,a-b);
                        }else{
                            printf("Operacao invalida\n");
                        }
                    }
                }
            }
            putchar('\n');
            printf("Voltando ao menu\n");
            putchar('\n');
      }
    } 
    return 0;
}