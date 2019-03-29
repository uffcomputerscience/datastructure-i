#include "list.h"
#include <stdio.h>
#include <stdlib.h>

// TList* insert_init(TList* l, int element);
// TList* insert_end(TList* l, int element);
// TList* remove_node(TList* l, int element);
// void print(TList* l);
// void free_list(TList);

TList* init_list(void){
  return NULL;
}

/**
* Aux function to create a loose node to fit at the beggining or end of a list
*/
TList* create_node(int element){
  TList* new_node = (TList*) malloc(sizeof(TList));
  new_node->info = element;
  new_node->next = init_list();
  return new_node;
}

TList* insert_init(TList* l, int element){
  TList * new_node = create_node(element);
  new_node->next = l;
  return new_node;
}

TList* insert_end(TList* l, int element){
  if(!l) return insert_init(l, element);
  l->next = insert_end(l->next, element);
  return l;
}

void print_list(TList* l){
  if(l){
    printf("%d->", l->info);
    print_list(l->next);
  }else{
    printf("NULL\n");
  }
}

void free_list(TList* l){
  if(l){
    free_list(l->next);
    free(l);
  }
}
