#include "console-IO.h"

bool input(const char * tipos, address variavel){
  if(tipos[0] == '%'){
    int saida;
    if(tipos[1] == 's'){
      saida = scanf("%[^\n]", (char *) variavel);
    }else{
      saida = scanf(tipos, variavel);
    }
    setbuf(stdin, NULL);
    if(saida > 0){
      return true;
    }else
      return false;
  }else
    return false;
}

// Função para posicionar o ponteiro na tela do terminal, para efetuar os prints sem apagar a tela.
void positionPrint(int x,  int y){
  printf("\033[%d;%dH", y, x);
}

// Função para limpar o terminal e substituir o system(“clear”) ou “cls”, para executar em qualquer sistema.
void limpaConsole(){
  printf("\033[H\033[2J");
}

int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

int getArrow(void){
  char tecla;
  if((tecla = getch()) == '\033'){
    if(getch() == '['){
      switch(getch()) {
        case 'A': return 1; // Cima
        case 'B': return 2; // baixo
        case 'C': return 3; // Direita
        case 'D': return 4; // Esqueda
        default: return 5;
      }
    }
  } else if ( tecla == '\n'){
    return 0;
  }else if (tecla > 48 && tecla < 58){
    return tecla;
  }else if(tecla == 'z' || tecla == 'Z'){
      return 5;
    }
  return -1;
}