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
    char id[11];
    char nome[21];

}Produto; //cont = 2

Cliente     c[maxIndiceVetor];
Fornecedor  f[maxIndiceVetor];
Produto     p[maxIndiceVetor];

//VAI SER USADO PARA VERIFICAR O TAMANHO DA ARRAY
int cont[3];