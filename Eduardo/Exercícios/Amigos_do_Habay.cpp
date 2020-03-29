//2136 - Amigos do Habay
//https://www.urionlinejudge.com.br/judge/pt/problems/view/2136
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string nome, amigo = "";
  vector<string> canditatos;
  vector<string> naoAmigos;
  vector<string> amigos;
  
  while(1){
    cin >> nome;
    
    if(!nome.compare("FIM"))
      break;
    
    string answer;
  
    cin >> answer;
      
    if(find(canditatos.begin(),canditatos.end(),nome) == canditatos.end()){
      canditatos.push_back(nome);
            
      if(!answer.compare("YES")){
        amigos.push_back(nome);
        
        if(nome.size() > amigo.size())
          amigo =  nome;
      }
      
      else
        naoAmigos.push_back(nome);
    }
  }
  
  sort(naoAmigos.begin(),naoAmigos.end());
  sort(amigos.begin(),amigos.end());
  
  for(int i = 0 ; i < amigos.size() ; i++)
    cout << amigos[i] << endl;
    
  for(int i = 0 ; i < naoAmigos.size() ; i++)
    cout << naoAmigos[i] << endl;
  
  cout << endl << "Amigo do Habay:" << endl << amigo << endl;
  
  return 0;
}

