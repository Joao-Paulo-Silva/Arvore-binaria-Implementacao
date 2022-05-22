#include "screens.h"
// \033[47m\033[30m
//  \x1b[0m

int posicaoMenuVertical(int tecla, int posiAtual, int maximoItem){
  if(tecla > 48 && tecla < 58){
    int posi = tecla - 48;
    if(posi <= maximoItem){
      return tecla - 48;
    }else{
     return posiAtual; 
    }
  }
  switch(tecla) {
    case 0: { return 0; }
    case 1:{ 
      if(posiAtual == 1){
        posiAtual = maximoItem;
      }else{
        posiAtual -= 1;
      }
      break;
    }
    case 2:{ 
      if(posiAtual == maximoItem){
        posiAtual = 1;
      }else{
        posiAtual += 1;
      }
      break;
    }
  }  
  return posiAtual;
}
int menuInicial(){
  bool loop = true;
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
        "\n┃              MENU INICIAL             ┃"
        "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"  
        "\n┃ \033[47m\033[30m 1 ⊷  Inserir Produtos.              \x1b[0m ┃"
        "\n┃  2 ⊷  Lista Produtos.                 ┃"
        "\n┃  3 ⊷  Buscar Produtos.                ┃"
        "\n┃  4 ⊷  Sair.                           ┃" 
        "\n┣━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━┫\033[3m"
        "\n┃    ⬆️   Arrow up    ┃  ⬇️   Arrow down  ┃"
        "\n┗━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━┛\x1b[0m\n");
  
  int posicao = 1;
  int aux;
  while(loop){
    if((aux = posicaoMenuVertical(getArrow(), posicao, 4)) > 0){
      posicao = aux;
    }else{
      return posicao;
    }
    positionPrint(0, 4);
    printf("┃  1 ⊷  Inserir Produtos.               ┃"
         "\n┃  2 ⊷  Lista Produtos.                 ┃"
         "\n┃  3 ⊷  Buscar Produtos.                ┃"
         "\n┃  4 ⊷  Sair.                           ┃" );
    if(posicao == 1){
      positionPrint(0, 4);
      printf("┃ \033[47m\033[30m 1 ⊷  Inserir Produtos.              \x1b[0m ┃");
    }else if(posicao == 2){
      positionPrint(0, 5);
      printf("┃ \033[47m\033[30m 2 ⊷  Lista Produtos.                \x1b[0m ┃");
    }else if(posicao == 3){
      positionPrint(0, 6);
      printf("┃ \033[47m\033[30m 3 ⊷  Buscar Produtos.               \x1b[0m ┃");
    }else if(posicao == 4){
      positionPrint(0, 7);
      printf("┃ \033[47m\x1b[31m 4 ⊷  Sair                           \x1b[0m ┃" );
    }
    positionPrint(0, 11);
    printf("                                      ");
    positionPrint(0, 11);
  }
  return -1;
}

void botoes(){
  printf("┣━━━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━━━━━┫\033[3m"
       "\n┃     1 ⊷  Voltar.      ┃  2 ⊷  Adicionar.  ┃"
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━━━━━━━━━━━━┛\x1b[0m\n");
}

Produto * insereProduto(){
  Produto * produto = _criarProduto();
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                   PRODUTO                 ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
       "\n┃ Nome:                                     ┃"
       "\n┃ Preço:                                    ┃"
       "\n┃ Código:                                   ┃"
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(10, 4);
  input("%[^\n]", produto->nome);
  positionPrint(10, 5);
  input("%f", &produto->preco);
  positionPrint(11, 6);
  input("%[^\n]", produto->codigo);
  return produto;
}

void mostraProduto(Produto produto, bool esqueda, bool direita){
  printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓" 
       "\n┃                   PRODUTO                 ┃"
       "\n┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫" 
       "\n┃ Nome:                                     ┃"
       "\n┃ Preço:                                    ┃"
       "\n┃ Código:                                   ┃"
       "\n┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
  positionPrint(10, 4);
  printf("%s", produto.nome);
  positionPrint(10, 5);
  printf("%.2f", produto.preco);
  positionPrint(11, 6);
  printf("%s", produto.codigo);
  
  positionPrint(0, 8);
  if(esqueda == false && direita == false){
    printf("\033[2m┏━━━━━━━━━━━━━━━━━━━━━━┓ ┏━━━━━━━━━━━━━━━━━━┓"
                "\n┃     ⬅️  Esquerda.     ┃ ┃    ➡️  Direita.   ┃"
                "\n┗━━━━━━━━━━━━━━━━━━━━━━┛ ┗━━━━━━━━━━━━━━━━━━┛\x1b[0m\n");
  }else if(esqueda == true && direita == false){
    printf("┏━━━━━━━━━━━━━━━━━━━━━━┓ \033[2m┏━━━━━━━━━━━━━━━━━━┓\x1b[0m"
         "\n┃     ⬅️  Esquerda.     ┃ \033[2m┃    ➡️  Direita.   ┃\x1b[0m"
         "\n┗━━━━━━━━━━━━━━━━━━━━━━┛ \033[2m┗━━━━━━━━━━━━━━━━━━┛\x1b[0m\n");
  }else if(esqueda == false && direita == true){
    printf("\033[2m┏━━━━━━━━━━━━━━━━━━━━━━┓\x1b[0m ┏━━━━━━━━━━━━━━━━━━┓"
         "\n\033[2m┃     ⬅️  Esquerda.     ┃\x1b[0m ┃    ➡️  Direita.   ┃"
         "\n\033[2m┗━━━━━━━━━━━━━━━━━━━━━━┛\x1b[0m ┗━━━━━━━━━━━━━━━━━━┛\n");
  }else{
    printf("┏━━━━━━━━━━━━━━━━━━━━━━┓ ┏━━━━━━━━━━━━━━━━━━┓"
         "\n┃     ⬅️  Esquerda.     ┃ ┃    ➡️  Direita.   ┃"
         "\n┗━━━━━━━━━━━━━━━━━━━━━━┛ ┗━━━━━━━━━━━━━━━━━━┛\n");
  }
  positionPrint(0, 12);
  printf("\x1b[34m\033[1m\tDigite \033[3m\x1b[35mZ\x1b[0m\x1b[34m para voltar à tela inicial!\x1b[0m\n");
  positionPrint(0, 11);
}