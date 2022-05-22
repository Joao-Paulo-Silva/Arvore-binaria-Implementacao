/*
*  @copyright João Paulo.
*  Github: https://github.com/Joao-Paulo-Silva
*  @author: João Paulo.
*  @date: 22.04.2022
*/

#ifndef CONSOLEIO_H
#define CONSOLEIO_H

#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "types.h"

/**
*  Função para entrada de dados com limpeza de buff, 
*  definindo o mesmo como ``NULL``.
*  
* **Parâmetros:**
*  
* **``tipos``:** String com a definição do tipo.</p>
*
* **``variavel``:** endereço de qualquer variável.</p>
*
*  **``return``:** ``true`` se inserir ou ``false`` se não inserir.
*/
bool input(const char * tipos, address variavel);

/** 
* Função para posicionar o ponteiro na tela do terminal, 
* para efetuar os prints sem apagar a tela.
*/
void positionPrint(int x,  int y);

/**
* Função para limpar o terminal e substituir o ``system("clear")`` 
* ou ``"cls"``, para executar em qualquer sistema.
*/
void limpaConsole();

// Função ``int getch(void)`` pegar as teclas digitadas.
int getch(void);
/**
*  Função ``getArrow`` para verificar se as setas do teclado foram clicadas.
*  
*  ---
*  ``return``:
> + **``0``: Enter.**
> + **``1``: Cima.**
> + **``2``: Baixo.**
> + **``3``: Direita.**
> + **``4``: Esquerda.**
> + **``5``: Esc**
*/
int getArrow(void);

#endif /* CONSOLEIO_H */