#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
  int n;
  cin >> n;
  if (n > 5)
  {
      for (int i = 0; i < 5; i++)
      {
          cout << "I";
      }
      cout << "\n";
      for (int i = 0; i < n-5; i++)
      {
          cout << "I";
      }
      cout << "\n";
  }
  else
  {
      if (!n) cout << "*";
      for (int i = 0; i < n; i++)
      {
          cout << "I";
      }
      cout << "\n*\n";
  }
}

int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	solve();
 	return 0;
}