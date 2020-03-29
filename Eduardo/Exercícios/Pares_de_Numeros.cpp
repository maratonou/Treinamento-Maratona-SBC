//3059 - Pares de Números
//https://www.urionlinejudge.com.br/judge/pt/problems/view/3059

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, I, F;
  
  cin >> N >> I >> F;
  
  vector<int> v;
  
  for(int i = 0 ; i < N ; i++){
    int aux;
    
    cin >> aux;
    
    v.push_back(aux);
  }
  
  sort(v.begin(),v.end());
  
  int quant = 0;
  
  for(int i = 0 ; i < N ; i++)
  {
    for(int j = i+1 ; j < N; j++ )
    {
      if(v[i] + v[j] >= I && v[i] + v[j] <= F)
        quant++;
        
      else if(v[i] + v[j] > F)
        break;
    }
  }
  
  cout << quant << endl;
  
	return 0;
}
