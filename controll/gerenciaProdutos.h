/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 22.04.2022
*/

#ifndef GERENCIAPRODUTOS_H
#define GERENCIAPRODUTOS_H

#include <stdio.h>
#include <stdlib.h>
#include "../model/console-IO.h"
#include "../model/arvoreBinaria.h"
#include "../view/screens.h"
/**
*  Insere vários produtos a árvore, recebe como parâmetro o endereço de uma ``Tree *``.
*/
void insereProdutoArvore(Tree * arvore);
/**
*  Mostra os dados da árvore, sua navegação dá se 
*  pelas setas(**esquerda e direita**) do teclado, retorna 
*  ``false`` se a árvore binária não possuir dados.
*/
bool mostraTodosArvore(Tree * arvore);

#endif