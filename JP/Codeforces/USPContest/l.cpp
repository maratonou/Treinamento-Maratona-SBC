#pragma GCC optimize("O3")
#include "bits/stdc++.h"
#include<string>

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  vector<int> odd;
  int soma = 0;
  for (int i = 0; i < n; i++)
  {
    int aux;
    cin >> aux;
    soma += aux;
    if (aux% 2)
      odd.push_back(aux);
      
  }
  if (n == 1 && soma % 2)
  {
    cout << "0\n";
  }
  else if (soma % 2)
  {
    sort(odd.begin(), odd.end());
    soma -= odd[0];
    cout << soma << "\n";
  }
  else
  {
    cout << soma << "\n";
  }
  
}


int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
  solve();
 	return 0;
}