#include "linked_list.h"
#include <cstdlib>

int FirstTest() {
  LinkedList list;

  list.Add("1", 24);

  LinkedList::List *tmp{list.Get("1")};

  if (tmp->value == 24) {
    list.FreeList();
    return EXIT_SUCCESS;
  }

  return EXIT_FAILURE;
};

int main(int argc, char *argv[]) {
  int err{FirstTest()};
  if (err != EXIT_SUCCESS) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
