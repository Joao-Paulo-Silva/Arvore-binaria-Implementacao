#include "produto.h"

Produto * _criarProduto(){
  return malloc(sizeof(Produto));
}

char * getCodigo(Produto * pdt){
  return pdt->codigo;
}
void setCodigo(Produto * pdt, char codigo[50]){
  strcpy(pdt->codigo, codigo);
}

char * getNome(Produto * pdt){
  return pdt->nome;
}
void setNome(Produto * pdt, char nome[50]){
  strcpy(pdt->nome, nome);
}

char * getMarca(Produto * pdt){
  return pdt->marca;
}
void setMarca(Produto * pdt, char marca[50]){
  strcpy(pdt->marca, marca);
}

float getPreco(Produto * pdt){
  return pdt->preco;
}
void setPreco(Produto * pdt, float preco){
  pdt->preco = preco;
}

void destroiproduto(Produto * pdt){
  if(pdt != NULL){
    free(pdt);
  }
}