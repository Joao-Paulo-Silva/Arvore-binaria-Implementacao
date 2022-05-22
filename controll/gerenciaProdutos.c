#include "gerenciaProdutos.h"

void insereProdutoArvore(Tree * arvore){
  bool loopInsere = true, controle = true;
  char tecla;
  while(loopInsere){
    if(controle){
      limpaConsole();
      Produto * pdt = insereProduto();
      bool inserido = append(arvore, pdt, getCodigo(pdt));
      controle = false;
      positionPrint(0, 7);
      botoes();
      if(inserido){
        printf("\x1b[32m\n\033[1m\t\t✔  Inserido com sucesso!\x1b[0m");
      }else{
        printf("\x1b[31m\n\033[1m\t\t✖  Falha ao inserir dado, \n\t\tcódigo do produto já existe!\x1b[0m");
      }
      positionPrint(0, 10);
    }else if((tecla = getch()) == '2'){
      controle = true;
    }else if(tecla == '1'){
      loopInsere = false;
    }else{
      positionPrint(0, 10);
      printf("   ");
      positionPrint(0, 10);
    }
  }
}

bool mostraTodosArvore(Tree * arvore){
  if(arvore->length > 0){
    resetarAtual(arvore);
    bool loop = true;
    int tecla;
    while(loop){
      tecla = 0;
      limpaConsole();
      mostraProduto( * (Produto *)getDadosAtual(arvore), filhosAtualEsquerdaVazios(arvore), filhosAtualDireitaVazios(arvore));
      tecla = getArrow();
      if(tecla == 5){
        loop = false;
      }else if(tecla == 4 && filhosAtualEsquerdaVazios(arvore)){
        setAtualEsquerda(arvore);
      }else if(tecla == 3 && filhosAtualDireitaVazios(arvore)){
        setAtualDireita(arvore);
      }
    }
     resetarAtual(arvore);
    return true;
  }else{
    return false;
  }
  
}