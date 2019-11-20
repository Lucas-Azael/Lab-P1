#ifdef MATRIZ_HEADERS
#define MATRIZ_HEADERS
int** criarMatriz(int lin, int col);
int adicionaMatriz(int **mat, int **mat2);
int subtraiMatriz(int **mat, int **mat2);
int produtoMatriz(int **mat, int num);
int matrizOposta(int **mat);
int determinanteMatriz(int **mat);
#endif