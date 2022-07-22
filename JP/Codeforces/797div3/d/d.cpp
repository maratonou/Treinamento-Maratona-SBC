#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

int possible(string &s, int k, int n)
{
	int mode = 0;
	int qtd = 0;
	for (int i = 0; i < n; i++) {
		if (mode == 0) {
			if (s[i]=='B') {
				mode = 1;
				i--;
			}
		}
		if (mode == 1) {
			if (s[i]!='B') {
				mode = 0;
				qtd = 0;
			}
			else {
				qtd++;
				if (qtd == k) {
					return 1;
				}
			}
		}
	}
	return 0;
}

void solve()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;

	if (possible(s, k, n) == 1) {
		cout << "0\n";
		return;
	} 

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}