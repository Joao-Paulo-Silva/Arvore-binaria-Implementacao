/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 22.04.2022
*/

#include <stdio.h>
#include <stdlib.h>
#include "./model/console-IO.h"
#include "./controll/gerenciaProdutos.h"
#include "./model/arvoreBinaria.h"
#include "./view/screens.h"

int main(void) {
  Tree * arvorePdt = _criarTree();
  bool loop = true;
  limpaConsole();
  while(loop){
    switch(menuInicial()){
      case 1:{
        insereProdutoArvore(arvorePdt);
        limpaConsole();
      break;
      }
      case 2:
        limpaConsole();
        if(mostraTodosArvore(arvorePdt)){
          limpaConsole();
        }else{
          positionPrint(0, 13);
          printf("\x1b[31m\033[1m\t✖  Não existem dados na árvore!\x1b[0m");
          positionPrint(0, 0);
        }
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