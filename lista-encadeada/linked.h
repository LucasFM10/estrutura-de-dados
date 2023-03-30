#ifndef LINKED_H
#define LINKED_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

	int element;
	struct Node* next;

} Node;

void create_linked(Node** linked);
int empty_linked(Node *linked);
int size_linked(Node *linked);
void modify_element(Node *linked, int index, int new_element);
void insert_element(Node** linked, int index, int new_element);
int delete_element(Node** linked, int index);
void show_linked(Node *linked);

#endif
