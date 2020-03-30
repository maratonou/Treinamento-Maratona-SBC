//1025 - Onde está o Mármore
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1025

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, Q;
  int caso = 1;
  
  while(1){    
    cin >> N >> Q;
    
    if(N == 0 && Q == 0)
      break;
      
    vector<int> marbles;
    
    for(int i = 0; i < N ; i++){
      int marble;
      
      cin >> marble;
      
      marbles.push_back(marble);
    }
    
    sort(marbles.begin(),marbles.end());
    
    cout << "CASE# " << caso << ":" << endl;
    
    for(int i = 0; i < Q ; i++){
      int number, j;
      cin >> number;
      for(j = 0 ; j < N ; j++)
        if(marbles[j] == number){
          cout << number << " found at " << j+1 << endl;
          break;
        }
          
      if(j == N)
        cout << number << " not found" << endl;
    }
    
    caso++;
  }
	return 0;
}