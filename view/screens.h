#ifndef SCREENS_H
#define SCREENS_H

#include "../model/console-IO.h"
#include "../model/produto.h"
int menuInicial();
Produto * insereProduto();
void botoes();
void mostraProduto(Produto produto, bool esqueda, bool direita);
#endif
