#include <stdbool.h>

// TAD lista sequencial 

typedef struct lista Lista_s;

// FUNÇÕES AUXILIARES
Lista_s *criar(int capacidade);

int capacidade(Lista_s *x);

int tamanho(Lista_s *x);

bool vazia(Lista_s *x);

bool cheia(Lista_s *x);

bool inserir_inicio(Lista_s *x, int elemento);

bool remover_inicio(Lista_s *x);

bool inserir_meio(Lista_s *x, int elemento, int posicao);

bool remover_meio(Lista_s *x, int k);

bool inserir_fim(Lista_s *x, int elemento);

bool remover_fim(Lista_s *x);

int qnte_impares_lst(Lista_s *l);

void exibir(Lista_s *x);