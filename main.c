#include "linked.h"

int main() {
    Node* linked;
    //criação da lista
    create_linked(&linked);
    //mostrando a lista (lista vazia)
    show_linked(linked);
    
    //inserindo elemento 7 na posição 1
    insert_element(&linked, 1, 7);
    
    show_linked(linked);
    
    insert_element(&linked, 1, 3);
    
    show_linked(linked);

    insert_element(&linked, 2, 8);
    
    show_linked(linked);
    
    insert_element(&linked, 3, 9);
    
    show_linked(linked);

    //modificando elemento
    modify_element(linked, 2, 4);
    show_linked(linked);


    //mostrando tamanho
    int size = size_linked(linked);
    printf("O tamanho da lista é: %d.\n", size);

    //deletando elemento da posição 2
    delete_element(&linked, 2);
    printf("Elemento da posição 2 deletado.\n");
    show_linked(linked);

    delete_element(&linked, 0);
    printf("Elemento da posição 1 deletado.\n");
    show_linked(linked);
    
    //verificando se vazia
    int empty = empty_linked(linked);
    if (empty) {
        printf("A lista está vazia!\n");
    }
    else {
        printf("A lista não está vazia!\n");
    }
    
    delete_element(&linked, 2);
    printf("Elemento da posição 2 deletado.\n");
    show_linked(linked);
    
    delete_element(&linked, 1);
    printf("Elemento da posição 1 deletado.\n");
    show_linked(linked);
    
    empty = empty_linked(linked);
    if (empty) {
        printf("A lista está vazia!\n");
    }
    else {
        printf("A lista não está vazia!\n");
    }
    
    return 0;
}
