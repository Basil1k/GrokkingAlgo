#ifndef LINKED_LIST
#define LINKED_LIST

#include <stdlib.h>

typedef struct {
  int value;
  node* next;
} node;

void init_node(node* list);
int get_length(node* list);
int add_last_value(node* list, int value);
int add_indx_value(node* list, int value, int index);
int remove_last_value(node* list, int value);
int remove_indx_value(node* list, int value, int index);
int free_list(node* list);

#endif