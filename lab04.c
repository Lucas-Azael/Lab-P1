#include <stdio.h>
#include <string.h>

char *alunoSituacao(char nome[16]) {
    float n1, n2, n3, n4, media;
    printf("NOTA 1 DE %s: \n", nome);
    scanf("%f",&n1);
    printf("NOTA 2 DE %s: \n", nome);
    scanf("%f",&n2);
    printf("NOTA 3 DE %s: \n", nome);
    scanf("%f",&n3);
    printf("NOTA 4 DE %s: \n", nome);
    scanf("%f",&n4);
    media = (n1+n2+n3+n4)/4;
    printf(">> MEDIA DE %s: %.2f\n", nome, media);
    putchar('\n');
    if(media>=7){
        return "APROVADO";
    }
    else
    {
        return "REPROVADO";
    }

}
void nomesAlunos(char n[][2][16]) {
    int i, j;
    char *nome;
    for(i=0; i<2;i++){
        for(j=0;j<1;j++){
            printf("NOME: ");
            fgets(n[i][j],16,stdin);
            nome = n[i][j];
            strcpy(n[i][j+1],alunoSituacao(nome));
            setbuf(stdin,NULL);
                }
            }
}
void mostrarAlunos(char n[][2][16]) {
    int i, j;
    for(i=0; i<2;i++){
        for(j=0;j<1;j++){
            printf("%s %s" , n[i][j], n[i][j+1]);
                }
                putchar('\n');
            }
}
int main() {
    char n[5][2][16];
    nomesAlunos(n);
    mostrarAlunos(n);

    return 0;
}
