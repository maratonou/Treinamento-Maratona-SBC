// #pragma GCC optimize("O3")
#include "bits/stdc++.h"
#include<string>

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve() {
  int n, count = 0;
  cin >> n;
  
  string palavras[n];
  map<string, int> cnt;
  
  for (int i = 0; i < n; i++) {
    cin >> palavras[i];
    ++cnt[palavras[i]];
  }
  
  
  for (int i = 0; i < n; i++) {
    set<string> S;
    
    for(int l = 0; l < palavras[i].size(); ++l) {
      string s;
      for(int r = l; r < palavras[i].size(); ++r) {
        s += palavras[i][r];
        if(!S.count(s)) {
          S.insert(s);
          auto it = cnt.find(s);
          if(it != cnt.end()) count += it->second;
        }
      }  
    }
    
    --count;
    
  }
  cout << count;
}

/*
    for (int j = 0; j < n; j++) {
      if (palavras[i].size() < palavras[j].size() || i==j) {
        continue;
      }
      //cout << palavras[i] << "-----" << palavras[j] << "\n";
      if (palavras[i].find(palavras[j]) != string::npos) {
        count++;
      }
    }
*/
/* Chat:
  
*/

int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	solve();
 	return 0;
}