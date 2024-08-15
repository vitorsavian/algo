#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>

// TODO: Setar certinho para ter o destructor e o constructor das coisa ai
class LinkedList {
public:
  struct List {
    std::string key;
    int value;
    List *next;
    List *prev;
  };
  LinkedList();
  int Add(std::string key, int value);
  int Update(std::string key, int value);
  int Delete(std::string key);
  List *Get(std::string key);
  int FreeList();

private:
  List *list;
  int size;
};

#endif
