#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>


int main() {
    int i; 
    while(i!=5){
    printf("Digite 1 para fibonacci\n");
    printf("Digite 2 para sequencia\n");
    printf("Digite 3 para operacoes aritimeticas\n");
    printf("Digite 4 para as dobrar\n");
    printf("Digite 5 para sair do programa\n");
    scanf("%d", &i);
    
    if(i>5){
        printf("Numero invalido\n");
        i=0;
    }
    sleep(2);
    system("clear");
    putchar('\n');

    if(i==1){
        printf("++++++++++++++++++++++++\n");
        printf("       FIBONACCI        \n");
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
            putchar('\n');
            printf("Voltando para o menu\n");
            sleep(2);
            system("clear");
        }

        if(i==2){
            printf("++++++++++++++++++++++++\n");
            printf("  Sequencia de numeros  \n");
            printf("++++++++++++++++++++++++\n");
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
            printf("Voltando para o menu\n");
            sleep(2);
            system("clear");
        }

        if(i==3){
            printf("+++++++++++++++++++++++++++++++++++++\n");
            printf("       Operacoes aritimeticas        \n");
            printf("+++++++++++++++++++++++++++++++++++++\n");
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
            printf("Voltando para o menu\n");
            sleep(2);
            system("clear");
      }

      if(i==4){
          printf("+++++++++++++++++++++++++++++++++++++\n");
          printf("       Quantidade de dobras          \n");
          printf("+++++++++++++++++++++++++++++++++++++\n");
          int resul = 0;
          int n;
          int i;
          printf("Digite a quantidade de dobras\n");
          scanf("%d", &n);
          for(i=0;i<=n;i++){
              resul+= (1+2) + pow(2,i);
          }
          printf("Quantidade de dobras: %d\n", resul);
      }
            putchar('\n');
            printf("Voltando para o menu\n");
            sleep(2);
            system("clear");
    }
    putchar('\n');
    printf("Fim do programa\n"); 
    sleep(2);
    system("clear");
    return 0;
}