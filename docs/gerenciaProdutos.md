## Português

Biblioteca ``gerenciaProdutos.h``, Essa lib liga o model com o view, fazendo o controle das operações.

---

Ir para a biblioteca [clique aqui!](../controll/gerenciaProdutos.h)

---

Insere vários produtos a árvore, recebe como parâmetro o endereço de uma ``Tree *``.

```c
void insereProdutoArvore(Tree * arvore);
```

Mostra os dados da árvore, sua navegação dá se pelas setas(**esquerda e direita**) do teclado, retorna ``false`` se a árvore binária não possuir dados.

```c
bool mostraTodosArvore(Tree * arvore);
```

---

Função para buscar produtos na árvore binária através do código e nome, com função para deletar da árvore o nó contendo o dado.

```c
bool buscaDeletaProdutos(Tree * arvore);
```

---
## English

Library ``gerenciaProdutos.h``, This lib links the model with the view, controlling the operations.

---

Go to the library [click here!](../controll/gerenciaProdutos.h)

---

Inserts several products into the tree, receives the address of a ``Tree *`` as a parameter.

```c
void insereProdutoArvore(Tree * arvore);
```

It shows the tree data, its navigation is done by the arrow keys (**left and right**) of the keyboard, it returns ``false`` if the binary tree has no data.

```c
bool mostraTodosArvore(Tree * arvore);
```

---

Function to search for products in the binary tree by code and name, with function to delete the node containing the data from the tree.

```c
bool buscaDeletaProdutos(Tree * arvore);
```
