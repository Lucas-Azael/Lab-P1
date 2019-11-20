#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int** criarMatriz(int lin, int col){
    int **mat;
    int i;
    mat=(int**)malloc(lin*sizeof(int*));
    for(i=0;i<lin;i++){
        mat[i]=(int*)calloc(col, sizeof(int));
    }
    return mat;
}
