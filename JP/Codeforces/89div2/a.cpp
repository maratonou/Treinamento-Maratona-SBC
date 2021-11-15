#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

char min_vowels[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
char max_vowels[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};

int isVowel(char ch)
{
	for (int i = 0; i < 6; i++)
	{
		if (ch == min_vowels[i])
			return 1;
	}
	for (int i = 0; i < 6; i++)
	{
		if (ch == max_vowels[i])
			return 1;
	}
	return 0;
}

void solve()
{
	string s = "";
    string input;
    cin >> input;

	for (int i = 0; input[i] != '\0'; i++)
	{
        char ch = input[i];
		if (!isVowel(ch))
		{
			if (ch >= 'A' && ch <= 'Z')
			{
				ch = ch-'A'+'a';
			}
			s += '.';
			s += ch;
		}
	}
	cout << s << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}