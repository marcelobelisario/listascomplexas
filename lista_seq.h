#include <stdbool.h>

// TAD lista sequencial 
typedef struct lista Lista_s;

// FUNÇÕES AUXILIARES

/* Cria uma lista sequencial
Entrada: capacidade da lista
Saída: endereço de memoria para nova lista criada */
Lista_s *criar(int capacidade);

/* Informa a capacidade da lista
Entrada: lista sequencial
Saída: capacidade da lista */
int capacidade(Lista_s *x);

/* Informa o tamanho da lista
Entrada: lista sequencial
Saída: tamanho da lista */
int tamanho(Lista_s *x);

/* Verifica se a lista está vazia
Entrada: lista sequencial
Saída: true para lista vazia, false caso contrário */
bool vazia(Lista_s *x);

/* Verifica se a lista está cheia
Entrada: lista sequencial 
Saída: true para lista cheia, false caso contrário */
bool cheia(Lista_s *x);

/* Insere um elemento no começo da lista
Entrada: lista sequencial e o elemento a inserir
Saída: true para elemento inserido, false caso contrário */
bool inserir_inicio(Lista_s *x, int elemento);

/* Remove um elemento do começo da lista
Entrada: lista sequencial
Saída: true para primeiro elemento removido, false caso contrário */
bool remover_inicio(Lista_s *x);

/* Insere um valor no meio da lista
Entrada: lista sequencial, elemento a inserir e posicao onde inserir o elemento
Saída: true para elemento inserido, false caso contrário */
bool inserir_meio(Lista_s *x, int elemento, int posicao);

/* Remove um elemento do meio da lista
Entrada: lista sequencial e posicao k onde remover o elemento
Saída: true para elemento removido, false caso contrário */
bool remover_meio(Lista_s *x, int k);

/* Insere um elemento no fim da lista
Entrada: lista sequencial e elemento a ser inserido
Saída: true para elemento inserido, false caso contrário */
bool inserir_fim(Lista_s *x, int elemento);

/* Remove um elemento do fim da lista
Entrada: lista sequencial 
Saída: true para elemento removido, false caso contrário */
bool remover_fim(Lista_s *x);

/* Informa quantos elementos presentes na lista são negativos
Entrada: lista sequencial 
Saída: quantidade de elementos negativos presentes na lista */
int qnte_impares_lst(Lista_s *l);

/* Exibe a lista
Entrada: lista sequencial
Saída: não há */
void exibir(Lista_s *x);