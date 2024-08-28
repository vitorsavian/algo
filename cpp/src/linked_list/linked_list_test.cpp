#include "linked_list.h"
#include <cstdlib>
#include <iostream>

int AddTest() {
  auto *list = new LinkedList();
  const std::string key(1, '1');
  list->Add(key, 24);

  LinkedList::List *tmp(list->Get(key));

  if (tmp->value == 24) {
    list->FreeList();
    return EXIT_SUCCESS;
  }

  list->FreeList();
  delete list;
  return EXIT_FAILURE;
};

int UpdateTest() {
  const std::string key(1, '1');
  auto *list = new LinkedList();
  list->Add(key, 24);
  list->Update(key, 28);

  LinkedList::List *tmp(list->Get(key));

  if (tmp->value != 24) {
    list->FreeList();
    return EXIT_SUCCESS;
  }

  list->FreeList();
  delete list;
  return EXIT_FAILURE;
}

int TestLinkedList() {
  std::cout << "Test linked-list" << std::endl;
  int err(AddTest());
  if (err != EXIT_SUCCESS) {
    return EXIT_FAILURE;
  }

  err = UpdateTest();
  if (err != EXIT_SUCCESS) {
    return EXIT_FAILURE;
  }

  return 0;
}
