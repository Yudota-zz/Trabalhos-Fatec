#include <stdio.h>
#include <stdlib.h>
#define CLIENTE 0
#define FORNECEDOR 1
#define PRODUTO 2
#define maxIndiceVetor 30

//CLIENTE
typedef struct{
    
    char id[11];
    char nome[21];

}Cliente; //cont = 0

//FORNECEDOR
typedef struct{
    char id[11];
    char nome[21];

}Fornecedor; //cont= 1

//PRODUTO
typedef struct{
    
    char idProd[11];
    char desc[21];
    Fornecedor f;

}Produto; //cont = 2

typedef struct{
    char id[11];
    char nome[21];

}Categoria; //cont= 3

Cliente     c[maxIndiceVetor];
Fornecedor  f[maxIndiceVetor];
Produto     p[maxIndiceVetor];
Categoria   cat[maxIndiceVetor];

//VAI SER USADO PARA VERIFICAR O TAMANHO DA ARRAY
int cont[3];