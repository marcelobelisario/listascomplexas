#include <stdio.h>
#include <stdlib.h>
#include "lista_seq.h"
#include <time.h>

int main(){
    // Define uma seed aleatória através da hora do Windows
    srand(time(NULL));
    
    // Cria uma lista sequencial
    Lista_s *lista_nova = criar(30);
    
    // Insere um valor aleatório na primeira posição da lista
    inserir_inicio(lista_nova, rand()% 21 -10);

    // Estrutura de repetição para inserir valores aleatórios no final da lista
    for(int i=0; i<25; i++){
        inserir_fim(lista_nova, rand()% 21 -10);
    }

    // Exibe a lista
    exibir(lista_nova);

    // Informa a quantidade de números ímpares presentes na lista
    printf("\n quantidade de numeros impares: %d", qnte_impares_lst(lista_nova));

    return 0;
}