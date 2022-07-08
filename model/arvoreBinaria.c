#include "arvoreBinaria.h"

Node * _criarNode(){
  return malloc(sizeof(Node));
}

Tree * _criarTree(){
  Tree * novaTree = malloc(sizeof(Tree));
  novaTree->root = NULL;
  novaTree->length = 0;
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
    int verificacao = strcmp(chave, (* no)->chave);
    if(verificacao < 0){
      return addNode(&(* no)->left, endDado, chave);
    }else if(verificacao == 0){
      return false;
    }else{
      return addNode(&(* no)->right, endDado, chave);
    }
  }
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

address removeNo(Node ** no, string chave){
  if(* no == NULL){
    return NULL;
  }else{
    int verificacao = strcmp(chave, (* no)->chave);
    if(verificacao == 0){
      address * auxData = (* no)->data;
      if((* no)->left == NULL && (* no)->right == NULL){
        free(* no);
        * no = NULL;
        return auxData;
      }else{
        Node * auxNo = (* no);
        if((* no)->left == NULL){
          (* no) = (* no)->right;
          (* no)->right = NULL;
          free(auxNo);
          return auxData;
        }else if((* no)->right == NULL){
          (* no) = (* no)->left;
          (* no)->left = NULL;
          free(auxNo);
          return auxData;
        }else{
          // Falta implementar a remoção se os dois filhos estiverem com dados. 
          return NULL;
        }
      }   
    }else if(verificacao < 0){
      return removeNo(&(* no)->left, chave);
    }else {
      return removeNo(&(* no)->right, chave);
    }
  }
}

bool removeDado(Tree * arvore, string chave){
  address * auxEndDado;
  if((auxEndDado = removeNo(&arvore->root, chave)) != NULL){
    arvore->length--;
    free(auxEndDado);
    auxEndDado = NULL;
    return true;
  }else{
    return false;
  }
}

address pop(Tree * arvore, string chave){
  address * auxEndDado;
  if((auxEndDado = removeNo(&arvore->root, chave)) != NULL){
    arvore->length--;
    return auxEndDado;
  }else{
    return NULL;
  }
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

address buscaChaveRecussiva(Node ** no, string chave){
  if(* no == NULL){
    return NULL;
  }else{
    int verificacao = strcmp(chave, (* no)->chave);
    if(verificacao < 0){
      return buscaChaveRecussiva(&(* no)->left, chave);
    }else if(verificacao == 0){
      return (* no)->data;
    }else{
      return buscaChaveRecussiva(&(* no)->right, chave);
    }
  }
}

address buscaDadoChave(Tree * arvore, string chave){
  return buscaChaveRecussiva(&arvore->root, chave);
}

address buscaRecursivaElemento(Node ** no, string termoPesquisa, string (* getElemento)(address dado)){
  if(* no == NULL){
    return NULL;
  }else{
    address data = NULL;
    int verificacao = strcmp(termoPesquisa, getElemento((* no)->data));
    if(verificacao == 0){
      return (* no)->data;
    }
    data = buscaRecursivaElemento(&(* no)->left, termoPesquisa, getElemento);
    if(data == NULL){
      data = buscaRecursivaElemento(&(* no)->right, termoPesquisa, getElemento);
    }
    return data;
  }
}

address buscaDadoArvore(Tree * arvore, string termoPesquisa, string (* getElemento)(address dado)){
  if(arvore != NULL && getElemento != NULL && termoPesquisa != NULL){
    return buscaRecursivaElemento(&arvore->root, termoPesquisa, getElemento);
  }else{
    return NULL;
  }
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