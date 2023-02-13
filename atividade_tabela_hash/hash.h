#include "personalidade.h"

class Hash {
public:
  Hash(int max_items = 100); // define numero maximo de elementos
  ~Hash();
  bool isFull() const;   // verifica se a lista está totalmente preenchida
  int getLength() const; // verifica quantos elementos estão na estrutura

  void retrieveItem(Personalidade &personalidade, bool &found);
  void insertItem(Personalidade personalidade);
  void deleteItem(Personalidade personalidade);
  void print();

private:
  int getHash(Personalidade personalidade);
  int max_items;            // numero maximo de itens
  int length;               // numero de itens na lista
  Personalidade *structure; // vetor de objetos personalidades
};
