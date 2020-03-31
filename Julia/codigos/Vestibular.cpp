#include <iostream>

int main() {
  
  int N,i,pontos = 0;
  std::string gabarito, resposta;

  std::cin >>N;
  std::cin >> gabarito >> resposta;

  for(i = 0; i < gabarito.size();i++){
    if(gabarito[i] == resposta[i])
      pontos++;
  } 

  std::cout << pontos << "\n";


  return 0;
}