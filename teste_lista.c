#include <stdio.h>
#include <stdlib.h>
#include "lista_seq.h"
#include <time.h>

int main(){
    srand(time(NULL));
    Lista_s *lista_nova = criar(30);
    inserir_inicio(lista_nova, rand()% 21 -10);
    for(int i=0; i<25; i++){
        inserir_fim(lista_nova, rand()% 21 -10);
    }
    exibir(lista_nova);

    printf("\n quantidade de numeros impares: %d", qnte_impares_lst(lista_nova));

    return 0;
}