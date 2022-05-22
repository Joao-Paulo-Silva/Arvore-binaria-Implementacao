/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 8.05.2022
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
  Node * root;
  Node * atual;
  int length;
}Tree;

/** 
*  O tipo ``ManipulateTree`` possui ponteiros para funções de manipulação 
*  da árvore para inicializar esses ponteiros deve criar a variável 
*  chamando a função ``ManipulateTree new_ArvoreBinaria()`` 
*/
typedef struct MTREEB{
  Tree * Arvore;
  Tree *(*_criarArvore)();
  Node *(*getRaiz)(Tree *);
  Node *(*getAtual)(Tree *);
  int (*length)();
  bool (* append)(Tree *, void *);
  void * (* remove)(Tree *, void *);
  void * (* pesquisa)(Tree *, void *);
  void (* desalocTree)(Tree *);
}ArvoreBinaria;

// Função ``new_ArvoreBinaria()``
ArvoreBinaria * new_ArvoreBinaria();
Tree * _criarTree();
bool append(Tree * arvore, address endDado, string chave);

bool setAtualEsquerda(Tree * arvore);
bool setAtualDireita(Tree * arvore);
bool resetarAtual(Tree * arvore);
bool filhosAtualEsquerdaVazios(Tree * arvore);
bool filhosAtualDireitaVazios(Tree * arvore);
address getDadosAtual(Tree * arvore);
void destroiArvore(Tree * arvore);
#endif /* ARVOREBINARIA_H */