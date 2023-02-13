#include "hash.h"
#include <iostream>

using namespace std;

void caso1() {
  // lista hash que comporta x elementos
  Hash personalidadesHash(7);
  //lista do numero de identificação da personalidade
  int nums[8] = {0012, 0014, 0027};
  // lista em array das personalidades
  string mbtis[8] = {"INTP", "ENFP", "ISFP"};

  // Inteira a personalidade ao seu número e insere na tabela hash
  for (int i = 0; i < 3; i++) {
    Personalidade personalidade = Personalidade(nums[i], mbtis[i]);
    personalidadesHash.insertItem(personalidade);
  }
  personalidadesHash.print();
  cout << "Primeiro Caso, Fim" << endl;
  return;
}

void caso2() {
  Hash personalidadesHash(12);
  int nums[8] = {0011, 0023, 0012, 0046, 0024, 0015, 0057, 0065};
  string mbtis[8] = {"ISTJ", "ISFJ", "ESTJ", "ESFJ",
                     "ISTP", "ISFP", "ESTP", "ESFP"};

  for (int i = 0; i < 8; i++) {
    Personalidade personalidade = Personalidade(nums[i], mbtis[i]);
    personalidadesHash.insertItem(personalidade);
  }
  personalidadesHash.print();
  cout << "------------------------------" << endl;

  // Busca a personalidade na lista, a exclui caso exista e reemprime a lista
  Personalidade personalidade(0046, "");
  bool found = false;
  personalidadesHash.retrieveItem(personalidade, found);
  cout << personalidade.getMbti() << " -> " << found << endl;

  cout << "------------------------------" << endl;

  personalidadesHash.deleteItem(personalidade);
  personalidadesHash.print();
  cout << "Segundo Caso, Fim" << endl;
  return;
}

void caso3() {
  Hash personalidadesHash(8);
  int nums[4] = {0001, 0002, 0003, 0005};
  string mbtis[4] = {"INTJ", "INTP", "ENTJ", "ENTP"};

  for (int i = 0; i < 4; i++) {
    Personalidade personalidade = Personalidade(nums[i], mbtis[i]);
    personalidadesHash.insertItem(personalidade);
  }
  personalidadesHash.print();
  cout << "------------------------------" << endl;

  Personalidade personalidade(0011, "ENFP");
  bool found = false;
  personalidadesHash.retrieveItem(personalidade, found);
  cout << personalidade.getMbti() << " -> " << found << endl;

  cout << "------------------------------" << endl;

  /* Busca a personalidade na lista, a inseri caso não exista e reemprime a
   lista  */
  personalidadesHash.insertItem(personalidade);
  personalidadesHash.print();
  cout << "Terceiro Caso, Fim" << endl;
  return;
}

void caso4() {
  Hash personalidadesHash(10);
  int nums[4] = {0011, 0022, 0033, 0044};
  string mbtis[4] = {"INFJ", "INFP", "ENFJ", "ENFP"};

  for (int i = 0; i < 4; i++) {
    Personalidade personalidade = Personalidade(nums[i], mbtis[i]);
    personalidadesHash.insertItem(personalidade);
  }
  personalidadesHash.print();
  cout << "------------------------------" << endl;

  Personalidade personalidade(0044, "ENFP");
  bool found = false;
  personalidadesHash.retrieveItem(personalidade, found);
  cout << personalidade.getMbti() << " -> " << found << endl;

  cout << "------------------------------" << endl;

  personalidadesHash.deleteItem(personalidade);
  personalidadesHash.print();
  cout << "Quarto Caso, Fim" << endl;
  return;
}

void caso5() {
  Hash personalidadesHash(11);
  int nums[5] = {00241, 042442, 0133243, 23444, 0033};
  string mbtis[5] = {"ISFJ", "ENTJ", "ESFJ", "INTJ", "ISFP"};

  for (int i = 0; i < 5; i++) {
    Personalidade personalidade = Personalidade(nums[i], mbtis[i]);
    personalidadesHash.insertItem(personalidade);
  }
  personalidadesHash.print();
  cout << "------------------------------" << endl;

  Personalidade personalidade(0133243, "ESFJ");
  bool found = false;
  personalidadesHash.retrieveItem(personalidade, found);
  cout << personalidade.getMbti() << " -> " << found << endl;

  cout << "------------------------------" << endl;

  personalidadesHash.deleteItem(personalidade);
  personalidadesHash.print();
  cout << "Quinto Caso, Fim" << endl;
  return;
}

int main() {
  /* tabela hash simples */
  // caso1();

  /* tabela hash com função delete e 8 elementos  */
  // caso2();

  /* tabela hash com função insert e 4 elementos  */
  // caso3();

  /* tabela hash com função delete e 4 elementos  */
  // caso4();

  /* tabela hash com função delete e 5 elementos  */
  // caso5();
  return 0;
}
