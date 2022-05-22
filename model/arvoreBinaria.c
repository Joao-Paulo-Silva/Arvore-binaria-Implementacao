#include "arvoreBinaria.h"

Node * _criarNode(){
  return malloc(sizeof(Node));
}

Tree * _criarTree(){
  Tree * novaTree = malloc(sizeof(Tree));
  novaTree->root = NULL;
  return novaTree;
}

bool addNode(Node ** no, address endDado, string chave){
  if(* no == NULL){
    * no = _criarNode();
    (* no)->data = endDado;
    (* no)->left = NULL;
    (* no)->right = NULL;
    (* no)->chave = chave;
    return true;
  }else{
    if(strcmp(chave, (* no)->chave) < 0){
      return addNode(&(* no)->left, endDado, chave);
    }else{
      return addNode(&(* no)->right, endDado, chave);
    }
  }
  return false;
}
bool append(Tree * arvore, address endDado, string chave){
  if(arvore != NULL || endDado != NULL || chave != NULL){
    bool aux;
    resetarAtual(arvore);
    if((aux = addNode(&arvore->root,  endDado, chave)))
      arvore->length++;
    return aux;
  }else
    return false;
}

bool setAtualEsquerda(Tree * arvore){
  if(arvore->atual->left != NULL){
    arvore->atual = arvore->atual->left;
    return true;
  }else
    return false;
}

bool setAtualDireita(Tree * arvore){
  if(arvore->atual->right != NULL){
    arvore->atual = arvore->atual->right;
    return true;
  }else
    return false;
}

bool resetarAtual(Tree * arvore){
  if(arvore->root != NULL){
    arvore->atual = arvore->root;
    return true;
  }else
    return false;
}
bool filhosAtualEsquerdaVazios(Tree * arvore){
  if(arvore->atual->left != NULL){
    return true;
  }else{
    return false;
  }
}
bool filhosAtualDireitaVazios(Tree * arvore){
  if(arvore->atual->right != NULL){
    return true;
  }else{
    return false;
  }
}


address getDadosAtual(Tree * arvore){
  return arvore->atual->data;
}

void destroiNo(Node * no){
  if(no != NULL){
    free(no->data);
    destroiNo(no->left);
    destroiNo(no->right);
    free(no);
  }
}

void destroiArvore(Tree * arvore){
  if(arvore != NULL){
    destroiNo(arvore->root);
    free(arvore);
  }
}