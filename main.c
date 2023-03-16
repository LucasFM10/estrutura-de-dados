#include "list.h"

int main(void) {

	List list_ex;
	
	create_list(&list_ex);
	
	show_list(&list_ex);	
		
	insert_element(&list_ex, 1, 3);
	insert_element(&list_ex, 2, 2);
	insert_element(&list_ex, 3, 6);
	
	show_list(&list_ex);
	
	insert_element(&list_ex, 3, 5);
	insert_element(&list_ex, 2, 3);
	insert_element(&list_ex, 1, 2);
	insert_element(&list_ex, 3, 6);
	insert_element(&list_ex, 2, 5);
	insert_element(&list_ex, 1, 3);
	insert_element(&list_ex, 4, 5);
	
	modify_element(&list_ex, 1, 22);
	modify_element(&list_ex, 5, 21);
	modify_element(&list_ex, 10, 20);
	
	show_list(&list_ex);
	
	remove_element(&list_ex, 5);
	remove_element(&list_ex, 6);
	remove_element(&list_ex, 1);
	
	show_list(&list_ex);
	
	remove_element(&list_ex, 2);
	remove_element(&list_ex, 3);
	remove_element(&list_ex, 1);
	remove_element(&list_ex, 1);
	remove_element(&list_ex, 1);
	remove_element(&list_ex, 1);
	remove_element(&list_ex, 1);
	
	show_list(&list_ex);
	
	return 0;
}
