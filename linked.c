#include "linked.h"

void create_linked(Node** linked) {
    
    *linked = NULL;
}


int empty_linked(Node* linked) {
    return linked == NULL;
}

int size_linked(Node* linked) {
    int size = 0;
    while (linked != NULL) {
        linked = linked->next;
        size++;
    }
    return size;
}

void modify_element(Node* linked, int index, int new_element) {
    int i = 0;
    while (i < index - 1 && linked != NULL) {
        linked = linked->next;
        i++;
    }
    if (linked != NULL) {
        linked->element = new_element;
    }
}

void insert_element(Node** linked, int index, int new_element) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->element = new_element;
    new_node->next = NULL;

    //insere no começo
    if (index == 1) {
        new_node->next = *linked;
        *linked = new_node;
    }
    else {
        int i = 0;
        Node* current_node = *linked;
        while (i < index - 2 && current_node != NULL) {
            current_node = current_node->next;
            i++;
        }
        
        if (current_node != NULL) {
            new_node->next = current_node->next;
            current_node->next = new_node;
        }
    }
}

int delete_element(Node** linked, int index) {
    if (*linked == NULL) {
        return 0;
    }

    Node* temp;
    
    //deleta no começo
    if (index == 1) {
        temp = *linked;
        *linked = (*linked)->next;
        free(temp);
        return 1;
    }
    else {
        int i = 0;
        Node* current_node = *linked;
        while (i < index - 2 && current_node->next != NULL) {
            current_node = current_node->next;
            i++;
        }
        if (current_node->next != NULL) {
            temp = current_node->next;
            current_node->next = temp->next;
            free(temp);
            return 1;
        }
    }
    return 0;
}

void show_linked(Node* linked) {
    while (linked != NULL) {
        printf("- %d ", linked->element);
        linked = linked->next;
    }
    printf("-\n");
}
