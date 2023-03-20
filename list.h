#ifndef LIST_H
#define LIST_H
#define MAX_SIZE 10

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	
	int elements[MAX_SIZE];	
	int control; //controle do tamanho da lista
} List;

void create_list(List *list); //OK --
int is_empty(List *list); //OK --
int is_full(List *list); //OK --
int size(List *list); //OK --
int get_element(List *list, int position); //OK --
int modify_element(List *list, int position, int new_element); //OK --
int insert_element(List *list, int position, int new_element); //OK --
int remove_element(List *list, int position); //OK --
void show_list(List *list); //OK --

#endif
