#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve() {
  int n;
  cin >> n;
  int commom = n/3;
  int left = n%3;
  int ones = commom;
  int twos = commom;
  if (left == 2)
  {
      twos+= 1;
  }
  else if (left == 1)
  {
      ones += 1;
  }
  cout << ones << " " << twos << "\n";
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}