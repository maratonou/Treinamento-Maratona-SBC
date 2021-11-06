#pragma GCC optimize("O3")
#include "bits/stdc++.h"
#include<string>

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve() {
  ll one, two;
  cin >> one >> two;
  
  if ( abs(one-two) > 1)
  {
    int n = one+two;
    int half = n/2;
    int rest = n%2;
    cout << half << " " << half+rest << "\n";
  }
  else
  {
    cout << "Ok\n";
  }
}


int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
  int t;
  cin >> t;
	while(t--) solve();
 	return 0;
}