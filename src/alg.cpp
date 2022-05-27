// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
  std::ifstream file(filename);
  BST<std::string> statistic_tree;
  char sym;
  while (!file.eof()) {
    sym = file.get();
    sym = tolower(sym);
    if (sym >= 'a' && sym <= 'z') statistic_tree.add(sym);
  }
}
