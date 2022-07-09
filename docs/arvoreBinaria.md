## Português

Biblioteca ``ArvoreBinaria.h``, é uma árvore binária para tipos genéricos, com função de busca campos genéricos e utiliza-se de busca gulosa.

---

Ir para a biblioteca [clique aqui!](../model/arvoreBinaria.h)

---

**Tipos:**

>Tipo ``Node`` é o Nó da árvore binária.

>>  ```c
>>  typedef struct NODE{ ...}Node;
>>  ```

>  Tipo ``Tree`` é a Árvore binária contendo a raiz(``... * root``), o nó atual(``... * atual``), e a quantidade de itens(``length``).
 
>>  ```c
>>  typedef struct TREEB{...}Tree;
>>  ```

---

Função ``_criarTree()`` alocar espaço na memória para o tipo ``Tree`` e retorna seu endereço.
```c
Tree * _criarTree();
```
---

Função ``append(...)``, adicionar um item a árvore binária, sua posição é determinada pela chave se já houver um item com a mesma chave retorna ``false`` como erro ao inserir e ``true quando obtiver sucesso na inserção. 
```c
bool append(Tree * arvore, address endDado, string chave);
```
---

Função remover um nó da árvore a partir da chave(``string``), retorna verdadeiro, se o nó for removido.
```c
bool removeDado(Tree * arvore, string chave);
```
---
Função remover um nó da árvore a partir da chave(``string``) e retornar o dado, se o nó for removido ou ``NULL`` se não remover.
```c
address pop(Tree * arvore, string chave);
```
---
Função ``setAtualEsquerda(...)`` está função adiciona o nó a esquerda do atual na posição do atual em ``Tree.atual``, retorna ``false`` se o nó à esquerda for igual a ``NULL``.
```c
bool setAtualEsquerda(Tree * arvore);
```
---

Função ``setAtualDireita(...)`` está função adiciona o nó  a direita do atual na posição do atual em ``Tree.atual``, retorna ``false`` se o nó à direita for igual a ``NULL``.
  
```c
bool setAtualDireita(Tree * arvore);
```

---

Função ``resetarAtual(...)``, define o ``Tree.atual`` igual ao ``Tree.root``, retorna false se a raiz for igual a NULL.

```c
bool resetarAtual(Tree * arvore);
```

---

Retorna verdadeiro(``true``) se o nó à esquerda for diferente de nulo(``NULL``).
```c
bool filhosAtualEsquerdaVazios(Tree * arvore);
```

---

Retorna verdadeiro(``true``) se o nó à direita for diferente de nulo(``NULL``).

```c
bool filhosAtualDireitaVazios(Tree * arvore);
```

---

Função ``getDadosAtual(...)``, retorna um endereço(``address``) para o dado do nó atual.
```c
address getDadosAtual(Tree * arvore);
```

---

Função de busca a partir da ``string chave``, retorna um endereço(``address``) para o dado.
```c
address buscaDadoChave(Tree * arvore, string chave);
```

---

Função ``buscaDadoArvore(...)`` buscar qualquer elemento da árvore, recebe o endereço de uma função que retorna um ``string`` com o campo que está sendo pesquisado.
**Exemplo de implementação da função ``getElemento``:**
>>  ```c
>>  // Função com acesso direto aos elementos da struct:
>>  string getElemento(address dado){
>>    return (Produto *) dado->nome;
>>  }
>>  // Maneira com a utilização de gets na struct:
>>  string getElemento(address dado){
>>    return getNome((Produto *) dado);
>>  }
>>  ```
```c
address buscaDadoArvore(Tree * arvore, string termoPesquisa, string (* getElemento)(address dado));
```

---

Função ``destroiArvore(...)`` está função desloca todos os nós e dados, também desloca a árvore binária. 
```c
void destroiArvore(Tree * arvore);
```

---

## English

Library ``ArvoreBinaria.h``, is a binary tree for generic types, with a search function for generic fields and uses a greedy search.

---

Go to the library [click here!](../model/arvoreBinaria.h)

---

**Types:**

>Type ``Node`` is the Node of the binary tree.

>>  ```c
>>  typedef struct NODE{ ...}Node;
>>  ```

>  Type ``Tree`` is the binary tree containing the root(``... * root``), the current node(``... * atual``), and the number of items(``length` `).
 
>>  ```c
>>  typedef struct TREEB{...}Tree;
>>  ```

---

``_criarTree()`` function allocates memory space for type ``Tree`` and returns its address.
```c
Tree * _criarTree();
```
---

Function ``append(...)``, add an item to binary tree, its position is determined by the key if there is already an item with the same key returns ``false`` as error when inserting and ``true`` when getting successful insertion.
```c
bool append(Tree * arvore, address endDado, string chave);
```
---

Function remove a tree node from the key(``string``), returns true, if the node is removed.
```c
bool removeDado(Tree * arvore, string chave);
```
---
Função remover um nó da árvore a partir da chave(``string``) e retornar o dado, se o nó for removido ou ``NULL`` se não remover.
```c
address pop(Tree * arvore, string chave);
```
---

Function ``setAtualEsquerda(...)`` this function adds the node to the left of the current one at the position of the current one in ``Tree.atual``, returns ``false`` if the node to the left is equal to ``NULL ``.
```c
bool setAtualEsquerda(Tree * arvore);
```
---

Function ``setAtualDireita(...)`` this function adds the node to the right of the current at the position of the current in ``Tree.atual``, returns ``false`` if the node to the right is equal to ``NULL ``
  
```c
bool setAtualDireita(Tree * arvore);
```

---

Function ``resetCurrent(...)``, sets ``Tree.current`` equal to ``Tree.root``, returns false if root is equal to NULL.

```c
bool resetarAtual(Tree * arvore);
```

---

Returns true(``true``) if the left node is not null(``NULL``).
```c
bool filhosAtualEsquerdaVazios(Tree * arvore);
```

---

Returns true(``true``) if the node on the right is not null(``NULL``).

```c
bool filhosAtualDireitaVazios(Tree * arvore);
```

---

Function ``getDadosAtual(...)``, returns an address(``address``) for the current node data.
```c
address getDadosAtual(Tree * arvore);
```

---

Search function from ``key string``, returns an address(``address``) for the data.
```c
address buscaDadoChave(Tree * arvore, string chave);
```

---

Function ``searchDadoArvore(...)`` search any element of the tree, receives the address of a function that returns a ``string`` with the field being searched.
**Implementation example of the ``getElement`` function:**
>> ```c
>> // Function with direct access to struct elements:
>> string getElement(address given){
>>   return (Product *) given->name;
>> }
>> // Way with the use of gets in the struct:
>> string getElement(address given){
>>   return getName((Product *) given);
>> }
>> ```
```c
address buscaDadoArvore(Tree * arvore, string termoPesquisa, string (* getElemento)(address dado));
```

---

The ``destroiArvore(...)`` function is working all nodes and data, it is also shifting the binary tree. 
```c
void destroiArvore(Tree * arvore);
```

---
