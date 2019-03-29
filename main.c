#include "list.h"

int main(void) {
  TList* l = init_list();
  l = insert_init(l, 5);
  l = insert_init(l, 9);
  l = insert_init(l, 2);
  l = insert_init(l, 4);
  l = insert_end(l, 8);
  l = insert_end(l, 12);
  print_list(l);
  free_list(l);
  return 0;
}
