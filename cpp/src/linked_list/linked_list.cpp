#include "linked_list.h"
#include <string>
#define LOG(x) std::cout << x << std::endl;

LinkedList::LinkedList() {
  list = nullptr;
  size = 0;
};

// TODO: Change everything of malloc to new and free to delete
int LinkedList::Add(std::string key, int value) {
  // create a Linked list with malloc and set the stuff inside
  List *newItem = (List *)malloc(sizeof(List));
  newItem->key = key;
  newItem->value = value;
  newItem->next = NULL;
  newItem->prev = NULL;
  if (list == NULL) {
    list = newItem;
    size++;
    return 0;
  }

  for (List *i = list; i; i = i->next) {
    if (i->next == NULL) {
      i->next = newItem;
      newItem->prev = i;
      break;
    }
  }

  size++;
  return 0;
};

LinkedList::List *LinkedList::Get(std::string key) {
  if (list == NULL) {
    return NULL;
  }

  for (List *tmp = list; tmp; tmp = tmp->next) {
    if (tmp->key == key) {
      return tmp;
    }
  }
  return 0;
};

int LinkedList::Update(std::string key, int value) {
  if (list == NULL) {
    return 1;
  }

  List *item = Get(key);
  item->value = value;
  return 0;
};

int LinkedList::Delete(std::string key) { return 0; };

int LinkedList::FreeList() {
  if (list == NULL) {
    return 0;
  }

  for (List *tmp = list; tmp; tmp = tmp->next) {
    free(tmp);
  }

  list = NULL;
  size = 0;

  return 0;
}
