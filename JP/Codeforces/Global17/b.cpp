#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const string ENDL = "\n";

int kalindromo(vi &a, int x)
{
    // cout <<  "x = " << x << ENDL;
    int l = 0, r = a.size()-1;
    while (l < r)
    {
        if (a[l] == x)
        {
            // cout << "a[l] == x, l++, new l = " << l+1 << ENDL;
            l++;
        }
        else if (a[r] == x)
        {
            // cout << "a[r] == x, r--, new r = " << r-1 << ENDL;
            r--;
        }
        else if (l < r && a[l] != a[r])
        {
            return 0;
        }
        else if (l < r && a[l] == a[r])
        {
            // cout << "l++, r--\n";
            l++;
            r--;
        }
        else
            break;
    }
    return 1;
}

void solve()
{
	int n;
    cin >> n;

    vi vetor(n, 0);

    forn(i,n)
    {
        cin >> vetor[i];
    }
    int palindrome = 1;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] != vetor[n-1-i])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
    {
        cout << "YES\n";
        return;
    }
    vi outofplace;
    vi position;

    int offset = 0;
    int l = 0, r = n-1;
    while (l < r)
    {
        if (vetor[l] != vetor[r])
        {  
            // cout << vetor[l] << " " << vetor[r] << "\n";
            if (!kalindromo(vetor, vetor[l]) && !kalindromo(vetor, vetor[r]))
            {
                cout << "NO\n";
                return;
            }
            break;
        }
        else
        {
            l++;
            r--;
        }
    }
    cout << "YES\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}