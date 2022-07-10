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

### Árvore Binária

Uma árvore binária é uma estrutura de dados caracterizada por: Ou não tem elemento algum. Ou tem um elemento distinto, denominado raiz, com dois ponteiros para duas estruturas diferentes, denominadas subárvore esquerda e subárvore direita. [Wikipédia](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwj1zafB-Pj3AhUaK7kGHbm-DCYQmhN6BAhWEAI&url=https%3A%2F%2Fpt.wikipedia.org%2Fwiki%2F%25C3%2581rvore_bin%25C3%25A1ria&usg=AOvVaw0qT_P5p18LdeLCRggL-CKi)

![](imgs/ArvoreBinaria.svg)

---

### **Decisões para a interface no terminal.** 

A interface deste projeto utiliza caracteres especiais para a formulação dos menus, também de métodos para o posicionamento no terminal e verificação se as teclas são pressionadas. 

---

#### **Menu Inicial.**

Na tela inicial existem dois métodos para sua navegação, sendo elas: as setas do teclado ou os números de 1 a 4, após selecionar uma opção só apertar a tecla enter para entrar na opção.

![](imgs/MenuInicial.gif)

---

#### **Inserir Produtos.**

Nessa tela é possível a inserção de produtos na árvore podendo inserir 1 ou vários produtos, os produtos não serão inseridos se houver o mesmo código.

![](imgs/inserir.gif)

---

#### **Lista Produtos.**

Nesta tela pode-se navegar pela árvore usando as setas do teclado para a esquerda e direita, mostrando o botão em cinza claro se não houver filho no nó.

![](imgs/ListaTodos.gif)

---

#### **Buscar Produtos.**

A opção de buscar produtos abre um novo menu, no qual pode se optar por buscar via nome ou código.

![](imgs/busca.gif)

---

#### Nó 

O nó de uma árvore binária caracteriza-se por possuir um o valor que o nó armazena e o endereço para seus filhos (*esquerda e direita*), como no exemplo abaixo com número inteiro:

```C
// Definição de uma estrutura para ser o tipo nó da árvore.
typedef struct NODE{
  int valor; // Valor armazenado.
  struct NODE * esquerda; // Filho a esquerda.
  struct NODE * direita;  // Filho a esquerda.
}no;
```

---

#### Árvore binária usando o tipo acima:

```C
typedef struct TREE{
  no * raiz;
}Tree;
```
A implementação é simples, como visto acima, para ajudar na navegação, pode se colocar o nó atual na árvore também para facilitar as operações de navegação na árvore.

```C
typedef struct TREE{
  no * raiz;
  no * atual;
}Tree;
```

## English


#### ``@author João Paulo``, Link to run the project on [replit.com](https://replit.com/@JooPaulodaSilv1/Arvore-binaria-Implementacao).

This project implements a binary tree for generic types, which uses a type ``address`` declared in the ``types.h`` library, this type is equivalent to an empty pointer ``void *``, or type declared in this header file is the ``string`` type, which is equivalent to ``char *``.

---

### Binary Tree

A binary tree is a data structure characterized by: Either it has no elements. Or it has a distinct element, called the root, with two pointers to two different structures, called the left subtree and right subtree. [Wikipédia](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwj1zafB-Pj3AhUaK7kGHbm-DCYQmhN6BAhWEAI&url=https%3A%2F%2Fpt.wikipedia.org%2Fwiki%2F%25C3%2581rvore_bin%25C3%25A1ria&usg=AOvVaw0qT_P5p18LdeLCRggL-CKi)

![](imgs/BinaryTree.svg)

---

### **Decisions for the interface in the terminal.** 

The interface of this project uses special characters to formulate the menus, as well as methods for positioning in the terminal and checking if the keys are pressed.

---

#### **Home Menu.**

On the home screen there are two methods for your navigation, namely: the keyboard arrows or the numbers from 1 to 4, after selecting an option just press the enter key to enter the option.


![](imgs/MenuInicial.gif)

---

#### **Insert Products.**

In this screen it is possible to insert products in the tree, being able to insert 1 or several products, the products will not be inserted if there is the same code.

![](imgs/inserir.gif)

---

#### **List Products.**

In this screen you can navigate through the tree using the left and right keyboard arrows, showing the button in light gray if there is no child in the node.

![](imgs/ListaTodos.gif)

---

#### **Search Products.**

The option to search for products opens a new menu, in which you can choose to search by name or code.

![](imgs/busca.gif)

---

#### Node

The node of a binary tree is characterized by having a value that the node stores and the address for its children (*left and right*), as in the example below with an integer number:

```C
// Definition of a structure to be the node type of the tree.
typedef struct NODE{
  int valor; // Value stored.
  struct NODE * left; // Child on the left.
  struct NODE * right;  // Child on the right.
}no;
```

---

#### Binary tree using the above type:

```C
typedef struct TREE{
  no * root;
}Tree;
```
The implementation is simple, as seen above, to help navigation, you can place the current node in the tree as well to facilitate tree navigation operations.

```C
typedef struct TREE{
  no * root;
  no * current;
}Tree;
```
