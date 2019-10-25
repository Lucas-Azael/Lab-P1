#include <stdio.h>
#include <string.h>

int main(){
    char dict[10][2][30];
    char v;
    int i, j;

    for(i=0; i<10;i++){
        for(j=0;j<2;j++){
            fgets(dict[i][j],30,stdin);
        }
    }

    for(i=0;i<10;i++){
        for(j=0;j<2;j++){
            printf("%s ",dict[i][j]);
        }
        putchar('\n');
    }


    return 0;
}
