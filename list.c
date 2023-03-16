#include "list.h"

void create_list(List *list) {

	list->control = 0;
	
	return;
}

int  is_full(List *list) {

	if(size(list) == MAX_SIZE) {
	
		return 1;
	} else {
		
		return 0;
	}
}

int is_empty(List *list) {

	if(size(list) == 0) {

		return 1;
	} else {

		return 0;
	}
}

int get_element(List *list, int position) {
	
	if (position <= list->control) {

		return list->elements[position - 1];
	} else {
		return -1;
	} 
}

int modify_element(List *list, int position, int new_element) {
	
	if(position > list->control) {
	
		return 1;
	}
	
	remove_element(list, position);
	insert_element(list, position, new_element);
	
	return 0;
}

int size(List *list) {

	return list->control;
}

int insert_element(List *list, int position, int new_element) {

	if(position < 1 || is_full(list) || position > list->control + 1 ) {

		return 1;
	}

	for(int i = list->control; i >= position; i--) {
	
		list->elements[i] = list->elements[i - 1];
	}
	
	list->elements[position - 1] = new_element;
	list->control++;
	return 0;
}

int remove_element(List *list, int position) {

	if(position < 1 || position > list->control ) {
	
		return 1;
	}

	for (int i = position -1; i < list->control - 1; i++) {

		list->elements[i] = list->elements[i + 1];
	}

	list->control--;
	
	return 0;
	
}

void show_list(List *list) {

	printf("\n");
	for(int i = 0; i < list->control; i++) {
	
		printf("- %d ", get_element(list,i+1));
	}
	
	printf("-\nLista cheia: %d\nLista vazia: %d\nTamanho da lista: %d\n\n", is_full(list), is_empty(list), size(list));
}
