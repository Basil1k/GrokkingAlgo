#include "linked_list.h"

/**
 * Function initialize node struct.
 * @param node Pointerv on node struct.
 * @author Basil1k
 */
void init_node(node* node) {
  node->value = 0;
  node->next = NULL;
}
