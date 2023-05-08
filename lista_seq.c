#include <stdlib.h>
#include <stdio.h>
#include "lista_seq.h"
#include <stdbool.h>

struct lista{
    int *dados;
    int capacidade, quantidade;
};

Lista_s *criar(int capacidade){
    Lista_s *nova_lista = (Lista_s*) malloc(sizeof(Lista_s));
    if(nova_lista != NULL){
        nova_lista->quantidade = 0;
        nova_lista->capacidade = capacidade;
        nova_lista->dados = (int*) malloc(sizeof(int)*capacidade);
        if(nova_lista->dados == NULL)
            printf("Falha ao criar lista!\n");

        printf("Lista criada com sucesso!\n");
    }
    if(nova_lista == NULL)
        printf("Falha ao criar lista!\n");

    return nova_lista;
}

int capacidade(Lista_s *x){
    return x->capacidade;
}

int tamanho(Lista_s *x){
    return x->quantidade;
}

bool vazia(Lista_s *x){
    if(x->quantidade == 0){
        return true;
    }
    else{
        return false;
    }
}

bool cheia(Lista_s *x){
    if(x->quantidade == x->capacidade){
        return true;
    }
    else{
        return false;
    }
}

bool inserir_inicio(Lista_s *x, int elemento){
    if(cheia(x) == true){
        return false;
    }
    for(int i=x->quantidade; i>0; i--){
        x->dados[i] = x->dados[i-1];
    }
    x->dados[0] = elemento;
    x->quantidade = x->quantidade + 1;
    
    return true;
}

bool remover_inicio(Lista_s *x){
    if(vazia(x) == true){
        return false;
    }
    for(int i=1; i<=tamanho(x)-1; i++){       
        x->dados[i-1] = x->dados[i];
    }
    x->quantidade = x->quantidade - 1;
    
    return true;
}

bool inserir_meio(Lista_s *x, int elemento, int posicao){
    if(cheia(x) == true){
        return false;
    }
    if(posicao > x->capacidade){
        printf("\n Posicao excede a capacidade da lista!");
    }
    if(posicao < 0){
        printf("\n Posicao negativa!");
    }

    if(posicao > x->quantidade){
        inserir_fim(x, elemento);
        return true;
    }

    for(int i = x->quantidade; i>posicao; i--){
        x->dados[i] = x->dados[i-1];
    }
    x->dados[posicao] = elemento;
    x->quantidade = x->quantidade + 1;
    
    return true;
}

bool remover_meio(Lista_s *x, int k){
    if(vazia(x) == true){
        return false;
    }
    for(int i = k-1; i<=tamanho(x); i++){
        x->dados[i] = x->dados[i+1];
    }
    x->quantidade = x->quantidade-1;
    
    return true;
}

bool inserir_fim(Lista_s *x, int elemento){
    if(vazia(x) == true){
        return false;
    }
    x->dados[x->quantidade] = elemento;
    x->quantidade = x->quantidade + 1;
    
    return true;
}

bool remover_fim(Lista_s *x){
    if(vazia(x) == true){
        return false;
    }
    x->quantidade = x->quantidade - 1;
    
    return true;
}

void exibir(Lista_s *x){
    if(vazia(x) == true){
        printf("\n Lista vazia!");
    }
    for(int i=0; i < x->quantidade; i++){
        printf("| %d", x->dados[i]);
    }
    printf("| \n");
}

int qnte_impares_lst(Lista_s *l){
    if(vazia(l) == true){
        return 0;
    }
    int qtd = 0;
    for(int i=0; i < l->quantidade; i++){
        if(l->dados[i]%2 != 0){
            qtd = qtd+1;
        }
    }
    
    return qtd;
}