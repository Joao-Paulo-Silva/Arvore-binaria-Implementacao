/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 22.04.2022
*/

#ifndef SCREENS_H
#define SCREENS_H

#include "../model/console-IO.h"
#include "../model/produto.h"
/**
*  Função para mostrar o menu inicial da aplicação.
*/
int menuInicial();

/**
*  Interface para a inserção de um produto retornar um 
*  endereço de um ``Produto`` alocado dinamicamente. 
*/
Produto * insereProduto();

/**
* Botões de adicionar ou voltar após inserir um produto na árvore.
*/
void botoes();

/**
*  Mostra um produto e seus botões para ir à esquerda ou à direita, 
*  os mesmos ativos se houver dado desativado se não houver dados nas folhas.
*/
void mostraProduto(Produto produto, bool esqueda, bool direita);

int buscaMenu();
string entradaBusca(int op);
int buscaTelaProduto(Produto * produto);
#endif
