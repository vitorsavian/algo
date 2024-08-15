#include "linked_list.h"
#include <string>
#define LOG(x) std::cout << x << std::endl;

LinkedList::LinkedList() { size = 0; };

int LinkedList::Add(std::string key, int value) {
  // create a Linked list with malloc and set the stuff inside
  List *newItem = (List *)malloc(sizeof(List));
  newItem->key = key;
  newItem->value = value;

  if (list == NULL) {
    list = newItem;
    size++;
    return 0;
  }

  for (List *i = list; i->next != NULL; i = i->next) {
    i->next = newItem;
    newItem->prev = i;
  }

  size++;
  return 0;
};

LinkedList::List *LinkedList::Get(std::string key) {
  if (list == NULL) {
    return NULL;
  }

  for (List *tmp = list; tmp->next != NULL; tmp = tmp->next) {
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

  for (List *tmp = list; tmp->next != NULL; tmp = tmp->next) {
    free(list);
  }
  return 0;
}
