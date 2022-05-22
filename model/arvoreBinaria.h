/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 22.05.2022
*/

#ifndef ARVOREBINARIA_H
#define ARVOREBINARIA_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

// Nós da árvore binária.
typedef struct NODE{ 
  string chave;
  address data;
  struct NODE * left;
  struct NODE * right;
}Node;

// Árvore binária contendo a raiz(``... * root``) e o nó atual(``... * atual``).
typedef struct TREEB{
  // Armazena o endereço da raiz da árvore.
  Node * root;
  /* Nó atual após usar as funções de navegação: ``setAtualEsquerda(...)``,
  *  ``setAtualDireita(...)`` e ``resetarAtual(...)``.
  */
  Node * atual;
  //  Quantidade de dados que a árvore binária possui.
  int length;
// Árvore binária contendo a raiz(``... * root``) e o nó atual(``... * atual``).
}Tree; 

/**
* Função ``_criarTree()`` alocar espaço na memória para o tipo ``Tree`` e retorna seu endereço.
*/
Tree * _criarTree();

/**
* Função ``append(...)``, adicionar um item a árvore binária, 
* sua posição é determinada pela chave se já houver um item com 
* a mesma chave retorna ``false`` como erro ao inserir e ``true 
* quando obtiver sucesso na inserção. 
*/
bool append(Tree * arvore, address endDado, string chave);

/**
*  Função ``setAtualEsquerda(...)`` está função adiciona o nó 
*  a esquerda do atual na posição do atual em ``Tree.atual``, 
*  retorna ``false`` se o nó à esquerda for igual a ``NULL``.
*/
bool setAtualEsquerda(Tree * arvore);

/**
*  Função ``setAtualDireita(...)`` está função adiciona o nó 
*  a direita do atual na posição do atual em ``Tree.atual``, 
*  retorna ``false`` se o nó à direita for igual a ``NULL``.
*/
bool setAtualDireita(Tree * arvore);

/**
*  Função ``resetarAtual(...)``, define o ``Tree.atual`` 
*  igual ao ``Tree.root``, retorna false se a raiz for igual a NULL.
*/
bool resetarAtual(Tree * arvore);
/*
* Retorna verdadeiro(``true``) se o nó à esquerda for diferente de nulo(``NULL``).
*/
bool filhosAtualEsquerdaVazios(Tree * arvore);
/**
*  Retorna verdadeiro(``true``) se o nó à direita for diferente de nulo(``NULL``).
*/
bool filhosAtualDireitaVazios(Tree * arvore);
/**
*  Função ``getDadosAtual(...)``, retorna um endereço(``address``) 
*  para o dado do nó atual.
*/
address getDadosAtual(Tree * arvore);
/**
*  Função de busca a partir da ``string chave``, retorna um endereço(``address``) para o dado.
*/
address buscaDadoChave(Tree * arvore, string chave);
/**
* Função ``destroiArvore(...)`` está função desloca todos os nós e 
* dados, também desloca a árvore binária. 
*/
void destroiArvore(Tree * arvore);

#endif /*ARVOREBINARIA_H */