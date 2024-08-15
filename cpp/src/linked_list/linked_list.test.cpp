#include "linked_list.h"
#include <cstdlib>
#include <iostream>

int AddTest() {
  LinkedList *list = new LinkedList();

  list->Add("1", 24);

  LinkedList::List *tmp{list->Get("1")};

  if (tmp->value == 24) {
    list->FreeList();
    return EXIT_SUCCESS;
  }

  list->FreeList();
  delete list;
  return EXIT_FAILURE;
};

int UpdateTest() {
  std::cout << "aqui?" << std::endl;
  LinkedList *list = new LinkedList();
  std::cout << "aqui?" << std::endl;
  list->Add("1", 24);
  std::cout << "aqui?" << std::endl;
  list->Update("1", 28);

  LinkedList::List *tmp{list->Get("1")};

  if (tmp->value != 24) {
    list->FreeList();
    return EXIT_SUCCESS;
  }

  list->FreeList();
  delete list;
  return EXIT_FAILURE;
}

int main(int argc, char *argv[]) {
  int err{AddTest()};
  if (err != EXIT_SUCCESS) {
    return EXIT_FAILURE;
  }

  err = UpdateTest();
  if (err != EXIT_SUCCESS) {
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
