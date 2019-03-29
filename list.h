#ifndef LIST_HEADER_FILE
#define LIST_HEADER_FILE

typedef struct node{
  int info;
  struct node *next;
}TList;

TList* init_list(void);
TList* insert_init(TList* l, int element);
TList* insert_end(TList* l, int element);
TList* remove_node(TList* l, int element);
void print_list(TList* l);
void free_list(TList* l);

#endif
