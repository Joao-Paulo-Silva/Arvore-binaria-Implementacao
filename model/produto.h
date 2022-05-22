#ifndef PRODUTO_H
#define PRODUTO_H

#include <stdlib.h>
#include <string.h>

typedef struct PRODUTO{
  char codigo[50];
  char nome[50];
  char marca[30];
  float preco;
}Produto;

Produto * _criarProduto();

char * getCodigo(Produto * pdt);
void setCodigo(Produto * pdt, char codigo[50]);

char * getNome(Produto * pdt);
void setNome(Produto * pdt, char nome[50]);

char * getMarca(Produto * pdt);
void setMarca(Produto * pdt, char marca[50]);

float getPreco(Produto * pdt);
void setPreco(Produto * pdt, float preco);

#endif