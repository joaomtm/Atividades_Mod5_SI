#include "hash.h"
#include <iostream>
using namespace std;

Hash::Hash(int max) {
  length = 0;
  max_items = max;
  structure = new Personalidade[max_items];
}

Hash::~Hash() { delete[] structure; }

bool Hash::isFull() const { return (length == max_items); }

int Hash::getLength() const { return length; }

void Hash::retrieveItem(
    Personalidade &personalidade,
    bool &found) /* Busca na estrutura de dados interna um elemento e coloca o
                    valor na variável personalidade  */
{
  int location = getHash(personalidade);
  Personalidade aux = structure[location];
  if (personalidade.getNum() != aux.getNum()) {
    found = false;
  } else {
    found = true;
    personalidade = aux;
  }
}
//função para receber um personalidade por parâmetro
void Hash::insertItem(Personalidade personalidade) {
  int location = getHash(personalidade);
  structure[location] = personalidade;
  length++;
}
//função para esvaziar uma personalidade por parâmetro
void Hash::deleteItem(Personalidade personalidade) {
  int location = getHash(personalidade);
  structure[location] = Personalidade();
  length--;
}

void Hash::print() {
  for (int i = 0; i < max_items; i++) {
    cout << i << ":" << structure[i].getNum() << ", " << structure[i].getMbti()
         << endl;
  }
}

int Hash::getHash(Personalidade personalidade) {
  return personalidade.getNum() %
         max_items; 
  // coleta numero da personalidade e gera um numero entre 0 e 99
}