#include <stdio.h>
#include <stdlib.h>
#include "./model/console-IO.h"
#include "./controll/gerenciaProdutos.h"
#include "./model/arvoreBinaria.h"
#include "./view/screens.h"

int main(void) {
  Tree * arvorePdt = _criarTree();
  bool loop = true;
  while(loop){
    limpaConsole();
    switch(menuInicial()){
      case 1:{
        insereProdutoArvore(arvorePdt);
      break;
      }
      case 2:
        limpaConsole();
        mostraTodosArvore(arvorePdt);
      break;
      case 3:
        limpaConsole();
      break;
      case 4:
        destroiArvore(arvorePdt);
        loop = false;
      break; 
    }
  }
  return 0;
}