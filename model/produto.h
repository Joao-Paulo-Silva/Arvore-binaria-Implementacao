/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 22.04.2022
*/

#ifndef PRODUTO_H
#define PRODUTO_H

#include <stdlib.h>
#include <string.h>

//  Tipo de dado que define a estrutura de um produto.
typedef struct PRODUTO{
  char codigo[50];
  char nome[50];
  char marca[30];
  float preco;
}Produto;
/**
*  Função para alocar dinamicamente um tipo ``Produto`` retorna o endereço da memória do mesmo.
*/
Produto * _criarProduto();

// Função ``getCodigo`` retorna o codigo de um produto.
char * getCodigo(Produto * pdt);
//  Função ``setCodigo`` define o codigo de um produto.
void setCodigo(Produto * pdt, char codigo[50]);

// Função ``getNome`` retorna o nome de um produto.
char * getNome(Produto * pdt);
//  Função ``setNome`` define o nome de um produto.
void setNome(Produto * pdt, char nome[50]);

// Função ``getMarca`` retorna a marca de um produto.
char * getMarca(Produto * pdt);
//  Função ``setMarca`` define a marca de um produto.
void setMarca(Produto * pdt, char marca[50]);

// Função ``getPreco`` retorna o preço de um produto.
float getPreco(Produto * pdt);
//  Função ``setPreco`` define o preço de um produto.
void setPreco(Produto * pdt, float preco);

// Função para desalocar um produto alocado dinamicamente.
void destroiproduto(Produto * pdt);
#endif