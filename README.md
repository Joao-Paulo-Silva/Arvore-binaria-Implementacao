#  Árvore Binária em linguagem C

## Selecione o Idioma / Select the language:

### Idioma/language:

1.  [Português](#Português)

2.  [English](#English)

---
### Documentação do projeto / project documentation:

3. [Docs.](docs/indice.md#-índice-)


## Português

#### ``@author João Paulo``, Link para executar o projeto no [replit.com](https://replit.com/@JooPaulodaSilv1/Arvore-binaria-Implementacao).

Este projeto implementa uma árvore binária para tipos genéricos, no qual se usa de um tipo ``address`` declarado na biblioteca ``types.h``, este tipo equivale a um ponteiro do tipo vazio ``void *``, ou tipo declarado neste arquivo de cabeçalho é o tipo ``string``, no qual é equivalente a ``char *``.

---

### **Decisões para a interface no terminal.** 

A interface deste projeto utiliza caracteres especiais para a formulação dos menus, também de métodos para o posicionamento no terminal e verificação se as teclas são pressionadas. 

#### **Menu Inicial.**

Na tela inicial existem dois métodos para sua navegação, sendo elas: as setas do teclado ou os números de 1 a 4, após selecionar uma opção só apertar a tecla enter para entrar na opção.

<img src="imgs/MenuInicial.gif" margin-left="auto" margin-right="auto">

#### **Inserir Produtos.**

Nessa tela é possível a inserção de produtos na árvore podendo inserir 1 ou vários produtos, os produtos não serão inseridos se houver o mesmo código.

<img src="imgs/inserir.gif" margin-left="auto" margin-right="auto">

#### **Lista Produtos.**

Nesta tela pode-se navegar pela árvore usando as setas do teclado para a esquerda e direita, mostrando o botão em cinza claro se não houver filho no nó.

<img src="imgs/ListaTodos.gif" margin-left="auto" margin-right="auto">


#### **Buscar Produtos.**

A opção de buscar produtos abre um novo menu, no qual pode se optar por buscar via nome ou código.

<img src="imgs/busca.gif" margin-left="auto" margin-right="auto">
