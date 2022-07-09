## Português

Biblioteca ``console-IO.h``, essa lib, serve para entrada e saída de dados.

---

Ir para a biblioteca [clique aqui!](../model/console-IO.h)

---

Função para entrada de dados com limpeza de buff, 
definindo o mesmo como ``NULL``.
**Parâmetros:**
> **``tipos``:** String com a definição do tipo.</p>
> **``variavel``:** endereço de qualquer variável.</p>
> **``return``:** ``true`` se inserir ou ``false`` se não inserir.
```c
bool input(const char * tipos, address variavel);
```
---

Função para posicionar o ponteiro na tela do terminal, 
para efetuar os prints sem apagar a tela.

```c
void positionPrint(int x,  int y);
```

---

Função para limpar o terminal e substituir o ``system("clear")`` ou ``"cls"``, para executar em qualquer sistema.

```c
void limpaConsole();
```

---

Função ``int getch(void)`` pegar as teclas digitadas.

```c
int getch(void);
```

---

Função ``getArrow`` para verificar se as setas do teclado foram clicadas.


``return``:
> + **``0``: Enter.**
> + **``1``: Cima.**
> + **``2``: Baixo.**
> + **``3``: Direita.**
> + **``4``: Esquerda.**
> + **``5``: Esc**

```c
int getArrow(void);
```

---

## English

Library ``console-IO.h``, this lib is for input and output data.

---

Go to the library [click here!](../controll/gerenciaProdutos.h)

---


Função para entrada de dados com limpeza de buff, 
definindo o mesmo como ``NULL``.
**Parameters:**
> **``types``:** String with the type definition.</p>
> **``variable``:** address of any variable.</p>
> **``return``:** ``true`` if you enter, or ``false`` if you don't.
```c
bool input(const char * tipos, address variavel);
```
---

Function to position the pointer on the terminal screen, to make the prints without erasing the screen.

```c
void positionPrint(int x,  int y);
```

---

Function to clear the terminal and replace ``system("clear")`` or ``"cls"``, to run on any system

```c
void limpaConsole();
```

---

Function ``int getch(void)`` get keystrokes.

```c
int getch(void);
```

---

``getArrow`` function to check if keyboard arrows have been clicked.


``return``:
> + **``0``: Enter.**
> + **``1``: Cima.**
> + **``2``: Baixo.**
> + **``3``: Direita.**
> + **``4``: Esquerda.**
> + **``5``: Esc**

```c
int getArrow(void);
```

---