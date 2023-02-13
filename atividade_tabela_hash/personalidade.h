#include <iostream>
using namespace std;

/* Classe contendo as variáveis e funções para a aplicação*/
class Personalidade {
private:
  int num;          // numero de identifição da personalidade
  std::string mbti; // sigla da personalidade respectiva

public:
  Personalidade(); // construtor para alocação dinâmica de memória
  /* construtor que configura o número e sigla da personalidae*/
  Personalidade(int num, std::string mbti);
  string getMbti() const; // método para obter sigla da personalidade
  int getNum() const;     // método para obter número da personalidade
};