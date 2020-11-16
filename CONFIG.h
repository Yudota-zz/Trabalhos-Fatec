#pragma once

#define CLIENTE 0
#define FORNECEDOR 1
#define PRODUTO 2
#define maxIndiceVetor 30

typedef struct{
    
    char id[11];
    char nome[21];

}Cliente; //cont = 0

typedef struct{
    char id[11];
    char nome[21];

}Fornecedor; //cont= 1

typedef struct{
    char id[11];
    char nome[21];

}Produto; //cont = 2

Cliente     c[maxIndiceVetor];
Fornecedor  f[maxIndiceVetor];
Produto     p[maxIndiceVetor];


int cont[3];