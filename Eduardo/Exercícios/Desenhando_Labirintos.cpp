//1076 - Desenhando Labirintos
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1076

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int DFS(int start, vector<int>* edges, int* seen){
  int quant = 0;
  seen[start] = 1;
  
  for(int vertex : edges[start]){
    if(seen[vertex] == 0){
      quant += 2;
      quant += DFS(vertex,edges,seen);
    }      
  }  
  return quant;
}

int main() {
	int C, N, M;
  int start;
  
  cin >> C;
  
  while(C > 0){
    cin >> start >> N >> M;
    
    vector<int> edges[N];
    int seen[N];
    
    for(int i = 0 ; i < N ; i++)
      seen[i] = 0;
    
    for(int i = 0 ; i < M ; i++){
      int a, b;
      
      cin >> a >> b;
      
      edges[a].push_back(b);
      edges[b].push_back(a);
    }
    
    cout << DFS(start,edges,seen) << endl;
    
    C--;
  }
  
	return 0;
}

