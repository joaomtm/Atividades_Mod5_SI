#include "personalidade.h"

Personalidade::Personalidade() {
  this->num = -1;  // define posição do vetor como vazio
  this->mbti = ""; // nome inválido
};
Personalidade::Personalidade(int num, std::string mbti) {
  // instanciamento dos objetos
  this->num = num;
  this->mbti = mbti;
}

// obtém tipo de personalidade
string Personalidade::getMbti() const { return mbti; }

// obtém numero da personalidade
int Personalidade::getNum() const { return num; }