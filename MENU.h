#include <stdio.h>
#include <stdlib.h>

void menuCadastro(){
	int opcaoCadastro;
	
	do{
	    printf("---- Cadastro ----\n");
	    printf("[1] Cadastrar Cliente\n");
	    printf("[2] Cadastrar Fornecedor\n");
	    printf("[3] Cadastrar Produto\n");
	    printf("[4] Cadastrar Categoria\n");
	    printf("[0] Voltar\n");
	    printf("Digite a opcao desejada: \n > ");
	    scanf("%d", opcaoCadastro);
	
	}while(opcaoCadastro != 0);
}
void menuPesquisa(){
	int opcaoPesquisa;
	
	do{
	    printf("---- Pesquisa ----\n");
	    printf("[1] Pesquisar Cliente\n");
	    printf("[2] Pesquisar Fornecedor\n");
	    printf("[3] Pesquisar Produto\n");
	    printf("[4] Pesquisar Categoria\n");
	    printf("[0] Voltar\n");
	    printf("Digite a opcao desejada: \n > ");
	    scanf("%d", opcaoPesquisa);
	
	}while(opcaoPesquisa != 0);
	
}
void menuAlteracao(){
	int opcaoAlteracao;
	
	do{
	    printf("---- Alteracao ----\n");
	    printf("[1] Alterar Cliente\n");
	    printf("[2] Alterar Fornecedor\n");
	    printf("[3] Alterar Produto\n");
	    printf("[4] Alterar Categoria\n");
	    printf("[0] Voltar\n");
	    printf("Digite a opcao desejada: \n > ");
	    scanf("%d", opcaoAlteracao);
	
	}while(opcaoAlteracao != 0);
}
void menuExclusao(){
	int opcaoExclusao;
	
	do{
	   	printf("---- Exlusao ----\n");
	    printf("[1] Excluir Cliente\n");
	    printf("[2] Excluir Fornecedor\n");
	    printf("[3] Excluir Produto\n");
	    printf("[4] Excluir Categoria\n");
	    printf("[0] Voltar\n");
	    printf("Digite a opcao desejada: \n > ");
	    scanf("%d", opcaoExclusao);
	
	}while(opcaoExclusao != 0);
}
void menuPrincipal(){
	
	int opcao;
	int sair;
	
	do{
	    printf("---- MENU ----\n");
	    printf("[1] Cadastro\n");
	    printf("[2] Pesquisa\n");
	    printf("[3] Alteracao\n");
	    printf("[4] Exclusao\n");
	    printf("[0] Sair\n");
	    printf("Digite a opcao desejada: \n > ");
	    scanf("%d", opcao);
	    
	    switch(opcao){
	    	case 0: 
	    		
	    		printf("Deseja realmente sair?\n[1]Sim\t[2]Nao\n> ");
	    		scanf("%d", sair);
	    		if(sair == 1) {
	    			opcao = 0;
				}
			break;
	    	case 1: 
				system("cls");
				menuCadastro();	
			break;
	    	case 2: menuPesquisa();	break;
	    	case 3: menuAlteracao();break;
	    	case 4: menuExclusao();	break;
		}
	
	}while(opcao != 0);
}
